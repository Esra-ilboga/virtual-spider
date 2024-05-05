#include <stdio.h>
#include <stdlib.h>

char *ihtiyaclistesi[] = {"tokluk", "uyku", "sevgi", "sosyallesme", "saglik", "egitim", "hijyen", "tuvalet", "eglence"};
int seviye[] = {5, 5, 5, 5, 5, 5, 5, 5, 5};

void yemekYe(int *toklukSeviyesi, int *yorulmak, int *bosaltim) {
    int sayi,secim;
    printf("Yiyeceginiz yemek sayisi kac? ");
    scanf("%d", &sayi);

    printf("1)cekirge \t 2)karinca \t 3)solucan \n Ne yemek istediginizi secin:");
    scanf("%d", &secim);
    switch(secim){
    case 1:
        *toklukSeviyesi += sayi * 2;
        *yorulmak -= sayi;
        *bosaltim -= (sayi * 2)-1;
        break;
    case 2:
        *toklukSeviyesi += sayi ;
        *yorulmak -= sayi/2;
        *bosaltim -= sayi ;
        break;
    case 3:
        *toklukSeviyesi += sayi * 2;
        *yorulmak -= sayi;
        *bosaltim -= sayi * 2;
        break;
    default:
        printf("1, 2 ya da 3 degerleri disinda deger girdiniz");
        break;
    }

}
void suic(int *suSeviyesi, int *susuzlukSeviyesi) {
    int sayi,y;
    printf("nerde su iceceksin:\n 1-nehirde\t 2-yaprakta biriken suda\t 3-su birikintisinde  ");
    scanf("%d", &y);
    switch (y) {
            case 1:
                printf("nehre gidildi");
                printf("kac yudum su iceceginizi giriniz(1 ve 3 arasinda olamli) ");
                scanf("%d", &sayi);
                if(sayi<=3 && sayi>=1){
                    *suSeviyesi += sayi;
                    *susuzlukSeviyesi -= sayi;
                }
                else{
                    printf("Geçerli bir deger girilmedi.");
                }
                break;
            case 2:
                printf("üzerinde su olan yaprak bulundu");
                printf("kac yudum su iceceginizi giriniz(1 ve 3 arasinda olamli) ");
                scanf("%d", &sayi);
                if(sayi<=3 && sayi>=1){
                    *suSeviyesi += sayi;
                    *susuzlukSeviyesi -= sayi;
                }
                else{
                    printf("Geçerli bir deger girilmedi.");
                }
                break;
            case 3:
                printf("su birikintisine gidildi");
                printf("kac yudum su iceceginizi giriniz(1 ve 3 arasinda olamli) ");
                scanf("%d", &sayi);
                if(sayi<=3 && sayi>=1){
                    *suSeviyesi += sayi;
                    *susuzlukSeviyesi -= sayi;
                }
                else{
                    printf("Geçerli bir deger girilmedi.");
                }
                break;
            default:
                printf("Gecersiz bir secim yaptiniz.\n");
                break;
    }

}


void uyku(int *uykuSeviyesi, int uykusure) {

    if (uykusure > 0) {
        printf("Kalan uyku suresi: %d\n", uykusure);
        *uykuSeviyesi += 1;
        uyku(uykuSeviyesi, uykusure - 1);
    } else {
        printf("Orumcek uyandi.\n");
    }

}

void uyku2(int *uykuSeviyesi, int uykusure){
    int z;
    printf("nerede uyuyacaksin:\n 1-yaprakta\n 2-agda\n 3-ailenin yaninda ");
    scanf("%d", &z);
    switch (z) {
            case 1:
                printf("yaprakta uyuldu. ");
                uyku(uykuSeviyesi, uykusure);
                break;
            case 2:
                printf("agda uyuldu. ");
                uyku(uykuSeviyesi, uykusure);
                break;
            case 3:
                printf("ailenin yaninda uyuldu. ");
                uyku(uykuSeviyesi, uykusure);
                break;
            default:
                printf("Gecersiz bir secim yaptiniz.\n");
                break;
    }

}

