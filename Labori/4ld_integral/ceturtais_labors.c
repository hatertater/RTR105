#include<stdio.h>
#include<math.h>

float f(float x)
{
    return atan(-x);
}

void main(){
        int n;
	float area_a=0,area_b=0,area_c=0,a=0,b=0,delta_x=0,delta,y[100],so=0,se=0,x[100];
	printf("\nFunkcija: y=arctan(-x) intervala [a;b]\n");
        printf("Ievadiet a: ");
        scanf("%f",&a);
        printf("Ievadiet b: ");
        scanf("%f",&b);
        printf("Ievadiet kludu: ");
        scanf("%f",&delta_x);
//Aprekins Simpsona formulai
	n=(b-a)/delta_x;
	if(n%2==1){
		n=n+1;
	}
	delta=(b-a)/n;
	printf("Mainita kludas vertiba Simpsona metodei ir %.2f\n",delta);
	for(int i=0; i<n; i++){
        	x[i]=a+i*delta;
        	y[i]=f(x[i]);
	}
	for(int i=1; i<n; i++){
        	if(i%2==1){
            		so=so+y[i];
        	}
        	else{
            		se=se+y[i];
        	}
	}
	area_c=delta/3*(y[0]+y[n]+4*so+2*se);
//Aprekini abam parejam formulam
	for(int i=a;i<b;i+=delta_x){
		if(i+delta_x<=b){
			area_a+=atan(-i)*delta_x;
			area_b+=(atan(-i)+atan(-(i+delta_x)))/2*delta_x;
		}
	}
	printf("Noteiktais integralis pec taisnsturu metodes ir %.2f\n",area_a);
	printf("Noteiktais integralis pec trapecu metodes ir %.2f\n",area_b);
	printf("Noteiktais integralis pec Simpsona metodes ir %.2f\n",area_c);
}

