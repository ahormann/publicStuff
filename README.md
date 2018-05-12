# publicStuff

With the firmware Hans De Goede extracted from SileadTouch.sys i was able to make the touchscreen 
working on my Trekstor-Primebook C11. 
No warranty at all, but on my device it currently works fine (no multitouch).

Steps to reproduce:
1. Add given .fw-file to /lib/firmware/silead
2. Download Kernel Sourcecode
3. Add given .c - snippet to [kernelcode]/drivers/platform/x86/silead_dmi.c
4. Recompile Kernel (will take about 3h)
5. Reboot and hope