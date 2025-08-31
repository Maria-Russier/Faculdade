#include <stdio.h>

int main()

{

    int estado, codigo;
    float peso, preco;

    printf("Digite o codigo do estado de origem da carga (de 1 a 5): ");
     scanf("%d", &estado);

    printf("Digite o peso da carga do camainhao em toneladas: ");
     scanf("%f", &peso);

    printf("Digite o codigo da carga (de 10 a 40):");
    scanf("%d", &codigo);

    switch(estado)
    {
        case 1:
        if(estado==1 && codigo>=10 && codigo<21){
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*100000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*100000*0.35 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*100000*0.35)+(peso*100000));
         printf(" reais no total");

        }    

          else if (estado==1 && codigo>=21 && codigo<31) {
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*250000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*250000*0.35 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*250000*0.35)+(peso*250000));
         printf(" reais no total");

          }

           else if (estado==1 && codigo>=31 && codigo<41) {
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*340000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*340000*0.35 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*340000*0.35)+(peso*340000));
         printf(" reais no total");

          }

           break;

        case 2:

          if(estado==2 && codigo>=10 && codigo<21){
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*100000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*100000*0.25 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*100000*0.25)+(peso*100000));
         printf(" reais no total");

        }    

          else if (estado==2 && codigo>=21 && codigo<31) {
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*250000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*250000*0.25 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*250000*0.25)+(peso*250000));
         printf(" reais no total");

          }

           else if (estado==2 && codigo>=31 && codigo<41) {
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*340000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*340000*0.25 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*340000*0.25)+(peso*340000));
         printf(" reais no total");

          }

        case 3:

          if(estado==3 && codigo>=10 && codigo<21){
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*100000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*100000*0.15 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*100000*0.15)+(peso*100000));
         printf(" reais no total");

        }    

          else if (estado==3 && codigo>=21 && codigo<31) {
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*250000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*250000*0.15 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*250000*0.15)+(peso*250000));
         printf(" reais no total");

          }

           else if (estado==3 && codigo>=31 && codigo<41) {
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*340000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*340000*0.15 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*340000*0.15)+(peso*340000));
         printf(" reais no total");

          }

        case 4:

          if(estado==4 && codigo>=10 && codigo<21){
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*100000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*100000*0.05 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*100000*0.05)+(peso*100000));
         printf(" reais no total");

        }    

          else if (estado==3 && codigo>=21 && codigo<31) {
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*250000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*250000*0.05 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*250000*0.05)+(peso*250000));
         printf(" reais no total");

          }

           else if (estado==3 && codigo>=31 && codigo<41) {
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*340000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*340000*0.05 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*340000*0.05)+(peso*340000));
         printf(" reais no total");

          }

        case 5:

          if(estado==5 && codigo>=10 && codigo<21){
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*100000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*100000*0 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*100000*0)+(peso*100000));
         printf(" reais no total");

        }    

          else if (estado==5 && codigo>=21 && codigo<31) {
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*250000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*250000*0 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*250000*0)+(peso*250000));
         printf(" reais no total");

          }

           else if (estado==5 && codigo>=31 && codigo<41) {
         printf("O caminhao tem " );
         printf("%.1f", peso*1000);
         printf(" quilos, custa ");
         printf("%.1f", peso*340000);
         printf(" reais de preco de carga, devem ser pagos ");
         printf("%.1f", peso*340000*0 );
         printf(" reais de imposto e custa ");
         printf("%.1f", (peso*340000*0)+(peso*340000));
         printf(" reais no total");

          }



           break;

          
          default:
           printf("nao sei parca");



          

    }


}