#include "mgos.h"
#include "mgos_jsar.h"


enum mgos_app_init_result mgos_app_init(void) 
{
  mgos_jsar_begin();

  return MGOS_APP_INIT_SUCCESS;
}
