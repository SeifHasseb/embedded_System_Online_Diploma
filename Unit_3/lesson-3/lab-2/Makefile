#@copyright : Seif
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -gdwarf-2 -mthumb 
INCS =-I .
LIBS =
SRC =$(wildcard *.c)
OBJ=$(SRC:.c=.o)
As=$(wildcard *.s)
AsOBJ=$(As:.s=.o)
project_name=learn-in-depth-cortex-m3

all:$(project_name).bin
	@echo ">>>>>>Build is Done<<<<<<"

%.o : %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@

$(project_name).elf : $(OBJ) $(AsOBJ)
	$(CC)ld -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map

$(project_name).bin: $(project_name).elf
	$(CC)objcopy.exe -O binary $< $@
	
clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin
	