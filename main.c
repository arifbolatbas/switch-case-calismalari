#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bilet_kodu;
    int bilet_adedi;
    int toplam_fiyat;
    int fiyat;

    printf("\nbilet kodunu seciniz\n");
    scanf("%d",&bilet_kodu);

    switch(bilet_kodu)
{


    case 1:
        fiyat=100;
        break;

    case 2:
        fiyat=160;
        break;
    case 3:
        fiyat= 250;
        break;
    default:
        printf("\ndogru kodu giriniz\n");
        break;
}

        if(bilet_kodu<=3 && bilet_kodu>0)
{


        printf("\nbilet adedi giriniz\n");
        scanf("%d",&bilet_adedi);
        toplam_fiyat=fiyat*bilet_adedi;
        printf("%d*%d=%d",fiyat, bilet_adedi,toplam_fiyat);

}

      if(bilet_adedi>=1 && bilet_adedi<=2)
{
      toplam_fiyat=fiyat*bilet_adedi;
      printf("\n%d*%d*=%d\n",fiyat, bilet_adedi,toplam_fiyat);
}


      else if (bilet_adedi>=3 && bilet_adedi<=5)
{


      toplam_fiyat=(fiyat*bilet_adedi)*0.9;
      printf("\n(%d*%d)*0.9=%d\n",fiyat, bilet_adedi,toplam_fiyat);
}

     else if ( bilet_adedi>=6)
{


      toplam_fiyat=(fiyat*bilet_adedi)*0.8;
      printf("\n(%d*%d)*0.9=%d\n",fiyat, bilet_adedi,toplam_fiyat);
}

 return 0;
}
