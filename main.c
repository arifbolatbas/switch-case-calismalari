#include <stdio.h>
#include <stdlib.h>

int main()
{
    int urun_kodu;
    int adet;
    int siparis;
    int fiyat;

    printf("urun kodu giriniz\n");
    scanf("%d",&urun_kodu);
    switch(urun_kodu)
    {
        case 1:
    fiyat=180;
    break;
    case 2:
    fiyat=240;
    break;
    case 3:
       fiyat=100;

        break;
    case 4:
       fiyat=150;
        break;
    default:
        printf("gecerli kod giriniz\n");
        break;

    }
if(urun_kodu<=4&& urun_kodu>0)
{



  printf("adet giriniz\n");
  scanf("%d",&adet);
  siparis=fiyat * adet;
  printf("%d*%d=%d",fiyat,adet,siparis);



}

return 0;
}
