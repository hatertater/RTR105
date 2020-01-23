# 2. laboratorijas darba – Dihotomijas metode - atskaite

## Teorija

Izmantojot dihotomijas metodi ir iespejams noteikt funkcijas f(x)=c krustpunktus ar x asi intervala [a;b].

### Kods
```
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
        //      printf("x =  %.2f;\nf(x)= %.2f",x,c );
        //}
        //else(){
        //      printf("Dotaja intervala nav atbildes");
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
        if(j==1)printf("Sakne atrodas pie x = %.3f,jo atan(-x) ir %.3f;\nUzdevums pieprasija %2d iteraci$
        else printf("Saja intervala nav atrodama sakne");
}
```
Komentaari par kodu  

### Rezultaats
```
Funkcija: c=arctan(-x) intervala [a;b]
Ievadiet a: 1
Ievadiet b: 5
Ievadiet c: -1.249               
Ievadiet kludu: 0.01
atan(-  1.000)= -0.785				atan(-  5.000)= -1.373
Sakne atrodas pie x = 2.910,jo atan(-x) ir -1.240;
Uzdevums pieprasija 192 iteracijas
```

### Analiize

Nemot vera to, ka arctan(-x) ir neperiodiska funkcija, ir iespejams daudz vienkarsaks atrisinajums dotajai problemai (noradits koda komentara formaa) 

### Bildes
