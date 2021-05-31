#include <stdio.h>
int main(void)
{
    float h, r, V;
printf("Enter the height of the cone: ");
scanf("%f", &h); 
printf("Enter the radius of the base of the cone: ");
scanf("%f", &r); 
V = (h/3) * 3.14 * (r*r); 
printf("Cone volume = %.2f", V);
 getchar();
return 0; 
}

