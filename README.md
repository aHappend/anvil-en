# Anvil-EN Series — Autonomous Gemma-4 Hybrid Local/Global Attention, PLE & Omni-Modal FPGA Accelerators

[**中文主页 (`README.zh-CN.md`)**](README.zh-CN.md) · [**Anvil-Q Series**](https://github.com/aHappend/anvil-q) · [**Anvil-D Series**](https://github.com/aHappend/anvil-d) · [**Anvil-QN Series**](https://github.com/aHappend/anvil-qn) · [**Anvil-E Series**](https://github.com/aHappend/anvil-e) · [**Anvil-EN Series**](https://github.com/aHappend/anvil-en) · [**Furnace-X SoCs**](https://github.com/aHappend/furnace-x) · [**Hammer-V RISC-V SoCs**](https://github.com/aHappend/hammer-v)

Peer flagship series alongside **Anvil-Q**, **Anvil-D**, **Anvil-QN**, and **Anvil-E**. Evolved from parent **Anvil-E4** (`Gemma-3` multimodal) into 5:1 circular sliding-window + global KV cache, Proportional RoPE (`p-RoPE`), and Per-Layer Embeddings (`PLE`), verified across **6 model scales** (`Gemma-4-E2B/E4B/26B-A4B/31B`, plus backward-compatible `Gemma-2-2B`, `Gemma-3-1B/4B`) and **8 physical Arria 10 HIL profiles**.

## Top-Level Chip Generations (Promoted to Repository Root)

| Chip Generation (Top-Level Dir) | Microarchitecture & Target Model Scope | Silicon Status | Top-Conference Whitepapers & RTL |
| :--- | :--- | :---: | :--- |
| **[`Anvil-EN1` (`/anvil_en1/`)](anvil_en1/)** | Gemma-4 5:1 Hybrid Local/Global KV, Proportional RoPE & PLE Engine (26 SV, 113.02 MHz) | **SIGNED OFF (95 SV, 113.02 MHz, 8-Profile HIL)** | [`SHOWCASE_REPORT.pdf`](anvil_en1/SHOWCASE_REPORT.pdf) · [`中文白皮书`](anvil_en1/SHOWCASE_REPORT.zh-CN.pdf) · [`REPORT.pdf`](anvil_en1/REPORT.pdf) |
| **[`Anvil-EN2` (`/anvil_en2/`)](anvil_en2/)** | Gemma-4 Omni-Modal Vision + Audio + Text Unified PLE Engine (30 SV, 113.02 MHz) | **Active Evolution (0 SV)** | [`SHOWCASE_REPORT.pdf`](anvil_en2/SHOWCASE_REPORT.pdf) · [`中文白皮书`](anvil_en2/SHOWCASE_REPORT.zh-CN.pdf) · [`REPORT.pdf`](anvil_en2/REPORT.pdf) |
| **[`Anvil-EN3` (`/anvil_en3/`)](anvil_en3/)** | Gemma-4-26B-A4B Sparse MoE & Shared KV-Cache Edge Engine | **Active Evolution (0 SV)** | [`anvil_en3/rtl/`](anvil_en3/rtl/) |
| **[`Anvil-EN4` (`/anvil_en4/`)](anvil_en4/)** | Gemma-4 Flagship Zero-Host Real-Time Multimodal Streaming SoC Engine | **Active Evolution (0 SV)** | [`anvil_en4/rtl/`](anvil_en4/rtl/) |

## Multi-Scale Model Matrix, Generational (`N-1`) Evolution & 8-Profile Arria 10 HIL

- **6 Evaluated Model Scales per Chip**: 4 native parameter scales + 2 backward-compatible parent-architecture model families, benchmarked against dual-socket Intel Xeon CPU (FP32) and NVIDIA Tesla V100 32GB GPU (FP16) across context lengths `128..4096`.
- **8-Profile Physical FPGA Board HIL**: 8 distinct on-board M20K weight/activation/token stimulus profiles executed on physical Intel Arria 10 GX1150 (`10AX115N2F45E1SG`, Chip ID `23645547322997765`) with 0 bit errors, plus heterogeneous multi-IP SoC board co-execution (`evidence/soc-board-coexecution.json`).