void sevgiles(int *sevildin, int *sevgidenkalan){
    printf("1-anne \t 2-baba \t 3-kardes \n kime sarilmak istersiniz: ");
    int secimm;

    scanf("%d", &secimm);
    if(secimm == 1){
        *sevildin += 3;
        *sevgidenkalan -= 1;
    }
    else if(secimm == 2){
        *sevildin += 2;
        *sevgidenkalan -=2;
    }
    else if(secimm == 3){
        *sevildin += 1;
        *sevgidenkalan -=3;
    }
    else
        printf("hatali deger girdiniz.");

}

void sosyalles(int *acikma, int *yorgunluk, int *agalarlatakil, int *kirlen){
    int sec;
    printf("hangi aktiviteyi yapacak: \n 1-arkadaslarla cevreyi dolasacak \n 2-arkadaslarla gures \n 3-ciftlesme dansi yap ");
    scanf("%d",&sec);

    switch(sec){
    case 1:
        *acikma -= 2;
        *yorgunluk -= 2;
        *agalarlatakil += 3;
        *kirlen -= 3;
        break;
    case 2:
        *acikma -= 2;
        *yorgunluk -= 2;
        *agalarlatakil += 1;
        *kirlen -= 2;
        break;
    case 3:
        *acikma -= 1;
        *yorgunluk -= 1;
        *agalarlatakil += 3;
        *kirlen -= 1;
        break;
    default:
        printf("sosyallesmek icin dogru deger girilmedi.");
        break;
    }
}

void siradansaglik(int*aclikdegeri, int *bosaltimyapma){
    if(*aclikdegeri <=0 ){
        printf("orumcek oldu!!!");
        printf("yeniden canlandiriliyor...");

        for (int i = 0; i < sizeof(seviye) / sizeof(seviye[0]); i++) {
            seviye[i] = 5;
       }
    }
    else if(*bosaltimyapma <=0){
        printf("orumcek oldu!!!");
        printf("yeniden canlandiriliyor...");

        for (int i = 0; i < sizeof(seviye) / sizeof(seviye[0]); i++) {
            seviye[i] = 5; }
    }
    else{
        printf("su an saglikli ama tokluk ve bosaltim degerlerinin 0 olmamasina dikkat edin!");
    }
}

void dusmangor(int *acikti, int *yorgunluk, int *dusmantanima, int *saglikdurumu){
    int sayii;
    printf("dusmanla karsilastin mi? \n 1-dusmanla savas \n 2-dusmani gormezden gel \n 3-dusmani deli et kac ");
    scanf("%d", &sayii);
    if(sayii == 1){
        *acikti -= 2;
        *yorgunluk -= 2;
        *dusmantanima += 1;
        *saglikdurumu -= 2;
    }
    else if(sayii == 2){
        printf("dusman gormezden gelindi ");
    }
    else if(sayii == 3){
        printf("dusman delirtildi ");
    }
    else
        printf("dogru bir deger girilmedi.");

}

void egitimal(int *acikti, int *yoruldu, int *egitilme){
    int x;
    printf("ebeveynlerinden egitim almak istedigin konuyu sec: \n 1-ag yapma \n 2-avlanma \n 3-guvenli yasam alani bulma");
    scanf("%d", &x);
    switch (x) {
            case 1:
                *yoruldu -= 1;
                *egitilme += 1;
                break;
            case 2:
                *acikti -= 2;
                *yoruldu -= 2;
                *egitilme += 3;
                break;
            case 3:
                *acikti -= 2;
                *yoruldu -= 2;
                *egitilme += 2;
                break;
            default:
                printf("Gecersiz bir secim yaptiniz.\n");
                break;
    }
}

void temizlik(int *yoruldu, int *temizlenme){
    int k;
    printf("temizligini sec:\n 1-yikan\t 2-yapraga surtun\t 3-hayvan tuyuna surtun ");
    scanf("%d", &k);
    switch (k) {
            case 1:
                *yoruldu -= 2;
                *temizlenme += 3;
                break;
            case 2:
                *yoruldu -=1;
                *temizlenme += 2;
                break;
            case 3:
                *yoruldu -=1;
                *temizlenme += 2;
                break;
            default:
                printf("Gecersiz bir secim yaptiniz.\n");
                break;
    }

}

