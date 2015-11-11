#include <stdio.h>//libreria de E/S
int a;
int b;
int c;
int d;
int main()

{
    printf("programa del cangrejo\n");
	printf("ingresa la profundidad del hoyo");
	scanf("%d",&a);
	printf("ingresa la distancia que avanzo en el dia");
	scanf("%d",&b);
	printf("ingresa la distancia que retrocedio en la noche");
	scanf("%d",&c);
	
	do{
		if(a>=b)
        {
		
	 a=a-b;
			printf("el cangrejo avanza,%d\n",a);
		}
		if(b>=c)
        {
	 		b=b-c;
			printf("el cangrejo retrocede,%d\n",d);
			;
		}
		
	}while (d>=1);
	printf("el cangrejo no puede salir esta tonto");
}
