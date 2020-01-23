# 3. laboratorijas darba – Skaitliska diferencesana - atskaite

## Teorija

Atvasinajuma izmantojums atlauj noverter kadas funkcijas izmainu atrumu 

### Kods
```

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

```
Komentaari par kodu  

### Rezultaats
```
Ievadiet a: 
1
Ievadiet b: 
5
Ievadiet kludu: 
1
Pirmas kartas atvasinajums ar analitisko metodi: 
	x		atan(-x)		atan’(-x)
      1.00	     -0.79	     -0.50
      2.00	     -1.11	     -0.20
      3.00	     -1.25	     -0.10
      4.00	     -1.33	     -0.06
      5.00	     -1.37	     -0.04
Pirmas kartas atvasinajums ar diferencesanu uz prieksu: 
	x		atan(-x)		atan’(-x)
      1.00	     -0.79	     -0.32
      2.00	     -1.11	     -0.14
      3.00	     -1.25	     -0.08
      4.00	     -1.33	     -0.05
      5.00	     -1.37	     -0.03
Otras kartas atvasinajums ar analitisko metodi: 
	x		atan(-x)		atan’’(-x)
      1.00	     -0.79	     -0.80
      2.00	     -1.11	     -0.96
      3.00	     -1.25	     -0.99
      4.00	     -1.33	     -1.00
      5.00	     -1.37	     -1.00
Otras kartas atvasinajums ar diferencesanu uz prieksu: 
	x		atan(-x)		atan’’(-x)
      1.00	     -0.79	     -0.91
      2.00	     -1.11	     -0.85
      3.00	     -1.25	     -0.82
      4.00	     -1.33	     -0.81
      5.00	     -1.37	     -0.80
```

### Analiize
 

### Bildes
[Atvasinājumu grafiku apkopojums] https://github.com/hatertater/RTR105/edit/master/Labori/3ld_derivative/3.png