void bosaltimyapma(int *kirlenme, int *bosaltim){
    int a;
    printf("tuvalet ihtiyacini nerde gerceklestirmek istersin: \n");
    printf("1-yasam alani yakinlarinda\n 2-yasam alani uzaginda\n 3-dusman yasam alaninda ");
    scanf("%d", &a);
    switch (a) {
            case 1:
                printf("uzaga gitmeden bosaltim yapildi. ");
                *kirlenme -= 1;
                *bosaltim += 3;
                break;
            case 2:
                printf("uzaga giderek bosaltim yapildi. ");
                *kirlenme -= 2;
                *bosaltim += 2;
                break;
            case 3:
                printf("uzaga gitmeden bosaltim yapildi. ");
                *kirlenme -= 3;
                *bosaltim += 2;
                break;
            default:
                printf("Gecersiz bir secim yaptiniz.\n");
                break;
    }



}

void eglenmek(int *aclik, int *yorgunluk, int *sosyallik, int *eglenme){
    int b;
    printf("eglenme secenegi sec:\n 1-fobisi olan insanlari korkut\n 2-karsi cinsi etkile\n 3-aglarinla havada gez ");
    scanf("%d", &b);
    if(b == 1){
        printf("insanlar korkutuldu NIHAHAHA ");
        *aclik -= 1;
        *yorgunluk -= 1;
        *eglenme += 3;
    }
    else if(b == 2){
        printf("karsi cins tavlandi ");
        *aclik -= 1;
        *sosyallik += 1;
        *eglenme += 1;
    }
    else if(b == 3){
        printf("havada aglarla gezildi ");
        *aclik -= 1;
        *yorgunluk -= 1;
        *eglenme += 1;
    }
    else
        printf("hatali bir deger girildi ");
}

int main()
{
    printf("     /\\_/\\ \n");
    printf("    ( * * )\n");
    printf("      ( ) \n");
    printf("    /  |  \\ \n");

    printf("Sanal Orumcek Hamiyet Uygulamasina Hosgeldiniz :)\n");

    while(5==5){

        printf("\nYapilacaklar Listesi:\n");
        for (int i = 0; i <sizeof(ihtiyaclistesi) / sizeof(ihtiyaclistesi[0]) ; i++) {
            printf("%d. %s\n", i + 1, ihtiyaclistesi[i]);
        }
        int deger;

        printf("Bir deger giriniz. Programdan cikmak istiyorsaniz 0 giriniz: ");
        scanf("%d", &deger);

        if (deger == 0) {
            printf("Oyuna son veriliyor.\n");
            break;
        }

        switch (deger) {
            case 1:
                yemekYe(&seviye[0], &seviye[1], &seviye[7]);
                suic(&seviye[4], &seviye[7]);
                break;
            case 2:
                uyku2(&seviye[1],3);
                break;
            case 3:
                sevgiles(&seviye[2], &seviye[6]);
                break;
            case 4:
                sosyalles(&seviye[0], &seviye[1], &seviye[3], &seviye[6]);
                break;
            case 5:
                siradansaglik(&seviye[0], &seviye[7]);
                dusmangor(&seviye[0], &seviye[1], &seviye[3], &seviye[4]);
                break;
            case 6:
                egitimal(&seviye[0], &seviye[1], &seviye[5]);
                break;
            case 7:
                temizlik(&seviye[1], &seviye[6]);
                break;
            case 8:
                bosaltimyapma(&seviye[6], &seviye[7]);
                break;
            case 9:
                eglenmek(&seviye[0],&seviye[1] , &seviye[3], &seviye[8]);
                break;
            default:
                printf("Gecersiz bir secim yaptiniz.\n");
                continue;
        }

        printf("orumcegin yeni degerleri:\n");
        for (int i = 0; i < sizeof(ihtiyaclistesi) / sizeof(ihtiyaclistesi[0]); i++) {
            printf("%s: %d \t", ihtiyaclistesi[i], seviye[i]);
        }
        printf("\n");

    }


    return 0;
}
