#include <stdio.h>

int main(){
	int x,y,z;
	char operasi;
	printf("Masukkan operasi aritmatika(+,-,x,/):");
	scanf("%c",&operasi);
	switch(operasi){
		case'+':
			printf("Masukkan 2 bilangan bulat\n");
			scanf("%d%d",&x,&y);
			printf("x=%d \t y=%d\n\n",x,y);
			z=x+y;
			printf("x+y=%d\n",z);
			break;
		case'-':
			printf("Masukkan 2 bilangan bulat\n");
			scanf("%d%d",&x,&y);
			printf("x= %d \t y=%d\n\n",x,y);
			z=x-y;
			printf("x-y=%d\n",z);
			break;
		case'x':
			printf("Masukkan 2 bilangan bulat!\n");
			scanf("%d%d",&x,&y);
			printf("x=%d \t y=%d\n\n",x,y);
			z=x*y;
			printf("x*y=%d\n",z);
			break;
		case'/':
			printf("Masukkan 2 bilangan bulat!");
			scanf("%d%d",&x,&y);
			printf("x=%d\t y=%d\n\n",x,y);
			float temp=(float) x/y;
			printf("x/y=%.3f\n",temp);
			break;
	}
	return 0;
}
