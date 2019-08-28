/*****************************************************************************
 * eval-lora.c
 *****************************************************************************/

#include <sys/platform.h>
#include "adi_initialize.h"
#include "eval-lora.h"

int main(int argc, char *argv[])
{
	/**
	 * Initialize managed drivers and/or services that have been added to 
	 * the project.
	 * @return zero on success 
	 */
	adi_initComponents();
	
	/* Begin adding your custom code here */

	return 0;
}

