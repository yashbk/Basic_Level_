/*Author : Yashas B K
 * Date : 04-05-2022
 * Description : Program to calculate area and circumference of a circle.
 * */

#include <stdio.h>
#define PI 3.142     //defining value of pi in a macro

int main()
{
	float radius=0;
	printf("Enter the radius of a circle to know area and circumference of it\n");
	scanf("%f",&radius);
	printf("The area of a circle is %.2f and circumference is %.2f\n",PI*radius*radius,2*PI*radius);
	return 0;
}
