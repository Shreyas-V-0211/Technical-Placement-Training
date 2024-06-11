//finding the area of square, triangle and circle
#include<stdio.h>

float SquareArea(float s)
{
    return s*s;
}

float TriangleArea(float l,float b)
{
    return 0.5*l*b;
}

float CircleArea(float r)
{
    return 3.14*r*r;
}

void main()
{
    float side,length,breadth,radius;
    printf("Enter the side of the Square: ");
    scanf("%f",&side);
    printf("Area of Square = %f\n",SquareArea(side));
    printf("Enter the length of Triangle: ");
    scanf("%f",&length);
    printf("Enter the breadth of Triangle: ");
    scanf("%f",&breadth);
    printf("Area of Triangle = %f\n",TriangleArea(length,breadth));
    printf("Enter the radius of Circle: ");
    scanf("%f",&radius);
    printf("Area of Circle = %f\n",CircleArea(radius));
}
