# ARM Lite

<img src="https://arm-lite.teddy-van-jerry.org/ARM_Lite_Logo.png" style="max-height: 4.5cm;" alt="Logo">

Lite Version of ARM CPU that Extends ARM LEGv8.

- GitHub Repository: [Teddy-van-Jerry/ARM_Lite](https://github.com/Teddy-van-Jerry/ARM_Lite)
- Website: https://arm-lite.teddy-van-jerry.org

## CPU Design
### Features
ARM Lite CPU has the following features:
- Subset of standard ARMv8 (64-bit)
- Pipeline
- Hazard Detection and Forwarding
- Instructions

### Supported Instructions
| **Instruction Type** |       **Instructions**       |
| R Type           | `ADD`, `SUB`, `AND`, `ORR`, `EOR`, `LSL`, `LSR`, `MUL` |
| I Type           | `ADDI`, `SUBI`, `ANDI`, `ORRI`, `EORI` |
| D Type           | `LDUR`, `STUR` |
| B Type           | `B` |
| CB Type          | `CBZ`, `CBNZ` |

### Archiecture
![ARM Lite CPU Archiecture](https://arm-lite.teddy-van-jerry.org/wp-content/uploads/2021/12/AMR_Lite_CPU.png)
> This is drawn by Teddy van Jerry using *Visio Professional 2021*.

## Acknowledgements
- **[ARM-LEGv8](https://github.com/nxbyte/ARM-LEGv8)** by *[nxbyte](https://github.com/nxbyte)*
- **Computer Organization and Design - The Hardware/Software Interface** by *David A. Patterson* and *John L. Hennessy*.

## Simulation Guide
This work is developed on Vivado 2017.4.

## License
This project is licensed under the [MIT LICENSE](https://arm-lite.teddy-van-jerry.org/info/license/).
