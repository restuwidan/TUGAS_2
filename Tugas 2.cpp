#include <stdio.h>
#include <conio.h>

main()
{
 	int pilihan,pilihan2;
   float a,b,hasil;
   do
   {
   printf("\n\t  RESTU WIDAN KAPILA");
   printf("\n\t     3143111048");
   printf("\n\n");
   printf("PROGRAM OPERASI MATEMATIKA SEDERHANA\n");
   printf("\n1. PENJUMLAHAN");
   printf("\n2. PENGURANGAN");
   printf("\n3. PERKALIAN");
   printf("\n4. PEMBAGIAN");
   printf("\nMasukkan Pilihan Operasi Matematika : ");
   scanf("%d",&pilihan);
   if	(pilihan==1)
   	{
       printf("\nPENJUMLAHAN");
       printf("\nMasukkan angka pertama ");
       scanf("%f",&a);
       printf("Masukkan angka kedua   ");
       scanf("%f",&b);
       hasil=a+b;
       printf("\nHasil penjumlahan %2.2f + %2.2f = %2.2f",a,b,hasil);
      }
   else if(pilihan==2)
   	{
       printf("\nPENGURANGAN");
       printf("\nMasukkan angka pertama ");
       scanf("%f",&a);
       printf("Masukkan angka kedua   ");
       scanf("%f",&b);
       hasil=a-b;
       printf("\nHasil pengurangan %2.2f - %2.2f = %2.2f",a,b,hasil);
      }
   else if(pilihan==3)
   	{
       printf("\nPERKALIAN");
       printf("\nMasukkan angka pertama ");
       scanf("%f",&a);
       printf("Masukkan angka kedua   ");
       scanf("%f",&b);
       hasil=a*b;
       printf("\nHasil perkalian %2.2f * %2.2f = %2.2f",a,b,hasil);
      }
   else if(pilihan==4)
   	{
       printf("\nPEMBAGIAN");
       printf("\nMasukkan angka pertama ");
       scanf("%f",&a);
       printf("Masukkan angka kedua   ");
       scanf("%f",&b);
       	if(b==0)
         	printf("\nTidak bisa di bagi dengan nol");
            else {
       		hasil=a/b;
       printf("\nHasil pembagian %2.2f / %2.2f = %2.2f",a,b,hasil);
       		}
      }
   else
   	{
      printf("Pilihan anda salah, ulangi lagi? ");
      printf("\n1. Ya");
      printf("\n2. Tidak\n");
      scanf("%d",&pilihan2);
      }
   printf("\n\nUlangi lagi? ");
   printf("\n1. Ya");
   printf("\n2. Tidak\n");
   scanf("%d",&pilihan2);
   getch();

   }
   while(pilihan2==1);

}
