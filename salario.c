#include <stdio.h>

int main() 
{
  int opcao;
  float a;

  printf("1 - Imposto;\n");
  printf("2 - Novo salario;\n");
  printf("3 - Classificacao;\n");
   scanf("%d", &opcao); 

  printf("Digite seu salario: ");
   scanf("%f", &a);

    

switch(opcao)
 { 
  case 1:
    if(a<500)
      printf("%.1f",a*0.05);
    else if(a>=850)
      printf("%.1f",a*0.15);
    else if(a>=500)
      printf("%.1f",a*0.1);
       
  break;

  case 2:
    if(a>1500)
      printf("%.1f", a+25);
    else if(a>=750 && a<1500)
      printf("%.1f", a+50);
    else if(a>=450 && a<750)
      printf("%.1f", a+75);
    else if(a<450)
      printf("%.1f", a+100);

  break;

  case 3:  
   if(a<700)
      printf("Mal remunerado");
    else if(a>=700)
      printf("Bem remunerado");

  break;
 }
}