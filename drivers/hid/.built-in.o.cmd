cmd_drivers/hid/built-in.o :=  arm-linux-androideabi-ld -EL    -r -o drivers/hid/built-in.o drivers/hid/hid.o drivers/hid/hid-apple.o drivers/hid/hid-magicmouse.o drivers/hid/hid-microsoft.o drivers/hid/usbhid/built-in.o 
