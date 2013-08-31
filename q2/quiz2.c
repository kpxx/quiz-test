#include <stdio.h>
#include <math.h>

struct COORDINATE {
	float x;
	float y;
}

main()
{
	FILE *fp;
	int i,n;
	float tmp;
	n=0;
	struct COORDINATE coordinate[100];
	fp = fopen("in2.txt", "r");
	do{
		if(fscanf(fp, "%f", &tmp) == EOF)
			break;
		coordinate[n].x = tmp;
		fscanf(fp, "%f", &coordinate[n].y);
		n  = n + 1;
	}while(1);
	fclose(fp);
	for(i=0; i<n ; i++){
		printf("(%0.3f, %0.3f)\n", coordinate[i].x, coordinate[i].y);
	}
}

