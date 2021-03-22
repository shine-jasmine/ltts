#include<stdio.h>
#include<conio.h>
#include "header.h"

int main(){
    complex_t a, b, c;
    a.real=17;
    a.imaginary=-16;
    b.real=15;
    b.imaginary=-30;

    c=sum(a, b);
    printf("addition of both number is: %f %fi\n",c.real, c.imaginary);

    c=sub(a, b);
    printf("substraction of both number is: %f %fi\n",c.real, c.imaginary);
    
    c=mul(a, b);
    printf("multiplication of both number is: %f %fi\n",c.real, c.imaginary);
    
    c=div(a, b);
    printf("division of both number is: %f %fi\n",c.real, c.imaginary);

    return 0;
}
