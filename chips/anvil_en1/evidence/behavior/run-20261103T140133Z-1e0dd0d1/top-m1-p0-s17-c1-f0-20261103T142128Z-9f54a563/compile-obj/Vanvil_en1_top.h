// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VANVIL_EN1_TOP_H_
#define VERILATED_VANVIL_EN1_TOP_H_  // guard

#include "verilated.h"

class Vanvil_en1_top__Syms;
class Vanvil_en1_top___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vanvil_en1_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vanvil_en1_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&job_valid,0,0);
    VL_IN8(&job_mode,2,0);
    VL_IN8(&mem_req_ready,0,0);
    VL_IN8(&mem_rsp_valid,0,0);
    VL_IN8(&mem_rsp_error,0,0);
    VL_IN8(&emb_ready,0,0);
    VL_IN8(&done_ready,0,0);
    VL_OUT8(&job_ready,0,0);
    VL_OUT8(&mem_req_valid,0,0);
    VL_OUT8(&mem_req_write,0,0);
    VL_OUT8(&mem_rsp_ready,0,0);
    VL_OUT8(&emb_valid,0,0);
    VL_OUT8(&emb_last,0,0);
    VL_OUT8(&done_valid,0,0);
    VL_OUT8(&done_error,3,0);
    VL_OUT8(&busy,0,0);
    VL_IN8(&job_model,1,0);
    VL_IN8(&job_precision,1,0);
    VL_IN8(&job_decode,0,0);
    VL_OUT8(&logit_valid,0,0);
    VL_IN8(&logit_ready,0,0);
    VL_OUT8(&logit_last,0,0);
    VL_IN8(&csr_valid,0,0);
    VL_IN8(&csr_write,0,0);
    VL_OUT8(&csr_ready,0,0);
    VL_OUT8(&csr_rsp_valid,0,0);
    VL_IN8(&csr_rsp_ready,0,0);
    VL_OUT8(&csr_error,0,0);
    VL_IN16(&job_output_dim,15,0);
    VL_OUT16(&emb_index,15,0);
    VL_OUT16(&logit_data,15,0);
    VL_IN16(&csr_addr,11,0);
    VL_IN(&job_tokens,31,0);
    VL_IN(&job_patch_rows,31,0);
    VL_IN(&job_patch_cols,31,0);
    VL_IN(&job_audio_frames,31,0);
    VL_IN(&mem_rsp_rdata,31,0);
    VL_OUT(&mem_req_wdata,31,0);
    VL_OUT(&emb_data,31,0);
    VL_IN(&job_position,31,0);
    VL_OUT(&logit_index,17,0);
    VL_IN(&csr_wdata,31,0);
    VL_OUT(&csr_rdata,31,0);
    VL_IN64(&weights_base,63,0);
    VL_IN64(&vision_weights_base,63,0);
    VL_IN64(&audio_weights_base,63,0);
    VL_IN64(&image_base,63,0);
    VL_IN64(&audio_base,63,0);
    VL_IN64(&tokens_base,63,0);
    VL_IN64(&positions_base,63,0);
    VL_IN64(&mask_base,63,0);
    VL_IN64(&scratch_base,63,0);
    VL_OUT64(&mem_req_addr,63,0);
    VL_IN64(&kv_base,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vanvil_en1_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vanvil_en1_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vanvil_en1_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vanvil_en1_top();
  private:
    VL_UNCOPYABLE(Vanvil_en1_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard
