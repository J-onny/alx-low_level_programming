#include <unistd.h>
/**
  * @c Character to be printed
  * Return 1 on success
  *Return -1 on error and set it appropriately
*/

int _putchar(char c)
{
	return(write(1, &c, 1));

}



