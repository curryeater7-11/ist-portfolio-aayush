#include <stdio.h>

int main()
{
	int age;

	float gpa;

	char grade; 

	printf("What is your age? ");

	scanf("%i", &age );

	printf("What is your gpa ");

	scanf("%f", &gpa );

	printf("What is your letter grade? ");

	scanf(" %c", &grade );

	printf("age:%i, gpa: %f, grade: %c\n", age, gpa, grade);

	return 0;

}
