#include<stdio.h>
#include<time.h>//this header file used for generating random number
#include<stdlib.h>//this header file used for generating random number
int main()
{
    int number,guess,numberofguesses=1;
    srand(time(0));
    number = rand()%100+1; //generate a randon number between 1 to 100
    //printf("the number is %d\n",number);  //(this line give u the number u have to guess)
     //keep running the loop until the number is guessed
    // so now for that we are using (do while) loop 
    do{
          printf("guess the number between 1 and 100 :  \n");
          scanf("%d",&guess);
          if(guess>number){
              printf("lower number please !\n");
            }
            else if(guess<number){
                printf("higher number please!\n");
            }
            else{
                printf("you guesses it in %d attempts\n",numberofguesses);
            }
             numberofguesses++;
    }while(guess!=number);
     
    return 0;
}