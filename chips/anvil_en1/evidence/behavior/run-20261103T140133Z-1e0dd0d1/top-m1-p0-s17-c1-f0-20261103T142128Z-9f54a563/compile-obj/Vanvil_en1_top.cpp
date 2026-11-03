// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vanvil_en1_top__pch.h"

//============================================================
// Constructors

Vanvil_en1_top::Vanvil_en1_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vanvil_en1_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , job_valid{vlSymsp->TOP.job_valid}
    , job_mode{vlSymsp->TOP.job_mode}
    , mem_req_ready{vlSymsp->TOP.mem_req_ready}
    , mem_rsp_valid{vlSymsp->TOP.mem_rsp_valid}
    , mem_rsp_error{vlSymsp->TOP.mem_rsp_error}
    , emb_ready{vlSymsp->TOP.emb_ready}
    , done_ready{vlSymsp->TOP.done_ready}
    , job_ready{vlSymsp->TOP.job_ready}
    , mem_req_valid{vlSymsp->TOP.mem_req_valid}
    , mem_req_write{vlSymsp->TOP.mem_req_write}
    , mem_rsp_ready{vlSymsp->TOP.mem_rsp_ready}
    , emb_valid{vlSymsp->TOP.emb_valid}
    , emb_last{vlSymsp->TOP.emb_last}
    , done_valid{vlSymsp->TOP.done_valid}
    , done_error{vlSymsp->TOP.done_error}
    , busy{vlSymsp->TOP.busy}
    , job_model{vlSymsp->TOP.job_model}
    , job_precision{vlSymsp->TOP.job_precision}
    , job_decode{vlSymsp->TOP.job_decode}
    , logit_valid{vlSymsp->TOP.logit_valid}
    , logit_ready{vlSymsp->TOP.logit_ready}
    , logit_last{vlSymsp->TOP.logit_last}
    , csr_valid{vlSymsp->TOP.csr_valid}
    , csr_write{vlSymsp->TOP.csr_write}
    , csr_ready{vlSymsp->TOP.csr_ready}
    , csr_rsp_valid{vlSymsp->TOP.csr_rsp_valid}
    , csr_rsp_ready{vlSymsp->TOP.csr_rsp_ready}
    , csr_error{vlSymsp->TOP.csr_error}
    , job_output_dim{vlSymsp->TOP.job_output_dim}
    , emb_index{vlSymsp->TOP.emb_index}
    , logit_data{vlSymsp->TOP.logit_data}
    , csr_addr{vlSymsp->TOP.csr_addr}
    , job_tokens{vlSymsp->TOP.job_tokens}
    , job_patch_rows{vlSymsp->TOP.job_patch_rows}
    , job_patch_cols{vlSymsp->TOP.job_patch_cols}
    , job_audio_frames{vlSymsp->TOP.job_audio_frames}
    , mem_rsp_rdata{vlSymsp->TOP.mem_rsp_rdata}
    , mem_req_wdata{vlSymsp->TOP.mem_req_wdata}
    , emb_data{vlSymsp->TOP.emb_data}
    , job_position{vlSymsp->TOP.job_position}
    , logit_index{vlSymsp->TOP.logit_index}
    , csr_wdata{vlSymsp->TOP.csr_wdata}
    , csr_rdata{vlSymsp->TOP.csr_rdata}
    , weights_base{vlSymsp->TOP.weights_base}
    , vision_weights_base{vlSymsp->TOP.vision_weights_base}
    , audio_weights_base{vlSymsp->TOP.audio_weights_base}
    , image_base{vlSymsp->TOP.image_base}
    , audio_base{vlSymsp->TOP.audio_base}
    , tokens_base{vlSymsp->TOP.tokens_base}
    , positions_base{vlSymsp->TOP.positions_base}
    , mask_base{vlSymsp->TOP.mask_base}
    , scratch_base{vlSymsp->TOP.scratch_base}
    , mem_req_addr{vlSymsp->TOP.mem_req_addr}
    , kv_base{vlSymsp->TOP.kv_base}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vanvil_en1_top::Vanvil_en1_top(const char* _vcname__)
    : Vanvil_en1_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vanvil_en1_top::~Vanvil_en1_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vanvil_en1_top___024root___eval_debug_assertions(Vanvil_en1_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vanvil_en1_top___024root___eval_static(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___eval_initial(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___eval_settle(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___eval(Vanvil_en1_top___024root* vlSelf);

void Vanvil_en1_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vanvil_en1_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vanvil_en1_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vanvil_en1_top___024root___eval_static(&(vlSymsp->TOP));
        Vanvil_en1_top___024root___eval_initial(&(vlSymsp->TOP));
        Vanvil_en1_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vanvil_en1_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vanvil_en1_top::eventsPending() { return false; }

uint64_t Vanvil_en1_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vanvil_en1_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vanvil_en1_top___024root___eval_final(Vanvil_en1_top___024root* vlSelf);

VL_ATTR_COLD void Vanvil_en1_top::final() {
    Vanvil_en1_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vanvil_en1_top::hierName() const { return vlSymsp->name(); }
const char* Vanvil_en1_top::modelName() const { return "Vanvil_en1_top"; }
unsigned Vanvil_en1_top::threads() const { return 1; }
void Vanvil_en1_top::prepareClone() const { contextp()->prepareClone(); }
void Vanvil_en1_top::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vanvil_en1_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vanvil_en1_top::trace()' called on model that was Verilated without --trace option");
}
