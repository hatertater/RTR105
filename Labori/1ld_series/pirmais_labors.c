#include<stdio.h>
#include<math.h>

void main(){
	double x,y,a,S;
	printf("Arctan(-x) aprekinasana\n");
	printf("Ievadi x vertibu: ");
	scanf("%lf",&x);
	if(fabs(x)>1){
		printf("Ievadiet vertibu starp 1 un -1 (galapunktus ieskaitot)");
		scanf("%lf",&x);
	}
	else{
		printf("\n");
	        int k = 0;
		y = atan(-x);
        	printf("y = atan(-%.3f) = %.3f\n",x,y);

        	a = (-x)/sqrt(1+pow(x,2))*1;
        	S = a;
           	printf("a0 = %8.8f\tS0 = %8.8f\n",a,S);
        	while(k<501){
                	k++;
                	a = a*pow((2*k-1),2)/((2*k+1)*(2*k))*(pow(x,2)/(1+pow(x,2)));
                	S = S + a;
			if(k==499){
                		printf("a499 = %8.10f\tS499 = %8.8f\n",a,S);
			}
			if(k==500){
                		printf("a500 = %8.10f\tS500 = %8.8f\n",a,S);
			}
		}
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("                           500                                      \n");
		printf("                          _____                                    k\n");
		printf("                          |                                |  2  |  \n");
		printf("                   -k      |         (2 * k)!             |  x    | \n");
		printf(" arctan(-%.3lf) =_________ * >   ______________________ * |_______|\n",x);
		printf("                   ______  |        2   k                 |      2| \n");
		printf("               _  |     2 |____ (k!) * 4 * (2 * k + 1)     |1 + x|  \n");
		printf("                || 1 + x   k=0                                      \n");
		printf("\n");
		printf("Definicijas apgabals: -1 ≤ x ≤ 1\n");
		printf("\n");
		printf("			              2           2     \n");
		printf("			   (2 * k - 1)           x      \n");
		printf("Rekursivais reizinatajs: __________________ * ________  \n");
		printf("			                            2   \n");
		printf("			 2 * k *(2 * k + 1)    1 + x    \n");
	}
}
