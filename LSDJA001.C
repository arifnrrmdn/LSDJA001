#include<stdio.h>
#include<conio.h>

//deklarasi variabel
int j, bil[10];

main()
{
 j=0;
 clrscr();
 while(j<10)
 {
  printf("Input bilangan  ke-%d = ",j+1);
  scanf("%d",&bil[j]);
  j++;
 }

 //tampilkan bilangan yang telah diinput
 printf("\nBilangan-bilangan tersebut adalah : ");
 for(j=0;j<10;j=j+1){
  printf("%d ",bil[j]);
 }

 getch();
 return 0;
}