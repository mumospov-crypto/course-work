//volume and surface area of a cylinder

#include <stdio.h>
#define Pi 3.142
int main() {
	float radius, height;
	float volume, surface_area;

	printf("Enter the radius of the cylinder: ");
			scanf_s("%f", &radius);	

	printf("Enter the height of the cylinder: ");
			scanf_s("%f", &height);

			//calculate volume and surface area
			volume = Pi * radius * radius * height;
			surface_area = 2 * Pi * radius * (radius + height);

			//display the results
			printf("Volume of the cylinder: %.2f\n", volume);
			printf("Surface area of the cylinder: %.2f\n", surface_area);


}