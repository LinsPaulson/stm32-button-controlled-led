#include "gpio.h"
#include "stm32f0xx.h"

void led_init(void)
{
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;
	GPIOA->MODER |= (1U << 10);
	GPIOA->MODER &= ~(1U << 11);
}

void led_on(void)
{
	GPIOA->ODR |= GPIO_ODR_5;
}

void led_off(void)
{
	GPIOA->ODR &= ~GPIO_ODR_5;
}




void btn_init(void)
{
	// PC13
	RCC->AHBENR |= RCC_AHBENR_GPIOCEN;
	GPIOC->MODER &= ~(1u << 26);
	GPIOC->MODER &= ~(1u << 27);
}

bool btn_get_state(void)
{
	bool state = false;

	if (!(GPIOC->IDR & GPIO_IDR_13)) {
		state = true;
	}
	return state;
}





