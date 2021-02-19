# publicStuff

With the firmware Hans de Goede extracted from SileadTouch.sys i was able to make the touchscreen 
working on my Trekstor-Primebook C11. 
No warranty at all, but on my device it currently works fine.

Update: 
The Kernelchanges where merged into the new Kernel.
So if you have a recent Kernel and no working touchscreen follw this steps:
1. Add given .fw-file to /lib/firmware/silead
2. run 'sudo modprobe silead'

If you want to patch an old Kernel-version you have to do this :
1. Add given .fw-file to /lib/firmware/silead
2. Download Kernel Sourcecode
3. Apply given .patch to [path to kernelcode]/drivers/platform/x86/silead_dmi.c.
   Use for example 'patch [path]/silead_dmi.c [filename].patch'.
   What patch you have to use depends on how you want to hold your device (horizonal like a computer or vertical like a tablet).
   You also can compile your kernel twice (once with each snippet) and choose while booting.
4. Recompile Kernel (will take about 3h on the Primebook)
5. Reboot and hope
