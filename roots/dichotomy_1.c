#include<stdio.h>
#include<math.h>

void main(){
	float a=0.01, b=1.5*M_PI, x, delta_x=1.e-3,fa,fb,k=0;
	fa = sin(a);
	fb = sin(b);
	if(fa*fb>0){
		printf("intervālā [%.2f;%.2f] funkcijai sin(x)",a,b);
		printf("sakņu nav (vai eksistē pāra skaits sakņu)\n");
		return 1;
	}
	printf("sin(%f)=%7.3f\t\t\t\t",a,sin(a));
	printf("sin(%f)=%7.3f\n",b,sin(b));

	while((b-a)>delta_x){
		x =(a+b)/2.;
		if(fa*sin(x)>0){
			a=x;
			k++;
		}
		else{
			b=x;
			k++;
		}
		printf("sin(=%7.3f)=%7.3f\tsin(%7.3f)=%7.3f\tsin(%7.3f)=%7.3f\n",a,sin(a),x,sin(x),b,sin(b));
		printf("sakne atroda pie x=%.3f, jo k=%f ...\n",x,k);
	}
		return 0;
}
