//declare and use functions 
#include <stdio.h>



int flop(int number)
{
	return number * 2 ;
}


int main() 
{
int nendo = 0 ;
printf("gimme number\n") ;
scanf("%d", &nendo) ;
printf("you have %d bitches\n", flop(nendo));

}

