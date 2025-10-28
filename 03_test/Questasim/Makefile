# ///////////////////////////////////////////////////////////////
# The makefile create by Dong
# ///////////////////////////////////////////////////////////////
#==============================
# Simulation Configuration
#==============================
TOPMODULE       ?= top
TB_NAME         ?= tb_$(TOPMODULE)
INC_DIR         ?= ./build
INC_WORK		:= $(INC_DIR)/QuestaSim
RADIX           ?= decimal

#==============================
# Targets
#==============================
.PHONY: all all_wave all_cov compile compile_cover run run_cover wave gen_cov gen_html gen_view clean help 

#------------------------------
# Default target
#------------------------------
all: compile run
all_wave: compile run wave
all_cov: compile_cover run_cover gen_cov gen_html

#------------------------------
# Compile
#------------------------------
compile:
	@echo "-> mkdir..."
	@mkdir -p $(INC_WORK) \
		&& echo "<Pass> mkdir $(INC_WORK)" \
		|| echo "<False> mkdir $(INC_WORK)"
	@echo "-> compile..."
	@vlib $(INC_WORK)/work > /dev/null 2>&1
	@vmap work $(INC_WORK)/work > /dev/null 2>&1
	@vlog -f $(INC_DIR)/flist.f | tee $(INC_WORK)/compile.log \
		&& echo "<Pass> compile $(TOPMODULE)" \
		|| echo "<False> compile $(TOPMODULE)"

compile_cover:
	@echo "-> mkdir..."
	@mkdir -p $(INC_WORK) \
		&& echo "<Pass> mkdir $(INC_WORK)" \
		|| echo "<False> mkdir $(INC_WORK)"
	@echo "-> compile (coverage mode)..."
	@vlib $(INC_WORK)/work > /dev/null 2>&1
	@vmap work $(INC_WORK)/work > /dev/null 2>&1
	@vlog +cover=bcesft -f $(INC_DIR)/flist.f | tee $(INC_WORK)/compile.log \
		&& echo "<Pass> compile_cover $(TOPMODULE)" \
		|| echo "<False> compile_cover $(TOPMODULE)"

#------------------------------
# Run Simulation
#------------------------------
# run:
# 	@echo "-> run..."
# 	@vsim -lib $(INC_WORK)/work -debugDB -l $(INC_WORK)/$(TB_NAME).log \
# 		-voptargs=+acc -assertdebug -c $(TB_NAME) \
# 		-wlf $(INC_WORK)/$(TB_NAME).wlf \
# 		-do "log -r /*;run -all;"
run:
	@echo "-> Copy modelsim.ini..."
	@cp ./modelsim.ini $(INC_WORK)
	@if ls ./*.vcd > /dev/null 2>&1; then \
		mv ./*.vcd $(INC_DIR)/ 2>/dev/null; \
		echo "<Pass> moved .vcd files to $(INC_DIR)"; \
	else \
		echo "<Info> no .vcd files found in current directory"; \
	fi
	@echo "-> run..."
	@vsim -lib $(INC_WORK)/work -debugDB -l $(INC_WORK)/$(TB_NAME).log \
		-voptargs=+acc -assertdebug -c $(TB_NAME) \
		-wlf $(INC_WORK)/$(TB_NAME).wlf \
		-do "cd $(INC_WORK); log -r /*; run -all;"

run_cover:
	@echo "-> Copy modelsim.ini..."
	@cp ./modelsim.ini $(INC_WORK)
		@echo "-> Move .vcd..."
	@if ls ./*.vcd > /dev/null 2>&1; then \
		mv ./*.vcd $(INC_DIR)/ 2>/dev/null; \
		echo "<Pass> moved .vcd files to $(INC_DIR)"; \
	else \
		echo "<Info> no .vcd files found in current directory"; \
	fi
	@echo "-> run_cover..."
	@vsim -coverage -lib $(INC_WORK)/work -l $(INC_WORK)/$(TB_NAME).log \
		-voptargs='+cover=bcesft' -assertdebug -c $(TB_NAME) \
		-wlf $(INC_WORK)/$(TB_NAME).wlf \
		-do "coverage save -onexit $(INC_WORK)/$(TB_NAME).ucdb; cd $(INC_WORK); log -r /*; run -all;"

#------------------------------
# Waveform Viewer
#------------------------------
wave:
	@echo "-> open waveform..."
	@vsim -i -view $(INC_WORK)/$(TB_NAME).wlf -do "add wave vsim:/$(TB_NAME)/*; radix -$(RADIX)" &
	@echo "<Pass> open waveform for $(TB_NAME)"

#------------------------------
# Coverage Reports
#------------------------------
gen_cov:
	@echo "-> generate coverage text reports..."
	@mkdir -p $(INC_WORK)/coverage \
		&& echo "<Pass> mkdir $(INC_WORK)/coverage" \
		|| echo "<False> mkdir $(INC_WORK)/coverage"
	@cd $(INC_WORK) && \
	vcover merge IP.ucdb *.ucdb > /dev/null 2>&1 && \
	vcover report IP.ucdb -output coverage/summary_report.txt && \
	vcover report -zeros -details -code bcesft -annotate -All -codeAll IP.ucdb -output coverage/detail_report.txt \
		&& echo "<Pass> generate coverage reports" \
		|| echo "<False> generate coverage reports"

gen_html:
	@echo "-> generate HTML coverage report..."
	@mkdir -p $(INC_WORK)/coverage \
		&& echo "<Pass> mkdir $(INC_WORK)/coverage" \
		|| echo "<False> mkdir $(INC_WORK)/coverage"
	@cd $(INC_WORK) && \
	vcover merge IP.ucdb *.ucdb > /dev/null 2>&1 && \
	vcover report -zeros -details -code bcesft -annotate -testhitdataAll -html IP.ucdb \
		&& echo "<Pass> generate HTML report" \
		|| echo "<False> generate HTML report"

gen_view:
	@echo "-> open HTML coverage report..."
	xdg-open "$(INC_WORK)/covhtmlreport/index.html" >/dev/null 2>&1 

#------------------------------
# Clean
#------------------------------
clean:
	@echo "-> clean..."
	@rm -rf $(INC_WORK)/work $(INC_WORK)/vsim.dbg $(INC_WORK)/*.ini $(INC_WORK)/*.log $(INC_WORK)/*.vcd \
		$(INC_WORK)/*.wlf $(INC_WORK)/transcript $(INC_WORK)/*.ucdb $(INC_WORK)/coverage
	@echo "<Pass> clean $(TOPMODULE)"

#------------------------------
# Help Menu
#------------------------------
help:
	@echo ""
	@echo "****************************************"
	@echo "** Makefile Help Menu"
	@echo "****************************************"
	@echo "** make clean      : Clean all compiled data"
	@echo "** make build      : Build the design"
	@echo "** make build_cov  : Build the design in coverage mode"
	@echo "** make run        : Run simulation"
	@echo "** make run_cov    : Run simulation in coverage mode"
	@echo "** make all        : Build and run simulation"
	@echo "** make all_cov    : Build and run simulation in coverage mode"
	@echo "** make wave       : Open waveform viewer (GUI mode)"
	@echo "** make gen_cov    : Merge UCDB files and generate text coverage report"
	@echo "** make gen_html   : Merge UCDB files and generate HTML coverage report"
	@echo "** make gen_view   : Open HTML coverage report in default web browser"
	@echo "****************************************"
	@echo ""
