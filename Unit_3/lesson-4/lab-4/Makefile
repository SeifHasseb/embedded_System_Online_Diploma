#@copyright : Seif
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m4 -gdwarf-2 -g -mthumb 
INCS =-I .
LIBS =
SRC =$(wildcard *.c)
OBJ=$(SRC:.c=.o)
As=$(wildcard *.s)
AsOBJ=$(As:.s=.o)
project_name=Unit3-lab4-cortexM4

all:$(project_name).bin
	@echo ">>>>>>Build is Done<<<<<<"

%.o : %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@

$(project_name).elf : $(OBJ) $(AsOBJ)
	$(CC)ld -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map
	cp $(project_name).elf $(project_name).axf


$(project_name).bin: $(project_name).elf
	$(CC)objcopy.exe -O binary $< $@
	
clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin
	