#include<stdio.h>
#include<windows.h>
float horner(int n,float a[],float x){
	int i;
	float p;
	p=a[n];
	for(i=n-1;i>=0;i--){
		p=p*x+a[i];
	}
	return p;
}
int main(){
	
	SetConsoleTitle("Anushesh K. K. Tharu ");
	
	printf("// Horners Method \n\n\n");
	
	int n,i;
	float x,p,a[10];
	printf("\n Enter the degree of the poynomial = ");
	scanf("%d",&n);
	for(i=0; i<=n; i++){
		printf("\n Enter a[%d] = ",i);
		scanf("%f",&a[i]);
	}
	printf("\n Enter the point at which you evaluate the polynomial = ");
	scanf("%f",&x);
	p=horner(n,a,x);
	printf("\n f(x) = %f at x = %f ",p,x);
	return 0;
}
