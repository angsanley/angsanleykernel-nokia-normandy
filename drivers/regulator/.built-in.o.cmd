cmd_drivers/regulator/built-in.o :=  arm-linux-androideabi-ld -EL    -r -o drivers/regulator/built-in.o drivers/regulator/core.o drivers/regulator/dummy.o drivers/regulator/fixed-helper.o drivers/regulator/fan53555.o drivers/regulator/onsemi-ncp6335d.o drivers/regulator/msm-gpio-regulator.o 
