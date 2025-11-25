#include <stdint.h>
#include "gpio.h"

int main(void)
{
	bool btn_state = false;

	/*Init led*/
	led_init();
	/*Init button*/
	btn_init();

	while(1){
		/* check button state */
		btn_state = btn_get_state();

		if(btn_state){
			/* turn led on*/
			led_on();
		}else{
			/* turn led off */
			led_off();
		}
	}
}













