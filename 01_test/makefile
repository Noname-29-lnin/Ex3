# ///////////////////////////////////////////////////////////////
# The makefile created by Dong — for Xcelium simulation
# ///////////////////////////////////////////////////////////////

# ===== User configuration =====
TOPMODULE       ?= top                     # Top module (testbench)
INC_DIR         ?= ./                      # Output directory (for waves, logs, etc.)
LIB_DIR         ?=                         # Optional library path
FLIST           ?= $(INC_DIR)/flist.f      # Filelist chứa đường dẫn các file RTL + TB
COMP_DIR        := XCELIUM                 # Compile directory (subdir inside INC_DIR)

# ===== Tool configuration =====
TOOL            := xrun
TIME_UNIT       := -timescale 1ns/1ps
ACC_DEBUG       := +access+rwc             # Allow waveform access
SEED            := +ntb_random_seed=automatic
WAVE_DATA       := $(INC_DIR)/$(COMP_DIR)/waves.shm    # Waveform output
LOG_FILE        := $(INC_DIR)/$(COMP_DIR)/xrun.log     # Log file
COV_DIR         := $(INC_DIR)/$(COMP_DIR)/coverage     # Coverage report directory
WORK_DIR        := $(INC_DIR)/$(COMP_DIR)/xcelium.d    # Work directory

# ===== Default target =====
.PHONY: all clean compile run wave cov

all: compile run

# ==============================================================
# Compile + Elaborate
# ==============================================================
compile:
	@echo "-> Mkdir..."
	@mkdir -p $(INC_DIR)/$(COMP_DIR)
	@echo "-> Compile and Elaborate..."
	@$(TOOL) -sv $(TIME_UNIT) \
		-f $(FLIST) \
		-top $(TOPMODULE) \
		$(ACC_DEBUG) $(SEED) \
		+define+SIMULATION \
		-logfile $(LOG_FILE) \
		-work $(WORK_DIR) \
		64bit \
		-elaborate

# ==============================================================
# Run simulation (no GUI)
# ==============================================================
run:
	@echo "-> Run simulation..."
	@$(TOOL) -R \
		-logfile $(LOG_FILE) \
		-waves $(WAVE_DATA) \
		-work $(WORK_DIR)

# ==============================================================
# Run simulation with GUI (SimVision)
# ==============================================================
wave:
	@echo "-> Run simulation with GUI..."
	@$(TOOL) -sv $(TIME_UNIT) \
		-f $(FLIST) \
		-top $(TOPMODULE) \
		$(ACC_DEBUG) $(SEED) \
		-logfile $(LOG_FILE) \
		-work $(WORK_DIR) \
		-waves $(WAVE_DATA) \
		-gui -R

# ==============================================================
# Generate coverage report
# ==============================================================
cov:
	@echo "-> Generate coverage report..."
	@urg -dir $(WORK_DIR)/cov_work/scope -report $(COV_DIR)

# ==============================================================
# Clean simulation files
# ==============================================================
clean:
	@echo "-> Clean project..."
	@rm -rf $(WORK_DIR) $(INC_DIR)/$(COMP_DIR)/waves.shm $(INC_DIR)/$(COMP_DIR)/xrun.log $(COV_DIR)
	@echo "<Pass> Clean done."
