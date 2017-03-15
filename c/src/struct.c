#include <stdio.h>
#include <string.h>

struct Rectangle 
{
	char name[20];
	int width;
	int height;
	int area;
};

int rectangleArea(int w, int h)
{
	return w*h;
}

int main()
{
	struct Rectangle rec1;
	struct Rectangle rec2;

	strcpy(rec1.name, "Rectangle");
	rec1.width = 20;
	rec1.height = 30;

	strcpy(rec2.name, "Square");
	rec2.width = 30;
	rec2.height = 30;

	rec1.area = rectangleArea(rec1.width, rec1.height);
	rec2.area = rectangleArea(rec2.width, rec2.height);

	printf("%s's area is %d (width:%d height:%d)\n", rec1.name, rec1.area, rec1.width, rec1.height);
	printf("%s's area is %d (width:%d height:%d)\n", rec2.name, rec1.area, rec1.width, rec2.height);
}