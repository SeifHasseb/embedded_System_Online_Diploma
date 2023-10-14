//Startup.c
//Eng.Seif

#include <stdint.h>

extern int main (void);

void Reset_Handler(void);
void Defualt_Handler (void);
void NMI_Handler(void)__attribute__((weak,alias("Defualt_Handler")));;
void H_fault_Handler(void)__attribute__((weak,alias("Defualt_Handler")));;

//Booking 1024 B located by .bss through un intialized array of int 256 Element (256*4=1024)
static unsigned long Stack_top[256];

void(* const g_p_fn_Vectors[])()__attribute__((section(".vectors"))) =
{
	(void(*)()) ((unsigned long)Stack_top +sizeof(Stack_top)),
	&Reset_Handler,
	&NMI_Handler,
	&H_fault_Handler


};

extern unsigned int _E_text ;
extern unsigned int _S_DATA ;
extern unsigned int _E_DATA ;
extern unsigned int _S_bss ;
extern unsigned int _E_bss ;

void Reset_Handler(){

	//copy Data from Flash to Ram
	
	unsigned int i;
	unsigned int DATA_size =(unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA;

		unsigned char* P_src = (unsigned char*)&_E_text;
		unsigned char* P_dst = (unsigned char*)&_S_DATA;

		for(i=0 ; i< DATA_size;i++){

			*((unsigned char*)P_dst++) =*((unsigned char*)P_src++) ;
		}

		// init .bss section in SRAM = 0 
	unsigned int bss_size =(unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	P_dst = (unsigned char*)&_S_bss;

for(i=0 ; i< bss_size;i++){

			*((unsigned char*)P_dst) =(unsigned char)0;
			(unsigned char*)P_dst++;
		}

	main();
}	

void Defualt_Handler (){
 
	Reset_Handler();
}

