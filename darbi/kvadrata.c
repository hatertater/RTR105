#include<stdio.h>
 
float kvadrata(float karmena);
int main(){
		for(float x=0;x<1;x+=0.1){
			printf("%f %f\n", x, kvadrata(x));
		}
}

	float kvadrata(float karmena){
		return karmena*karmena;
	}

