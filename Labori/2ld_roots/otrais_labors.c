#include<stdio.h>
#include<math.h>

void main(){

	float funkca,funkcb,a,b,c,x,delta_x;
	int k=0, j=0;
	printf("Funkcija: c=arctan(-x) intervala [a;b]\n");
	printf("Ievadiet a: ");
	scanf("%f",&a);
	printf("Ievadiet b: ");
	scanf("%f",&b);
	printf("Ievadiet c: ");
	scanf("%f",&c);
	printf("Ievadiet kludu: ");
	scanf("%f",&delta_x);
	//Daudz vienkarsaka metode, ar kuru tikt gala ar so necikliskas funkcijas uzdevumu
	//x=tan(-c);
	//if(x >= a && x<=b){
	//	printf("x =  %.2f;\nf(x)= %.2f",x,c );
	//}
	//else(){
	//	printf("Dotaja intervala nav atbildes");
	//}
	funkca = atan(-a) ; funkcb = atan (-b) ;
	printf("atan(-%7.3f)=%7.3f\t\t\t\t",a ,atan(-a));
	printf("atan(-%7.3f)=%7.3f\n",b,atan(-b));
	x=a;
	while(x<b){
		k++;
		if(fabs(atan(-x)-c)<delta_x){
			j=1;
			break;
		}
		x+=delta_x;
	}
	if(j==1)printf("Sakne atrodas pie x = %.3f,jo atan(-x) ir %.3f;\nUzdevums pieprasija %2d iteracijas\n",x , atan(-x), k) ;
	else printf("Saja intervala nav atrodama sakne");
}
