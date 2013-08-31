#include <stdio.h>
#include <math.h>

main()
{
	FILE *fp;
	int i,n;
	float aa, a[100], sum, ave, vax, std;
	fp = fopen("in.txt", "r");
	n = -1;
	while(fscanf(fp, "%f", &aa) != EOF){
		n = n + 1;
		a[n] = aa;
	}
	fclose(fp);
	sum=0.0;
	for(i=0; i<=n; i+=1){
		sum = sum + a[i];
	}
	ave = sum / (n+1);
	vax = 0.0;
	for(i=0; i<=n; i+=1){
		vax = vax + (a[i] - ave) * (a[i] - ave);
	}
	std = sqrt(vax/n);
	fp = fopen("out.txt", "w");
	fprintf(fp, "ave=%f\tstd=%f\n",ave,std);
	fclose(fp);
}

