// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_Question6__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_Question6::Vtb_Question6(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_Question6__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_Question6::Vtb_Question6(const char* _vcname__)
    : Vtb_Question6(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_Question6::~Vtb_Question6() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_Question6___024root___eval_debug_assertions(Vtb_Question6___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_Question6___024root___eval_static(Vtb_Question6___024root* vlSelf);
void Vtb_Question6___024root___eval_initial(Vtb_Question6___024root* vlSelf);
void Vtb_Question6___024root___eval_settle(Vtb_Question6___024root* vlSelf);
void Vtb_Question6___024root___eval(Vtb_Question6___024root* vlSelf);

void Vtb_Question6::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_Question6::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_Question6___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_Question6___024root___eval_static(&(vlSymsp->TOP));
        Vtb_Question6___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_Question6___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_Question6___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_Question6::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_Question6::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_Question6::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_Question6___024root___eval_final(Vtb_Question6___024root* vlSelf);

VL_ATTR_COLD void Vtb_Question6::final() {
    Vtb_Question6___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_Question6::hierName() const { return vlSymsp->name(); }
const char* Vtb_Question6::modelName() const { return "Vtb_Question6"; }
unsigned Vtb_Question6::threads() const { return 1; }
void Vtb_Question6::prepareClone() const { contextp()->prepareClone(); }
void Vtb_Question6::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_Question6::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_Question6___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_Question6___024root__trace_init_top(Vtb_Question6___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_Question6___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question6___024root*>(voidSelf);
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_Question6___024root__trace_decl_types(tracep);
    Vtb_Question6___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_Question6___024root__trace_register(Vtb_Question6___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_Question6::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_Question6::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_Question6___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
