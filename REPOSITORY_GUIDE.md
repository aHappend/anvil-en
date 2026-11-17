# Anvil-EN — Repository guide / 文件导航

[English](README.md) · [简体中文](README.zh-CN.md)

Documentation inventory checked on 2026-11-17, against repository base `ad01021e44ec36518a76803f0a27ed83cf142773`.

## Reading the inventory / 阅读方法

This is a path-level index, not a new experiment or a recertification. Each measurement belongs to the exact linked record and directory. Different copies of a chip can contain different source revisions and results. A recorded pass does not imply that another copy, model size, software stack or board image passed.

本页按实际路径列出交付物，不代表新实验或重新签核。同名芯片的多份目录可能有不同源码和结果；一份记录的通过不外推到其他副本、模型规模、软件栈或板卡镜像。

## Source, tests and reports / 源码、测试与报告

| Existing directory | Source / constraints | Public tests / technical documents | Reports |
| --- | --- | --- | --- |
| [`anvil-en1/`](anvil-en1/) | [`anvil-en1/rtl/`](anvil-en1/rtl/) | [`anvil-en1/tests/`](anvil-en1/tests/) · [`anvil-en1/design/`](anvil-en1/design/) | [`anvil-en1/REPORT.md`](anvil-en1/REPORT.md) · [`anvil-en1/REPORT.pdf`](anvil-en1/REPORT.pdf) · [`anvil-en1/SHOWCASE_REPORT.pdf`](anvil-en1/SHOWCASE_REPORT.pdf) · [`anvil-en1/SHOWCASE_REPORT.zh-CN.pdf`](anvil-en1/SHOWCASE_REPORT.zh-CN.pdf) |
| [`anvil-en2/`](anvil-en2/) | — | — | [`anvil-en2/REPORT.md`](anvil-en2/REPORT.md) · [`anvil-en2/REPORT.pdf`](anvil-en2/REPORT.pdf) · [`anvil-en2/SHOWCASE_REPORT.pdf`](anvil-en2/SHOWCASE_REPORT.pdf) · [`anvil-en2/SHOWCASE_REPORT.zh-CN.pdf`](anvil-en2/SHOWCASE_REPORT.zh-CN.pdf) |
| [`anvil_en1/`](anvil_en1/) | [`anvil_en1/rtl/`](anvil_en1/rtl/) | [`anvil_en1/tests/`](anvil_en1/tests/) · [`anvil_en1/design/`](anvil_en1/design/) | [`anvil_en1/REPORT.md`](anvil_en1/REPORT.md) · [`anvil_en1/REPORT.pdf`](anvil_en1/REPORT.pdf) · [`anvil_en1/SHOWCASE_REPORT.pdf`](anvil_en1/SHOWCASE_REPORT.pdf) · [`anvil_en1/SHOWCASE_REPORT.zh-CN.pdf`](anvil_en1/SHOWCASE_REPORT.zh-CN.pdf) |
| [`anvil_en2/`](anvil_en2/) | — | — | [`anvil_en2/REPORT.md`](anvil_en2/REPORT.md) · [`anvil_en2/REPORT.pdf`](anvil_en2/REPORT.pdf) · [`anvil_en2/SHOWCASE_REPORT.pdf`](anvil_en2/SHOWCASE_REPORT.pdf) · [`anvil_en2/SHOWCASE_REPORT.zh-CN.pdf`](anvil_en2/SHOWCASE_REPORT.zh-CN.pdf) |
| [`chips/anvil_en1/`](chips/anvil_en1/) | [`chips/anvil_en1/rtl/`](chips/anvil_en1/rtl/) | [`chips/anvil_en1/tests/`](chips/anvil_en1/tests/) · [`chips/anvil_en1/design/`](chips/anvil_en1/design/) | [`chips/anvil_en1/REPORT.md`](chips/anvil_en1/REPORT.md) · [`chips/anvil_en1/REPORT.pdf`](chips/anvil_en1/REPORT.pdf) · [`chips/anvil_en1/SHOWCASE_REPORT.pdf`](chips/anvil_en1/SHOWCASE_REPORT.pdf) · [`chips/anvil_en1/SHOWCASE_REPORT.zh-CN.pdf`](chips/anvil_en1/SHOWCASE_REPORT.zh-CN.pdf) |
| [`chips/anvil_en2/`](chips/anvil_en2/) | — | — | [`chips/anvil_en2/REPORT.md`](chips/anvil_en2/REPORT.md) · [`chips/anvil_en2/REPORT.pdf`](chips/anvil_en2/REPORT.pdf) · [`chips/anvil_en2/SHOWCASE_REPORT.pdf`](chips/anvil_en2/SHOWCASE_REPORT.pdf) · [`chips/anvil_en2/SHOWCASE_REPORT.zh-CN.pdf`](chips/anvil_en2/SHOWCASE_REPORT.zh-CN.pdf) |

## Public result records / 公开结果记录

Status and numbers below are transcribed only from the linked record. Functional simulation, generic synthesis, standalone/virtual-pin timing, bridge connectivity, workload readback and system-software execution are separate scopes. Missing entries mean that this index found no matching public record at that path, not that an experiment failed or never occurred.

下表状态与数值只来自对应文件。功能仿真、通用综合、独立 IP／虚拟引脚时序、桥接连通性、工作负载读回和系统软件执行分别解释；未列出不等于判定失败或从未做过。

| Exact directory | Record | Recorded result and scope |
| --- | --- | --- |
| `anvil-en1` | [`anvil-en1/evidence/verification-receipts.json`](anvil-en1/evidence/verification-receipts.json) | Recorded artifact; inspect its applicability, source binding and scope. |
| `anvil-en1` | [`anvil-en1/evidence/rtl-timing-lint.json`](anvil-en1/evidence/rtl-timing-lint.json) | recorded status: `passed` |
| `anvil-en2` | — | Use the public technical reports and tests above; no matching standalone record indexed here. |
| `anvil_en1` | [`anvil_en1/evidence/verification-receipts.json`](anvil_en1/evidence/verification-receipts.json) | Recorded artifact; inspect its applicability, source binding and scope. |
| `anvil_en1` | [`anvil_en1/evidence/rtl-timing-lint.json`](anvil_en1/evidence/rtl-timing-lint.json) | recorded status: `passed` |
| `anvil_en2` | — | Use the public technical reports and tests above; no matching standalone record indexed here. |
| `chips/anvil_en1` | [`chips/anvil_en1/evidence/verification-receipts.json`](chips/anvil_en1/evidence/verification-receipts.json) | Recorded artifact; inspect its applicability, source binding and scope. |
| `chips/anvil_en1` | [`chips/anvil_en1/evidence/rtl-timing-lint.json`](chips/anvil_en1/evidence/rtl-timing-lint.json) | recorded status: `passed` |
| `chips/anvil_en2` | — | Use the public technical reports and tests above; no matching standalone record indexed here. |

## File-management policy / 文件管理约定

- Keep RTL, constraints, tests and result originals in their existing locations. This documentation refresh does not move or delete them.
- Hyphenated, underscored and `chips/` directories are separate existing trees, not interchangeable aliases. The index lists all of them without declaring one authoritative.
- Preserve dated reports as publications. Update the README and this guide when the public source/evidence changes; do not silently rewrite an old result.
- Keep chip artifacts separate from the private Vulcan implementation. Public reproducibility instructions must not require private framework code or internal operation traces.

保留现有源码、约束、测试和原始证据路径；连字符、下划线和 `chips/` 多份目录不自动视为等价。历史报告保留其发表时范围，公开复现不得依赖私有框架实现。
