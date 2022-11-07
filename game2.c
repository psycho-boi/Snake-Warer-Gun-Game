#include<stdio.h> 
#include<time.h>
#include<stdlib.h>

int result(char a, char b){
     if(a == b)
     return 0;

     if( a == 'S' && b== 'W' )
     return 1;

     if( a == 'S' && b== 'G' )
     return -1;

     // if( a == 'S' && b== 'S' )
     // return 0;

     
     if( a == 'W' && b== 'G' )
     return 1;

     if( a == 'W' && b== 'S' )
     return -1;

     // if( a == 'W' && b== 'W' )
     // return 0;

     
     if( a == 'G' && b== 'S' )
     return 1;

     if( a == 'G' && b== 'W' )
     return -1;

     // if( a == 'G' && b== 'G' )
     // return 0;

     
}

int main(){ 
     int number;
     char you, computer;

     printf("Enter your input \n S:For Snake \n W:For Water \n G:For Gun \n");
     scanf("%c", &you);

    srand(time(0));
    number = rand()%3 + 1;
//     printf("The number is %d", number);
     if(number == 1)
     computer = 'S';
     else if(number == 2)
     computer ='W';
     else
     computer ='G';

     int r = result(you, computer);

     if(r == 1)
     printf("Your won, Your choice %c and computers choice is %c", you, computer);
     else if(r == -1)
     printf("Your loss, Your choice %c and computers choice is %c", you, computer);
     else
     printf("Its a draw, Your choice %c and computers choice is %c", you, computer);

     return 0;
}