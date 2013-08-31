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
	float tmp,d;
	n=0;
	struct COORDINATE coord;
	struct COORDINATE coordinate[100];

	fp = fopen("in1.txt", "r");
	fscanf(fp, "%f", &coord.x);
	fscanf(fp, "%f", &coord.y);
	fclose(fp);

	fp = fopen("in2.txt", "r");
	do{
		if(fscanf(fp, "%f", &tmp) == EOF)
			break;
		coordinate[n].x = tmp;
		fscanf(fp, "%f", &coordinate[n].y);
		n  = n + 1;
	}while(1);
	fclose(fp);
	for(i=0, d=0; i<n ; i++){
		d += sqrt(pow((coord.x - coordinate[i].x),2) +
			pow((coord.y - coordinate[i].y),2));
	}
	fp = fopen("out.txt", "w");
	fprintf(fp, "d=%f\n", d);
	fclose(fp);
}

