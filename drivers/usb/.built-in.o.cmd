cmd_drivers/usb/built-in.o :=  arm-linux-androideabi-ld -EL    -r -o drivers/usb/built-in.o drivers/usb/core/built-in.o drivers/usb/otg/built-in.o drivers/usb/host/built-in.o drivers/usb/class/built-in.o drivers/usb/storage/built-in.o drivers/usb/misc/built-in.o drivers/usb/gadget/built-in.o drivers/usb/usb-common.o 
