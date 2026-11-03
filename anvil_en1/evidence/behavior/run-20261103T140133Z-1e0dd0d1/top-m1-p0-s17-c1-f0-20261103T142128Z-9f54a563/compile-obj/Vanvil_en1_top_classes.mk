# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vanvil_en1_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vanvil_en1_top \
	Vanvil_en1_top___024root__DepSet_he13f94ea__0 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__0 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__1 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__2 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__3 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__4 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__5 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__6 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__7 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__8 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__9 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__10 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__11 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__12 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__13 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__14 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__15 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__16 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__17 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__18 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__19 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__20 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__21 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__22 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__23 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__24 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__25 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__26 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__27 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__28 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__29 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__30 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__31 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__32 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__33 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__34 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__35 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__36 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__37 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__38 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__39 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__40 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__41 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__42 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__43 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__44 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__45 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__46 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__47 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__48 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__49 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__50 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__51 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__52 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__53 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__54 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__55 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__56 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__57 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__58 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__59 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__60 \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__61 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vanvil_en1_top__ConstPool_0 \
	Vanvil_en1_top___024root__Slow \
	Vanvil_en1_top___024root__DepSet_he13f94ea__0__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__0__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__1__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__2__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__3__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__4__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__5__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__6__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__7__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__8__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__9__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__10__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__11__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__12__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__13__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__14__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__15__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__16__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__17__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__18__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__19__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__20__Slow \
	Vanvil_en1_top___024root__DepSet_he6b35ebb__21__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vanvil_en1_top__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
