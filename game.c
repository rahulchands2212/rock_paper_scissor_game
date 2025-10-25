#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int user;

    srand(time(NULL));
    int computer = rand()%3+1;
    /*
    1 = rock
    2= paper
    3 = scissor
    */
    printf("user choice rock(1) ,paper(2),scissor(3)(any one) =  ");
    scanf("%d",&user);
    
  //start outer if ,else;
 if(user>=1 && user<=3){
      printf("computer choice rock(1) ,paper(2),scissor(3) = %d\n",computer);
    if (user==computer){    //start inner if ,elseif ;
        printf("tie play again");
    }else if(user==1 && computer==2){
        printf("paper computer win");
    }else if(user==2 && computer==1){
        printf("paper you win");
    }else if(user==2 && computer==3){
        printf("scissor computer win");
    }else if(user==3 && computer==2){
        printf("scissor you win");
    }else if(user==1 && computer==3){
        printf("rock you win");
    }else if(user==3 && computer==1){
        printf("rock computer win");
    }
 //end inner if ,elseif ;
 }else{                   
    printf("invalid number");
 }    //end outer if , else close;

    return 0;
}