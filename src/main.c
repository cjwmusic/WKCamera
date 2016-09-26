#include "stm32f4xx.h"
#include "stm32f429i_discovery.h"

int main(void) {

  STM_EVAL_LEDInit(LED3);
  STM_EVAL_LEDInit(LED4);

  /* Turn on LED3 */
  STM_EVAL_LEDOn(LED4);

	return 0;
}
