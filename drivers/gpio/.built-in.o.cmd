cmd_drivers/gpio/built-in.o :=  arm-linux-androideabi-ld -EL    -r -o drivers/gpio/built-in.o drivers/gpio/gpiolib.o drivers/gpio/devres.o drivers/gpio/gpio-msm-v1.o drivers/gpio/gpio-sx150x.o 
