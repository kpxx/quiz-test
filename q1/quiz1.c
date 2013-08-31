#include <stdio.h>
#include <math.h>

struct COORDINATE {
	float x;
	float y;
}

main()
{
	FILE *fp;
	int i;
	struct COORDINATE coordinate;
	coordinate.x = -1;
	coordinate.y = -1;
	fp = fopen("in1.txt", "r");
	fscanf(fp, "%f", &coordinate.x);
	fscanf(fp, "%f", &coordinate.y);
	fclose(fp);
	printf("(%0.3f, %0.3f)\n", coordinate.x, coordinate.y);
}

