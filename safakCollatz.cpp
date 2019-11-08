#include <iostream>
#include <unistd.h>

int main(int argc, char** argv) {

 
    int sayi = 0;
    int p_id,durum;
 
    printf("Bir sayý giriniz :  \n");
    scanf("%d", &sayi);
 
       if(sayi< 0)
    {
          printf("Sýfýrdan büyük bir deðer giriniz. \n");
      scanf("%d", &sayi);
    }
 
    p_id = fork();
 
    if(p_id < 0)
    {
      printf(" Child oluþturulamadý. \n");
      exit(-1);
    }
 
    else if(p_id == 0)
    {
             do
        {
        if(sayi%2 != 0)
        {
          sayi= (sayi*3)+1;
                }
         
        else if(sayi%2 == 0)
        {
          sayi= sayi/2;
        }
 
        printf("%d \n",sayi);
        }
		
		
		while(sayi!= 1);
    }
 
    else
    {
 
        printf("p_id %d \n",p_id);
    	printf("Child  oluþturuldu. \n");
      			wait(&durum);
      }     
     
     
return 0;   
}
