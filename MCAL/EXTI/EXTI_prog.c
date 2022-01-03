#include"../../lib/STD_TYPES.h"
#include"../../lib/BIT_MATH.h"
#include "EXTI_registers.h"


void EXT0_vdEnable(void){
	/*Sensing control
	 * set as falling edge*/
	SET_BIT(MCUCR,MCUCR_ISC01);
	CLR_BIT(MCUCR,MCUCR_ISC00);
	/*Enable interrupt*/
	SET_BIT(GICR,GICR_INT0);
}
void EXT1_vdEnable(void){
	/*Sensing control
	 * set as falling edge*/
	SET_BIT(MCUCR,MCUCR_ISC11);
	CLR_BIT(MCUCR,MCUCR_ISC10);
	/*Enable interrupt*/
	SET_BIT(GICR,GICR_INT1);

}
void EXT2_vdEnable(void){
	/*Sensing control
	 * set as falling edge*/
	CLR_BIT(MCUCSR,MCUCSR_ISC2);
	/*Enable interrupt*/
	SET_BIT(GICR,GICR_INT2);
}
