#include "main.h"

/**
* _islower - return lowercase protype
* Description - return and check lowercase
* Returns 1 if @c is lowercase
* Returns 0 if otherwise
*/
int _islower(int c)
{
		int result = c >= 97 && c <= 122 ? 1 : 0;

		return (result);
}
