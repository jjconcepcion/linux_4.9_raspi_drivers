CC = ~/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64/bin/arm-linux-gnueabihf-gcc

all: ioctl_test

app: ioctl_test.c
	$(CC) -o $@ $^

clean:
	rm ioctl_test

deploy: ioctl_test
	scp $^ pi@rpi:
