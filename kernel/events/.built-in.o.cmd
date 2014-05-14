cmd_kernel/events/built-in.o :=  arm-linux-androideabi-ld -EL    -r -o kernel/events/built-in.o kernel/events/core.o kernel/events/ring_buffer.o kernel/events/callchain.o 
