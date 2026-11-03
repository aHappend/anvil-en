# Anvil-EN 系列 — 自主演进 Gemma-4 混合局部/全局注意力、逐层嵌入 (PLE) 与全模态 FPGA 加速器家族

[**English README (`README.md`)**](README.md) · [**Anvil-Q 系列**](https://github.com/aHappend/anvil-q) · [**Anvil-D 系列**](https://github.com/aHappend/anvil-d) · [**Anvil-QN 系列**](https://github.com/aHappend/anvil-qn) · [**Anvil-E 系列**](https://github.com/aHappend/anvil-e) · [**Anvil-EN 系列**](https://github.com/aHappend/anvil-en) · [**Furnace-X 异构 SoC**](https://github.com/aHappend/furnace-x) · [**Hammer-V RISC-V SoC**](https://github.com/aHappend/hammer-v)

与 **Anvil-Q**、**Anvil-D**、**Anvil-QN**、**Anvil-E** 完全平级的独立旗舰大模型芯片仓库。由父本 **Anvil-E4**（`Gemma-3` 多模态）演进为 5:1 环形滑动窗口/全局混合 KV 缓存、比例旋转位置编码（p-RoPE）与逐层嵌入（PLE）全模态架构，完成 **6 款本命与兼容模型** 及 **物理 Arria 10 板卡 8-Profile 流式 HIL + Furnace-X2 视觉语音多 IP 上板连用实测**。

## 顶层芯片代际目录一览（已直接提升至仓库根目录）

| 芯片代际（顶层目录） | 微架构与目标大模型范围 | 硅签核状态 | 顶会级中英文白皮书 PDF 与 RTL |
| :--- | :--- | :---: | :--- |
| **[`Anvil-EN1` (`/anvil_en1/`)](anvil_en1/)** | Gemma-4 5:1 Hybrid Local/Global KV, Proportional RoPE & PLE Engine (26 SV, 113.02 MHz) | **SIGNED OFF (95 SV, 113.02 MHz, 8-Profile HIL)** | [`SHOWCASE_REPORT.pdf`](anvil_en1/SHOWCASE_REPORT.pdf) · [`中文白皮书`](anvil_en1/SHOWCASE_REPORT.zh-CN.pdf) · [`REPORT.pdf`](anvil_en1/REPORT.pdf) |
| **[`Anvil-EN2` (`/anvil_en2/`)](anvil_en2/)** | Gemma-4 Omni-Modal Vision + Audio + Text Unified PLE Engine (30 SV, 113.02 MHz) | **Active Evolution (0 SV)** | [`SHOWCASE_REPORT.pdf`](anvil_en2/SHOWCASE_REPORT.pdf) · [`中文白皮书`](anvil_en2/SHOWCASE_REPORT.zh-CN.pdf) · [`REPORT.pdf`](anvil_en2/REPORT.pdf) |
| **[`Anvil-EN3` (`/anvil_en3/`)](anvil_en3/)** | Gemma-4-26B-A4B Sparse MoE & Shared KV-Cache Edge Engine | **Active Evolution (0 SV)** | [`anvil_en3/rtl/`](anvil_en3/rtl/) |
| **[`Anvil-EN4` (`/anvil_en4/`)](anvil_en4/)** | Gemma-4 Flagship Zero-Host Real-Time Multimodal Streaming SoC Engine | **Active Evolution (0 SV)** | [`anvil_en4/rtl/`](anvil_en4/rtl/) |

## 多规模本命/兼容模型评测、父代（`N-1`）演进对比与 8-Profile 物理板卡 HIL

- **单芯片覆盖 6 款本命与向后兼容模型**：包含 4 个本命参数量级与 2 个向后兼容父代模型家族，在 `ctx = 128..4096` 全长序列下与同机双路 Xeon CPU (FP32) 及 Tesla V100 GPU (FP16) 进行吞吐、延迟、能效及抖动全面对比。
- **物理 Arria 10 板卡 8-Profile 流式 HIL 与异构 SoC 上板连用**：在 Intel Arria 10 GX1150 实机板卡（Chip ID `23645547322997765`）上跑通 8 组不同模型权重/激活/Token 激励配置及跨家族异构 SoC 连用流水线（详见 `evidence/soc-board-coexecution.json`）。
