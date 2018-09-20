#include "ackerman.h"
#include <iostream>

unsigned int ackerman(unsigned int m, unsigned int n) {
	if(m == 0)
		return n+1;
	if(n == 0)
		return ackerman(m-1, 1);
	return ackerman(m-1, ackerman(m, n-1));
}
