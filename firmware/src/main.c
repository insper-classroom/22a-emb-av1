#include "arm_math.h"
#include "conf_board.h"
#include "conf_uart_serial.h"
#include <asf.h>
#include <stdio.h>
#include <string.h>

#include "gfx_mono_text.h"
#include "gfx_mono_ug_2832hsweg04.h"
#include "sysfont.h"

/************************************************************************/
/* VAR globais                                                          */
/************************************************************************/

/************************************************************************/
/* proto                                                                */
/************************************************************************/

/************************************************************************/
/* handles callbacks                                                    */
/************************************************************************/

/************************************************************************/
/* funcs                                                                */
/************************************************************************/

/************************************************************************/
/* main                                                                 */
/************************************************************************/

int main(void) {
  board_init();
  sysclk_init();
  delay_init();
  gfx_mono_ssd1306_init();
  gfx_mono_draw_string("00:00", 0, 0, &sysfont);

  while (1) {
  }
}
