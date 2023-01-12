// wac to find diameter,area and circumference of a circle.
#include<stdio.h>
float diameter(float n)
{
    return (n/2);
}
float circumference(float n)
{
    return (2*3.14*n);
}
float area(float n)
{
    return (3.14*n*n);
}
int  main()
{
    float r;
    printf("enter radius");
    scanf("%f",&r);
    diameter(r);
    printf("diameter of a circle is %f\n",diameter(r));
    circumference(r);
    printf("circumference of a circle is %f\n",circumference(r));
    area(r);
    printf("area of a circle is %f\n",area(r));
    return 0;

}
