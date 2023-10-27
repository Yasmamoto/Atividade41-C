#include <stdio.h>
int main()
{
	int questaoA = 2 + (3 * 6);
	float questaoB = 12 /((3 * 2) - 5);
	float questaoC = 31/4;
	float questaoD = 31 % 4;
	float questaoF = ((18 * 5) % (14 - 10));
	
	printf("a) 2 + 3 * 6 = %i       b) 12 / 3 * 2 – 5 = %.2f\n", questaoA, questaoB);
	printf("c) 31 / 4 = %.2f          d) 31 MOD 4 = %f \n", questaoC, questaoD);
	printf("e) 31 % 4 = %f                 f) (18 * 5) % (14 – 10) = %f \n", questaoD, questaoF);
	
	
	return 0;
}
