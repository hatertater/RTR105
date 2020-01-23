# 1. laboratorijas darba - Teilora rindas - atskaite

## Teorija

Teilora rindas ir matematiska metode, kuras izmantosana atlauj datoriem aprekinat funkciju vertibas trigonometriskam un eksponencialam funkcijam 

### Kods
```

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
                printf("                                      2           2     \n");
                printf("                           (2 * k - 1)           x      \n");
                printf("Rekursivais reizinatajs: __________________ * ________  \n");
                printf("                                                    2   \n");
                printf("                         2 * k *(2 * k + 1)    1 + x    \n");
        }
}

```
Komentaari par kodu  


### Rezultaats
```
Arctan(-x) aprekinasana
Ievadi x vertibu: 1

y = atan(-1.000) = -0.785
a0 = -0.70710678	S0 = -0.70710678
a499 = -0.0000000000	S499 = -0.78539816
a500 = -0.0000000000	S500 = -0.78539816




                           500                                      
                          _____                                    k
                          |                                |  2  |  
                   -k      |         (2 * k)!             |  x    | 
 arctan(-1.000) =_________ * >   ______________________ * |_______|
                   ______  |        2   k                 |      2| 
               _  |     2 |____ (k!) * 4 * (2 * k + 1)     |1 + x|  
                || 1 + x   k=0                                      

Definicijas apgabals: -1 ≤ x ≤ 1

			              2           2     
			   (2 * k - 1)           x      
Rekursivais reizinatajs: __________________ * ________  
			                            2   
			 2 * k *(2 * k + 1)    1 + x    
```

### Analiize

Kods izpilda visas prasibas, atskaitot “Tur nav nulle! Tur ir loti, loti maza vertiba – paradiet to”: pat liekot kodam reprezentet a499 un a 500 ar 100 ciparu aiz komata precizitati, nebija iespejams atrast nenulles skaitli aiz komata

### Bildes
[Funkcijas Grafiks] https://raw.githubusercontent.com/hatertater/RTR105/master/Labori/1ld_series/1.png
