#include <stdio.h>

struct rectangle{
	float length;
    float width;
};

void check(struct rectangle r1)
{
	if(r1.length < 0)
	{
		printf("Length is less than 0.00\n");
	}
	if(r1.width < 0)
	{
		printf("Width is less than 0.00\n");
	}
	
	if(r1.length > 20)
	{
		printf("Length is graeter than 20.0\n");
	}
	if(r1.width > 20)
	{
		printf("Width is greater than 20.0\n");
	}
}

void area(struct rectangle r1)
{
	float area;
	area = r1.length * r1.width;
	printf("Area: %.2f\n", area);
}

void perimeter(struct rectangle r1)
{
	float perimeter;
	perimeter = (2*r1.length) + (2*r1.width);
	printf("Perimeter: %.2f\n", perimeter);
}

int main()
{
	struct rectangle shape;
	printf("Enter Length: ");
	scanf("%f", &shape.length);
	printf("Enter Width: ");
	scanf("%f", &shape.width);
	area(shape);
	perimeter(shape);
	check(shape);
	
	return 0;
}