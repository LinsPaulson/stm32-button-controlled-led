# STM32 Button-Controlled LED (Bare-Metal CMSIS)

This project demonstrates how to build a simple but cleanly structured **bare-metal STM32 application** using CMSIS register access only—no HAL or LL libraries.

A user button connected to **PC13** controls an LED on **PA5**:
- Button pressed → LED ON  
- Button released → LED OFF  

This modular approach (separating `gpio.c`, `gpio.h`, and `main.c`) reflects real embedded coding practices used in industry.

---
