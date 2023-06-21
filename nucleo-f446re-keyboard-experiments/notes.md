Things learned:

printf() debugging over UART:
https://www.youtube.com/watch?v=Oc58Ikj-lNI
https://www.youtube.com/watch?v=WnCpPf7u4Xo

Include "stdio.h"

In both implementations, use the provided HAL_UART_Transmit() function to communicate over UART.
Write your own implementation of _write (originally defined in syscalls.c) or PUTCHAR_PROTOTYPE for printf() to use when communicating.
QUESTION: can I use these methods over other protocols besides UART?

To enable floating point support over UART, put  add "-u_printf_float" flag under Project->Properties->C/C++ Build->Settings->MCU-GCC-Linker->Miscellaneous->Other Flags

Pinout: https://doc.riot-os.org/group__boards__nucleo-f303re.html
