#include<stdio.h>
#include<math.h>

float analytical (float x){
	return -(1/(1+pow(x,2)));
}
float forward (float x, float delta_x){
	return atan(-(x+delta_x))-atan(-x)/delta_x;
}
void main(){
	float a,b,delta_x,x;
	printf("Izteiksme y=atan(-x) intervala [a:b]: \n");
	printf("Ievadiet a: \n");
	scanf("%f",&a);
	printf("Ievadiet b: \n");
        scanf("%f",&b);
	printf("Ievadiet kludu: \n");
        scanf("%f",&delta_x);
	printf("Pirmas kartas atvasinajums ar analitisko metodi: \n");
	printf("\tx\t\tatan(-x)\t\tatan’(-x)\n");
	x=a;
	while(x<=b){
		printf ("%10.2f\t%10.2f\t%10.2f\n",x,atan(-x),analytical(x));
		x += delta_x ;
	}
	printf("Pirmas kartas atvasinajums ar diferencesanu uz prieksu: \n");
	printf("\tx\t\tatan(-x)\t\tatan’(-x)\n");
        x=a;
        while(x<=b){
                printf ("%10.2f\t%10.2f\t%10.2f\n",x,atan(-x),forward(x,delta_x));
	        x += delta_x ;
        }
	printf("Otras kartas atvasinajums ar analitisko metodi: \n");
	printf("\tx\t\tatan(-x)\t\tatan’’(-x)\n");
        x=a;
        while(x<=b){
                printf ("%10.2f\t%10.2f\t%10.2f\n",x,atan(-x),analytical(analytical(x)));
                x += delta_x ;
        }
	printf("Otras kartas atvasinajums ar diferencesanu uz prieksu: \n");
	printf("\tx\t\tatan(-x)\t\tatan’’(-x)\n");
        x=a;
        while(x<=b){
                printf ("%10.2f\t%10.2f\t%10.2f\n",x,atan(-x),forward(forward(x,delta_x),delta_x) );
                x += delta_x ;
        }

}
