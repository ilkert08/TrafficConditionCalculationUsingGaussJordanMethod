
#include "allegro5/allegro.h"
#include<stdio.h>
#include "allegro5/allegro_image.h"
int main()
{

    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_BITMAP  *image1   = NULL;
    ALLEGRO_BITMAP  *image2   = NULL;
    ALLEGRO_BITMAP *ekran2_1 = NULL;
    ALLEGRO_BITMAP *ekran2_2 =NULL;
    ALLEGRO_BITMAP *ok_b = NULL;
    ALLEGRO_BITMAP *ok_b_e = NULL;
    ALLEGRO_BITMAP *ok_d = NULL;
    ALLEGRO_BITMAP *ok_d_e = NULL;
    ALLEGRO_BITMAP *ok_g = NULL;
    ALLEGRO_BITMAP *ok_k = NULL;
    ALLEGRO_BITMAP *ok_k_b = NULL;
    ALLEGRO_BITMAP *ok_g_d = NULL;
    ALLEGRO_BITMAP *ok_g_b = NULL;
    ALLEGRO_BITMAP *ok_k_d = NULL;
    ALLEGRO_BITMAP *ok_k_b_flip = NULL;
    ALLEGRO_BITMAP *ok_g_d_flip = NULL;
    ALLEGRO_BITMAP *ok_g_b_flip = NULL;
    ALLEGRO_BITMAP *ok_k_d_flip = NULL;
    ALLEGRO_BITMAP  *alt1   = NULL;
    ALLEGRO_BITMAP  *alt2   = NULL;
    ALLEGRO_BITMAP  *alt3   = NULL;
    ALLEGRO_BITMAP  *alta   = NULL;
    ALLEGRO_BITMAP  *altb   = NULL;
    ALLEGRO_BITMAP  *altc   = NULL;
    ALLEGRO_BITMAP  *altd   = NULL;
    ALLEGRO_BITMAP  *alte   = NULL;
    ALLEGRO_BITMAP  *konsol = NULL;
    ALLEGRO_BITMAP  *y_secim = NULL;
    al_init(); //en adam fonksiyon
    al_install_mouse();
    al_install_keyboard();
    ALLEGRO_EVENT_QUEUE *event_queue=al_create_event_queue();  //Mouse fonksiyonlarinin çalismasina yarar
    al_register_event_source(event_queue, al_get_mouse_event_source());  //Mouse fonksiyonlarinin çalismasina yarar
    al_register_event_source(event_queue, al_get_keyboard_event_source());
    // al_register_event_source(event_queue, al_get_display_event_source(display));

    display = al_create_display(720,480); // ekran olusturur
    al_init_image_addon();  // resim atmak için gerekli fonksiyon
    // al_hide_mouse_cursor(display); //Fareyi gizler!
    image1 = al_load_bitmap("Presim1.bmp"); //resim1 yükler
    image2 = al_load_bitmap("Presim2.bmp"); // resim 2 yükler
    ekran2_1 = al_load_bitmap("Presim1_ekran2.bmp"); // resim 2 yükler
    ekran2_2 = al_load_bitmap("Presim2_ekran2.bmp"); // resim 2 yükler
    ok_b = al_load_bitmap("ok_b.png"); // resim 2 yükler
    ok_b_e = al_load_bitmap("ok_b_e.png"); // resim 2 yükler
    ok_d = al_load_bitmap("ok_d.png"); // resim 2 yükler
    ok_d_e = al_load_bitmap("ok_d_e.png"); // resim 2 yükler
    ok_g = al_load_bitmap("ok_g.png"); // resim 2 yükler
    ok_k = al_load_bitmap("ok_k.png"); // resim 2 yükler
    ok_g_b = al_load_bitmap("ok_g_b.png");
    ok_g_d = al_load_bitmap("ok_g_d.png");
    ok_k_b= al_load_bitmap("ok_k_b.png");
    ok_k_d = al_load_bitmap("ok_k_d.png");
    ok_g_b_flip = al_load_bitmap("ok_g_b_flip.png");
    ok_g_d_flip = al_load_bitmap("ok_g_d_flip.png");
    ok_k_b_flip= al_load_bitmap("ok_k_b_flip.png");
    ok_k_d_flip = al_load_bitmap("ok_k_d_flip.png");
    alt1=al_load_bitmap("alt1.png");
    alt2=al_load_bitmap("alt2.png");
    alt3=al_load_bitmap("alt3.png");
    alta=al_load_bitmap("alta.png");
    altb=al_load_bitmap("altb.png");
    altc=al_load_bitmap("altc.png");
    altd=al_load_bitmap("altd.png");
    alte=al_load_bitmap("alte.png");
    konsol=al_load_bitmap("konsol.png");
    y_secim=al_load_bitmap("y_secim.png");
    bool check =  false;
    bool yanlis= false;
    bool yon_x=false;
    bool yon_y=false;
    bool yon_z=false;
    bool yon_t=false;
    bool a_yon=false;
    bool b_yon=false;
    bool c_yon=false;
    bool d_yon=false;
    bool kontrol=false;
    bool e_yon=false;
    bool sayac_b=false;
    bool sayac_c=false;
    bool sayac_d=false;
    bool sayac_e=false;
    bool sayac_a=false;
    bool yogunluk=false;
    bool ilk=true;
    bool sifir=false;
    bool eicin=false;
    bool aisaret=NULL,bisaret=NULL,cisaret=NULL,disaret=NULL, eisaret=NULL, tisaret=NULL, xisaret=NULL, yisaret=NULL, zisaret=NULL;
    al_draw_bitmap(image1,0,0,0);
    al_draw_bitmap(image2,380,0,0);
    al_draw_bitmap(alt1,0,350,0);
    al_flip_display();
    al_rest(0.1);
    bool choose1=false;
    bool choose2=false;
    bool eyogunluk=false;
    bool secim1=false;
    bool secim2=false;
    int sayac=0;
    int yonsayaci=0;
    ALLEGRO_EVENT olay1;

    while(!check)
    {
    al_wait_for_event(event_queue, &olay1);

a:
        if(yanlis==true)
        {
            al_draw_bitmap(image1,0,0,0);
            al_draw_bitmap(image2,380,0,0);
            choose1=true;
            ilk=true;
            yanlis=false;
            choose2=false;
            yon_x=false;
            yon_y=false;
            yon_z=false;
            yon_t=false;
            tisaret=NULL, xisaret=NULL, yisaret=NULL, zisaret=NULL;
            al_draw_bitmap(y_secim,0,350,0);
            eyogunluk=false;
            yogunluk=false;
            secim1=false;
            secim2=false;
        }

        if(ilk==true)
        {
            if(olay1.type==ALLEGRO_EVENT_KEY_DOWN)
            {
                switch(olay1.keyboard.keycode)
                {
                case (ALLEGRO_KEY_1):
                    al_draw_bitmap(ekran2_1,0,0,0);
                    sayac++;
                    sifir=false;
                    ilk=false;
                    choose1=true;
                    secim1=true;
                    al_draw_bitmap(alt2,0,350,0);
                    break;



                case(ALLEGRO_KEY_2) :
                    al_draw_bitmap(ekran2_2,0,0,0);
                    ilk=false;
                    sifir=false;
                    choose1=true;
                    e_yon=true;
                    secim2=true;
                    al_draw_bitmap(alt2,0,350,0);

                    break;
                }
            }
        }

        if(choose1==true)
        {

            if(olay1.type==ALLEGRO_EVENT_KEY_DOWN)
            {
                switch(olay1.keyboard.keycode)
                {
                //trur=iceri, false=disari

                case(ALLEGRO_KEY_X) :
                    al_draw_bitmap(ok_g,328,-50,0);
                    xisaret=true;
                    sifir=true;
                    yonsayaci++;
                    choose2=false;
                    yon_x=true;
                    break;
                case(ALLEGRO_KEY_T) :
                    al_draw_bitmap(ok_d,130,150,0);
                    tisaret=true;
                    sifir=true;
                    yonsayaci++;
                    choose2=false;
                    yon_t=true;
                    break;
                case(ALLEGRO_KEY_Y) :
                    al_draw_bitmap(ok_b,440,146,0);
                    yisaret=true;
                    sifir=true;
                    //al_draw_bitmap(ok_kafasi,420,152,0);
                    yonsayaci++;
                    yon_y=true;
                    choose2=false;
                    break;
                case(ALLEGRO_KEY_Z) :
                    al_draw_bitmap(ok_k,328,243,0);
                    zisaret=true;
                    sifir=true;
                    yonsayaci++;
                    yon_z=true;
                    choose2=false;
                    break;

                case(ALLEGRO_KEY_ENTER):
                    choose2=true;
                    choose1=false;
                    break;

                }

            }
        }

        if(choose2==true)
        {
            if(yonsayaci>2 || yonsayaci==1 || sifir==false )
            {
                choose1=true;
                yanlis=true;
                yonsayaci=0;
                e_yon=false;
                sayac=0;
                sifir=true;
                goto a;
            }
            if(yonsayaci==2)
            {

                if(yon_x==false)
                {
                    al_draw_bitmap(ok_k, 328, 0,0 );
                    xisaret=false;

                }
                if(yon_y==false)
                {
                    al_draw_bitmap(ok_d, 440,150,0 );
                    yisaret=false;
                }
                if(yon_z==false)
                {
                    al_draw_bitmap(ok_g, 328, 220,0 );
                    zisaret=false;
                }
                if(yon_t==false)
                {
                    al_draw_bitmap(ok_b, 160, 150,0 );
                    tisaret=false;
                }
                kontrol=true;
                choose2=false;

            }
        }
        if(kontrol==true)
        {

            if(olay1.type==ALLEGRO_EVENT_KEY_DOWN)
            {
                al_draw_bitmap(alt3,0,350,0);
                switch(olay1.keyboard.keycode)
                {
                case(ALLEGRO_KEY_A):
                    a_yon=true;
                    b_yon=false;
                    c_yon=false;
                    d_yon=false;
                    if(sayac_a==false)
                        al_draw_bitmap(alta,0,350,0);
                    goto asecim;
                    break;
                case(ALLEGRO_KEY_B):
                    b_yon=true;
                    a_yon=false;
                    c_yon=false;
                    d_yon=false;
                    if(sayac_b==false)
                        al_draw_bitmap(altb,0,350,0);
                    goto bsecim;

                    break;
                case(ALLEGRO_KEY_C):
                    c_yon=true;
                    a_yon=false;
                    b_yon=false;
                    d_yon=false;
                    if(sayac_c==false)
                        al_draw_bitmap(altc,0,350,0);
                    goto csecim;
                    break;
                case(ALLEGRO_KEY_D):
                    d_yon=true;
                    b_yon=false;
                    c_yon=false;
                    a_yon=false;
                    if(sayac_d==false)
                        al_draw_bitmap(altd,0,350,0);
                    goto dsecim;

                    break;
                case(ALLEGRO_KEY_E):
                    if(sayac_e==false)
                        al_draw_bitmap(alte,0,350,0);
                    eicin=true;
                    goto esecim;
                    break;
                case(ALLEGRO_KEY_ENTER):
                    if(sayac==5)
                    {
                        al_draw_bitmap(konsol,0,350,0);
                    }
                    break;
                case(ALLEGRO_KEY_K):
                    if(sayac==5)
                    {
                        kontrol=false;
                        if(secim1==true)
                            yogunluk=true;
                        if(secim2==true)
                            eyogunluk=true;
                    }

                    break;

                }


            }

        }




asecim:
        if(a_yon==true&&sayac_a==false)
        {

            if(olay1.type==ALLEGRO_EVENT_KEY_DOWN)
            {
                switch(olay1.keyboard.keycode)
                {
                //aisaret=false-asagi, aisaret=true-yukari
                case(ALLEGRO_KEY_UP):
                    al_draw_bitmap(ok_k_b_flip,282,72,0);
                    aisaret=true;
                    a_yon=false;
                    sayac_a=true;
                    sayac++;
                    break;
                case(ALLEGRO_KEY_DOWN):
                    al_draw_bitmap(ok_g_b,270,89,0);
                    aisaret=false;
                    a_yon=false;
                    sayac_a=true;
                    sayac++;
                    break;


                }


            }

        }

bsecim:
        if(b_yon==true&&sayac_b==false)
        {

            if(olay1.type==ALLEGRO_EVENT_KEY_DOWN)
            {
                switch(olay1.keyboard.keycode)
                {
                case(ALLEGRO_KEY_UP):
                    al_draw_bitmap(ok_k_b,380,72,0);
                    bisaret=true;
                    b_yon=false;
                    sayac_b=true;
                    sayac++;
                    break;
                case(ALLEGRO_KEY_DOWN):
                    al_draw_bitmap(ok_g_b_flip,330,89,0);
                    bisaret=false;
                    b_yon=false;
                    sayac_b=true;
                    sayac++;
                    break;


                }
            }
        }


csecim:
        if(c_yon==true&&sayac_c==false)
        {

            if(olay1.type==ALLEGRO_EVENT_KEY_DOWN)
            {
                switch(olay1.keyboard.keycode)
                {
                case(ALLEGRO_KEY_DOWN):
                    al_draw_bitmap(ok_g_d,282,150,0);
                    cisaret=false;
                    c_yon=false;
                    sayac_c=true;
                    sayac++;
                    break;
                case(ALLEGRO_KEY_UP):
                    al_draw_bitmap(ok_k_d_flip,270,205,0);
                    cisaret=true;
                    c_yon=false;
                    sayac_c=true;
                    sayac++;
                    break;


                }


            }

        }


dsecim:
        if(d_yon==true&&sayac_d==false)
        {

            if(olay1.type==ALLEGRO_EVENT_KEY_DOWN)
            {
                switch(olay1.keyboard.keycode)
                {
                case(ALLEGRO_KEY_UP):
                    al_draw_bitmap(ok_k_d,332,200,0);
                    disaret=true;
                    d_yon=false;
                    sayac_d=true;
                    sayac++;
                    break;
                case(ALLEGRO_KEY_DOWN):
                    al_draw_bitmap(ok_g_d_flip,380,150,0);
                    disaret=false;
                    d_yon=false;
                    sayac_d=true;
                    sayac++;
                    break;


                }


            }

        }


esecim:
        if(e_yon==true&&sayac_e==false&&eicin==true)
        {

            if(olay1.type==ALLEGRO_EVENT_KEY_DOWN)
            {
                switch(olay1.keyboard.keycode)
                {
                case(ALLEGRO_KEY_RIGHT):
                    al_draw_bitmap(ok_d_e,300,142,0);
                    e_yon=false;
                    sayac_e=true;
                    eisaret=true;
                    sayac++;


                    break;
                case(ALLEGRO_KEY_LEFT):
                    al_draw_bitmap(ok_b_e,300,142,0);
                    e_yon=false;
                    sayac_e=true;
                    eisaret=false;
                    sayac++;

                    break;


                }


            }

        }

        if(yogunluk==true && eyogunluk==false)
        {
            al_draw_bitmap(konsol,0,350,0);
            float	matris[10][10];
            //BRUTE FORCE!
            //  t=1, x=2, y=3, z=4, a=5, b=6, c=7, d=8
            float araclar[9];
            printf("Lutfen arac yogunluklari giriniz : \n");
            printf("T yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[1]);
            printf("\n");
            printf("X yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[2]);

            printf("\n");
            printf("Y yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[3]);


            printf("\n");
            printf("Z yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[4]);

            printf("\n");
            printf("A yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[5]);


            printf("\n");
            printf("B yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[6]);

            printf("\n");
            printf("C yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[7]);
            printf("\n");

            printf("D yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[8]);
            printf("\n");
            //  t=1, x=2, y=3, z=4, a=5, b=6, c=7, d=8
            int i, j;
            for(i=1; i<9; i++)
            {
                for(j=1; j<10; j++)
                {
                    matris[i][j]=0;
                }
            }
            //1. satir
            matris[1][1]=araclar[1];
            matris[1][5]=araclar[5];
            matris[1][7]=araclar[7];
            matris[1][2]=0;
            matris[1][3]=0;
            matris[1][4]=0;
            matris[1][6]=0;
            matris[1][8]=0;

            //2. satir
            matris[2][2]=araclar[2];
            matris[2][5]=araclar[5];
            matris[2][6]=araclar[6];
            matris[2][1]=0;
            matris[2][3]=0;
            matris[2][4]=0;
            matris[2][7]=0;
            matris[2][8]=0;

            //3. satir
            matris[3][3]=araclar[3];
            matris[3][6]=araclar[6];
            matris[3][8]=araclar[8];
            matris[3][1]=0;
            matris[3][2]=0;
            matris[3][4]=0;
            matris[3][7]=0;
            matris[3][5]=0;


            //4. satir
            matris[4][4]=araclar[4];
            matris[4][7]=araclar[7];
            matris[4][8]=araclar[8];
            matris[4][1]=0;
            matris[4][3]=0;
            matris[4][6]=0;
            matris[4][5]=0;
            matris[4][2]=0;

            int satirtoplam[10]= {0,0,0,0,0,0,0,0,0,0};

            if(tisaret==false && araclar[1]!=-1)
            {
                matris[1][1]=matris[1][1]*(-1);
            }
            if(xisaret==false && araclar[2]!=-1)
            {
                matris[2][2]=matris[2][2]*(-1);
            }
            if(yisaret==false &&araclar[3]!=-1)
            {
                matris[3][3]=matris[3][3]*(-1);
            }
            if(zisaret==false && araclar[4]!=-1)
            {
                matris[4][4]= matris[4][4]*(-1);
            }
            // t x y z a b c d
            // 1 1 0 0 1 1 1
            if(aisaret==true && araclar[5]!=-1)
            {
                matris[1][5]=matris[1][5]*(-1);
            }
            else if(aisaret==false && araclar[5]!=-1)
            {
                matris[2][5]=(-1)*matris[2][5];
            }
            if(bisaret==true && araclar[6]!=-1)
            {
                matris[3][6]=matris[3][6]*(-1);
            }
            else if(bisaret==false && araclar[6]!=-1)
            {
                matris[2][6]=matris[2][6]*(-1);
            }

            if(cisaret==true&& araclar[7]!=-1)
            {
                matris[4][7]=matris[4][7]*(-1);
            }
            else if(cisaret==false && araclar[7]!=-1)
            {
                matris[1][7]=matris[1][7]*(-1);
            }

            if(disaret==true && araclar[8]!=-1)
            {
                matris[4][8]=matris[4][8]*(-1);
            }
            else if(disaret==false && araclar[8]!=-1)
            {
                matris[3][8]=matris[3][8]*(-1);
            }

            for(i=1; i<=8; i++)
            {
                for(j=1; j<=9; j++)
                {
                    printf("%.1f   ",matris[i][j]);
                }
                printf("\n");
            }
            printf("\n\n\n");

            int eksi1say1=0;

            for(i=1; i<=4; i++)
            {
                for(j=1; j<=8; j++)
                {
                    if(matris[i][j]!=-1)
                    {
                        satirtoplam[i]+=matris[i][j];
                        matris[i][j]=0;

                    }
                    if(matris[i][j]==-1)
                    {
                        eksi1say1=1;
                    }

                }
                matris[i][9]=satirtoplam[i];
                if(eksi1say1==0)
                {
                    matris[i][9]=0;
                }
            }

            for(i=1; i<=8; i++)
            {
                for(j=1; j<=9; j++)
                {
                    printf("%.1f   ",matris[i][j]);
                }
                printf("\n");
            }
            printf("\n\n\n");



            // giriyosa bilinmeyen -1 kalcak çýkýyosa 1 e dönüþtürcez

            // xicinvebicin
            if(aisaret==false && araclar[5]==-1 )
            {
                matris[2][5]=(-1)*matris[2][5];

            }
            //ticinvecicin
            else if(aisaret==true && araclar[5]==-1)
            {


                matris[1][5]=(-1)*matris[1][5];
            }
            //xiçinveaicin
            if(bisaret==false && araclar[6]==-1)
            {
                matris[2][6]=(-1)*matris[2][6];

            }
            //yicinvedicin
            else if(bisaret==true && araclar[6]==-1)
            {
                matris[3][5]=(-1)*matris[3][5];

            }
            //ticinveaicin
            if(cisaret==false && araclar[7]==-1)
            {
                matris[1][7]=(-1)*matris[1][7];

            }
            //zicindicin
            else if(cisaret==true && araclar[7]==-1)
            {
                matris[4][7]=(-1)*matris[4][7];

            }
            //yicinvebicin
            if(disaret==false && araclar[8]==-1)
            {
                matris[3][8]=(-1)*matris[3][8];

            }
            //zicinvecicin
            else if(disaret==true && araclar[8]==-1)
            {
                matris[4][8]=(-1)*matris[4][8];

            }
            //aicinvecicin
            if(tisaret==false && araclar[1]==-1)
            {
                matris[1][1]=(-1)*matris[1][1];
            }
            if(xisaret==false && araclar[2]==-1)
            {
                matris[2][2]=(-1)*matris[2][2];

            }
            if(yisaret==false && araclar[3]==-1)
            {
                matris[3][3]=(-1)*matris[3][3];

            }
            if(zisaret==false && araclar[4]==-1)
            {
                matris[4][4]=(-1)*matris[4][4];

            }

            for(i=1; i<10; i++)
            {
                matris[5][i]=matris[1][i];
                matris[6][i]=matris[2][i];
                matris[7][i]=matris[4][i];
                matris[8][i]=matris[3][i];

            }

            if(araclar[1]==-1 && araclar[5]==-1)
            {
                for(i=1; i<10; i++)
                {
                    matris[5][i]=0;
                }
                if(aisaret==true)
                {
                    matris[5][5]=araclar[5];
                    if(xisaret==true)
                        matris[5][2]=araclar[2];
                    else if(xisaret==false)
                    {
                        matris[5][2]=(-1)*araclar[2];

                    }
                    if(bisaret==true)
                    {
                        matris[5][6]=araclar[6];

                    }
                    else if(bisaret==false)
                    {
                        matris[5][6]=(-1)*araclar[6];

                    }


                }
                if(aisaret==false)
                {
                    matris[5][5]=(-1)*araclar[5];
                    if(xisaret==true && araclar[2]!=-1)
                        matris[5][2]=araclar[2];
                    else if(xisaret==false)
                    {
                        matris[5][2]=(-1)*araclar[2];

                    }
                    if(bisaret==true&& araclar[7]!=-1)
                    {
                        matris[5][6]=araclar[6];

                    }
                    else if(bisaret==false)
                    {
                        matris[5][6]=(-1)*araclar[6];

                    }
                }
                for(i=1; i<=8; i++)
                    {
                        if(matris[5][i]!=-1 && matris[5][i]!=1 )
                        {
                            matris[5][9]+=matris[5][i];
                            matris[5][i]=0;
                        }
                    }
            }


                if(araclar[4]==-1 && araclar[7]==-1)
                {
                    for(i=1; i<10; i++)
                    {
                        matris[7][i]=0;
                    }


                    if(cisaret==true)
                    {
                        matris[7][7]=araclar[7];
                        if(aisaret==true)
                            matris[7][5]=(-1)*araclar[5];
                        else if(aisaret==false)
                        {
                            matris[7][5]=araclar[5];

                        }
                        if(tisaret==true)
                        {
                            matris[7][1]=araclar[1];

                        }
                        else if(tisaret==false)
                        {
                            matris[7][1]=(-1)*araclar[1];

                        }


                    }

                    if(cisaret==false)
                    {
                        matris[7][7]=(-1)*araclar[7];
                        if(aisaret==true && araclar[5]!=-1)
                            matris[7][5]=(-1)*araclar[5];
                        else if(aisaret==false)
                        {
                            matris[7][5]=araclar[5];

                        }
                        if(tisaret==true&& araclar[1]!=-1)
                        {
                            matris[7][1]=araclar[1];

                        }
                        else if(tisaret==false)
                        {
                            matris[7][1]=(-1)*araclar[1];

                        }
                    }


                    for(i=1; i<=8; i++)
                    {
                        if(matris[7][i]!=-1 && matris[7][i]!=1 )
                        {
                            matris[7][9]+=matris[7][i];
                            matris[7][i]=0;
                        }
                    }
                }


                     if(araclar[2]==-1 && araclar[6]==-1)
                {
                    for(i=1; i<10; i++)
                    {
                        matris[6][i]=0;
                    }


                    if(bisaret==true)
                    {
                        matris[6][6]=araclar[6];
                        if(yisaret==true)
                            matris[6][3]=(-1)*araclar[3];
                        else if(yisaret==false)
                        {
                            matris[6][3]=araclar[3];

                        }
                        if(disaret==true)
                        {
                            matris[6][8]=(-1)*araclar[8];

                        }
                        else if(disaret==false)
                        {
                            matris[6][8]=araclar[8];

                        }


                    }

                    if(bisaret==false)
                    {
                        matris[6][6]=(-1)*araclar[6];
                        if(yisaret==true && araclar[3]!=-1)
                            matris[6][3]=(-1)*araclar[3];
                        else if(yisaret==false)
                        {
                            matris[6][3]=araclar[3];

                        }
                        if(disaret==true&& araclar[8]!=-1)
                        {
                            matris[6][8]=(-1)*araclar[8];

                        }
                        else if(disaret==false)
                        {
                            matris[6][8]=araclar[8];

                        }
                    }


                    for(i=1; i<=8; i++)
                    {
                        if(matris[6][i]!=-1 && matris[6][i]!=1 )
                        {
                            matris[6][9]+=matris[6][i];
                            matris[6][i]=0;
                        }
                    }
                }



                 if(araclar[3]==-1 && araclar[8]==-1)
                {
                    for(i=1; i<10; i++)
                    {
                        matris[8][i]=0;
                    }


                    if(disaret==true)
                    {
                        matris[8][8]=araclar[8];
                        if(cisaret==true)
                            matris[8][7]=araclar[7];
                        else if(cisaret==false)
                        {
                            matris[8][7]=(-1)*araclar[7];

                        }
                        if(zisaret==true)
                        {
                            matris[8][4]=(-1)*araclar[4];

                        }
                        else if(zisaret==false)
                        {
                            matris[8][4]=araclar[4];

                        }


                    }

                    if(disaret==false)
                    {
                        matris[8][8]=(-1)*araclar[8];
                        if(cisaret==true && araclar[7]!=-1)
                            matris[8][7]=araclar[7];
                        else if(cisaret==false)
                        {
                            matris[8][7]=(-1)*araclar[7];

                        }
                        if(zisaret==true&& araclar[4]!=-1)
                        {
                            matris[8][4]=(-1)*araclar[4];

                        }
                        else if(zisaret==false)
                        {
                            matris[8][4]=araclar[4];

                        }
                    }


                    for(i=1; i<=8; i++)
                    {
                        if(matris[8][i]!=-1 && matris[8][i]!=1 )
                        {
                            matris[8][9]+=matris[8][i];
                            matris[8][i]=0;
                        }
                    }
                }

                for(i=1; i<=8; i++)
                {
                    for(j=1; j<=9; j++)
                    {
                        printf("%.1f   ",matris[i][j]);
                    }
                    printf("\n");
                }
                printf("\n");
                //gauss


                int k;
                float katsayi,x[10];


                int bitir=0,y,t;


                for(j=1; j<=8; j++)
                {
                    if(bitir>=56)
                    {
                        break;
                    }
                    for(i=1; i<=8; i++)
                    {
                        for(y=1; y<9; y++)
                        {
                            for(t=1; t<9; t++)
                            {
                                if(y!=t)
                                {
                                    if(matris[y][t]==0)
                                    {
                                        bitir++;
                                    }
                                }

                            }

                        }
                        if(i!=j)
                        {

                            if(matris[j][j]!=0)
                            {
                                katsayi=matris[i][j]/matris[j][j];
                                for(k=1; k<=9; k++)
                                {
                                    if(katsayi==0)
                                    {
                                        break;
                                    }
                                    if(i==k)
                                    {
                                        continue;
                                    }
                                    matris[i][k]=matris[i][k]-katsayi*matris[j][k];
                                }
                                if(katsayi!=0)
                                    printf("R[%d]=R[%d]-(%.1f)*R[%d]\n",i,i,katsayi,j);
                                for(int y=1; y<9; y++)
                                {
                                    if(katsayi==0)
                                    {
                                        break;
                                    }
                                    for(int p=1; p<=9; p++)
                                    {
                                        printf("%.1f  ",matris[y][p]);

                                    }
                                    printf("\n");

                                }
                            }
                        }
                    }
                    printf("\n");
                    bitir=0;
                }
                printf("\nThe solution is:\n");
                for(i=1; i<=8; i++)
                {
                    x[i]=matris[i][9]/matris[i][i];
                    printf("\n x%d=%.1f\n",i,x[i]);
                }

                yogunluk=false;
            }




            if(eyogunluk==true)
            {
                al_draw_bitmap(konsol,0,350,0);
            float	matris[11][11];
            //BRUTE FORCE!
            //  t=1, x=2, y=3, z=4, a=5, b=6, c=7, d=8
            float araclar[10];
            printf("Lutfen arac yogunluklari giriniz : \n");
            printf("T yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[1]);
            printf("\n");
            printf("X yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[2]);

            printf("\n");
            printf("Y yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[3]);


            printf("\n");
            printf("Z yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[4]);

            printf("\n");
            printf("A yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[5]);


            printf("\n");
            printf("B yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[6]);

            printf("\n");
            printf("C yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[7]);
            printf("\n");

            printf("D yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[8]);
            printf("\n");

            printf("E yolunun arac yougunlugunu giriniz : ");
            scanf("%f",&araclar[9]);
            printf("\n");
            //  t=1, x=2, y=3, z=4, a=5, b=6, c=7, d=8
            int i, j;
            for(i=1; i<10; i++)
            {
                for(j=1; j<11; j++)
                {
                    matris[i][j]=0;
                }
            }
            for(i=1; i<10; i++)
            {
                for(j=1; j<11; j++)
                {

                   printf("%.1f ",matris[i][j]);
                }
                printf("\n");
            }

            //1. satir
            matris[1][1]=araclar[1];
            matris[1][5]=araclar[5];
            matris[1][7]=araclar[7];
            matris[1][9]=araclar[9];

            //2. satir
            matris[2][2]=araclar[2];
            matris[2][5]=araclar[5];
            matris[2][6]=araclar[6];

            //3. satir
            matris[3][3]=araclar[3];
            matris[3][6]=araclar[6];
            matris[3][8]=araclar[8];
            matris[3][9]=araclar[9];


            //4. satir
            matris[4][4]=araclar[4];
            matris[4][7]=araclar[7];
            matris[4][8]=araclar[8];


            //9.satir
            matris[9][9]=araclar[9];
            matris[9][1]=araclar[1];
            matris[9][3]=araclar[3];
            matris[9][5]=araclar[5];
            matris[9][6]=araclar[6];
            matris[9][7]=araclar[7];
            matris[9][8]=araclar[8];


            int satirtoplam[10]= {0,0,0,0,0,0,0,0,0,0};
            printf("\n\n");
             for(i=1; i<10; i++)
            {
                for(j=1; j<11; j++)
                {

                   printf("%.1f ",matris[i][j]);
                }
                printf("\n");
            }

               if(tisaret==false && araclar[1]!=-1)
            {
                matris[1][1]=matris[1][1]*(-1);
            }
            if(xisaret==false && araclar[2]!=-1)
            {
                matris[2][2]=matris[2][2]*(-1);
            }
            if(yisaret==false &&araclar[3]!=-1)
            {
                matris[3][3]=matris[3][3]*(-1);
            }
            if(zisaret==false && araclar[4]!=-1)
            {
                matris[4][4]= matris[4][4]*(-1);
            }



            if(aisaret==true && araclar[5]!=-1)
            {
                matris[1][5]=matris[1][5]*(-1);
            }
            else if(aisaret==false && araclar[5]!=-1)
            {
                matris[2][5]=(-1)*matris[2][5];
            }
            if(bisaret==true && araclar[6]!=-1)
            {
                matris[3][6]=matris[3][6]*(-1);
            }
            else if(bisaret==false && araclar[6]!=-1)
            {
                matris[2][6]=matris[2][6]*(-1);
            }

            if(cisaret==true&& araclar[7]!=-1)
            {
                matris[4][7]=matris[4][7]*(-1);
            }
            else if(cisaret==false && araclar[7]!=-1)
            {
                matris[1][7]=matris[1][7]*(-1);
            }

            if(disaret==true && araclar[8]!=-1)
            {
                matris[4][8]=matris[4][8]*(-1);
            }
            else if(disaret==false && araclar[8]!=-1)
            {
                matris[3][8]=matris[3][8]*(-1);
            }
            if(eisaret==true && araclar[9]!=-1)
            {
                matris[1][9]=(-1)*matris[1][9];
                matris[5][9]=(-1)*matris[5][9];
                matris[7][9]=(-1)*matris[7][9];

            }
             else if(eisaret==false && araclar[9]!=-1)
            {
                matris[3][9]=(-1)*matris[3][9];
                matris[6][9]=(-1)*matris[6][9];
                matris[8][9]=(-1)*matris[8][9];
            }


            int eksi1say1=0;

            for(i=1; i<=4; i++)
            {
                for(j=1; j<=9; j++)
                {
                    if(matris[i][j]!=-1 && matris[i][j]!=1)
                    {
                        satirtoplam[i]+=matris[i][j];
                        matris[i][j]=0;

                    }
                    if(matris[i][j]==-1)
                    {
                        eksi1say1=1;
                    }

                }
                matris[i][10]=satirtoplam[i];
                if(eksi1say1==0)
                {
                    matris[i][10]=0;
                }
            }


            printf("\n\n");
            for(i=1; i<10; i++)
            {
                for(j=1; j<11; j++)
                {

                   printf("%.1f ",matris[i][j]);
                }
                printf("\n");
            }

            if(eisaret==true)
            {
                matris[9][9]=(-1)*araclar[9];
                matris[9][1]=0;
                matris[9][2]=0;
                matris[9][4]=0;
                matris[9][5]=0;
                matris[9][7]=0;
                if(yisaret==true)
                {
                   matris[9][3]=(-1)*matris[9][3];
                }
               else if(yisaret==false && araclar[3]!=-1)
                {
                    matris[9][3]=matris[9][3];
                }

                if(bisaret==true && araclar[6]!=-1)
                {
                    matris[9][6]=matris[9][6];
                }
                else if(bisaret==false)
                {
                    matris[9][6]=(-1)*matris[9][6];
                }
                if(disaret==true)
                {
                     matris[9][8]=(-1)*matris[9][8];
                }
                else if(disaret==false && araclar[8]!=-1)
                {
                     matris[9][8]=matris[9][8];
                }
            }

            if(eisaret==false)
            {
                matris[9][3]=0;
                matris[9][6]=0;
                matris[9][8]=0;
                matris[9][4]=0;
                matris[9][2]=0;
                if(tisaret==true)
                {
                   matris[9][1]=matris[9][1];
                }
               else if(tisaret==false && araclar[1]!=-1)
                {
                    matris[9][1]=(-1)*matris[9][1];
                }

                if(aisaret==true && araclar[5]!=-1)
                {
                    matris[9][5]=(-1)*matris[9][5];
                }
                else if(aisaret==false)
                {
                    matris[9][5]=matris[9][5];
                }
                if(cisaret==true)
                {
                     matris[9][7]=matris[9][7];
                }
                else if(cisaret==false && araclar[7]!=-1)
                {
                     matris[9][7]=(-1)*matris[9][7];
                }
            }

            printf("\n\n");
            for(i=1; i<10; i++)
            {
                for(j=1; j<11; j++)
                {

                   printf("%.1f ",matris[i][j]);
                }
                printf("\n");
            }


            for(i=9; i<=9; i++)
            {
                for(j=1; j<=9; j++)
                {
                    if(matris[i][j]!=-1 && matris[i][j]!=1)
                    {
                        satirtoplam[i]+=matris[i][j];
                        matris[i][j]=0;

                    }
                    if(matris[i][j]==-1)
                    {
                        eksi1say1=1;
                    }

                }
                matris[i][10]=satirtoplam[i];
                if(eksi1say1==0)
                {
                    matris[i][10]=0;
                }
            }

             printf("\n\n");
            for(i=1; i<10; i++)
            {
                for(j=1; j<11; j++)
                {

                   printf("%.1f ",matris[i][j]);
                }
                printf("\n");
            }





             // xicinvebicin
            if(aisaret==false && araclar[5]==-1 )
            {
                matris[2][5]=(-1)*matris[2][5];

            }
            //ticinvecicinveeicin
            else if(aisaret==true && araclar[5]==-1)
            {

                matris[9][5]=(-1)*matris[9][5];
                matris[1][5]=(-1)*matris[1][5];
            }
            //xiçinveaicin
            if(bisaret==false && araclar[6]==-1)
            {
                matris[2][6]=(-1)*matris[2][6];

            }
            //yicinvedicinveeicin
            else if(bisaret==true && araclar[6]==-1)
            {
                matris[9][5]=(-1)*matris[9][5];
                matris[3][5]=(-1)*matris[3][5];

            }
            //ticinveaicinveeicin
            if(cisaret==false && araclar[7]==-1)
            {
                matris[9][7]=(-1)*matris[9][7];
                matris[1][7]=(-1)*matris[1][7];

            }
            //zicindicin
            else if(cisaret==true && araclar[7]==-1)
            {
                matris[4][7]=(-1)*matris[4][7];

            }
            //yicinvebicin
            if(disaret==false && araclar[8]==-1)
            {
                matris[9][8]=(-1)*matris[9][8];
                matris[3][8]=(-1)*matris[3][8];
                matris[6][8]=(-1)*matris[6][8];
            }
            //zicinvecicin
            else if(disaret==true && araclar[8]==-1)
            {
                matris[4][8]=(-1)*matris[4][8];

            }
            //tvecveaicin
            if(eisaret==true && araclar[9]==-1)
            {
                matris[1][9]=(-1)*matris[1][9];
                matris[7][9]=(-1)*matris[7][9];
                matris[5][9]=(-1)*matris[5][9];
            }
            //yvebvedicin
            else if(eisaret==false && araclar[9]==-1)
            {
                matris[3][9]=(-1)*matris[3][9];

            }
            //aicinvecicin
            if(tisaret==false && araclar[1]==-1)
            {
                matris[1][1]=(-1)*matris[1][1];
            }
            if(xisaret==false && araclar[2]==-1)
            {
                matris[2][2]=(-1)*matris[2][2];

            }
            if(yisaret==false && araclar[3]==-1)
            {
                matris[3][3]=(-1)*matris[3][3];

            }
            if(zisaret==false && araclar[4]==-1)
            {
                matris[4][4]=(-1)*matris[4][4];

            }



            for(i=1; i<11; i++)
            {
                matris[5][i]=matris[1][i];
                matris[6][i]=matris[2][i];
                matris[7][i]=matris[4][i];
                matris[8][i]=matris[3][i];

            }


             printf("\n\n");
            for(i=1; i<10; i++)
            {
                for(j=1; j<11; j++)
                {

                   printf("%.1f ",matris[i][j]);
                }
                printf("\n");
            }


        if(araclar[1]==-1 && araclar[5]==-1)
            {
                for(i=1; i<11; i++)
                {
                    matris[5][i]=0;
                }
                if(aisaret==true)
                {
                    matris[5][5]=araclar[5];
                    if(xisaret==true)
                        matris[5][2]=araclar[2];
                    else if(xisaret==false)
                    {
                        matris[5][2]=(-1)*araclar[2];

                    }
                    if(bisaret==true)
                    {
                        matris[5][6]=araclar[6];

                    }
                    else if(bisaret==false)
                    {
                        matris[5][6]=(-1)*araclar[6];

                    }


                }
                if(aisaret==false)
                {
                    matris[5][5]=(-1)*araclar[5];
                    if(xisaret==true && araclar[2]!=-1)
                        matris[5][2]=araclar[2];
                    else if(xisaret==false)
                    {
                        matris[5][2]=(-1)*araclar[2];

                    }
                    if(bisaret==true&& araclar[7]!=-1)
                    {
                        matris[5][6]=araclar[6];

                    }
                    else if(bisaret==false)
                    {
                        matris[5][6]=(-1)*araclar[6];

                    }
                }
            }
                 for(i=1; i<=9; i++)
                    {
                        if(matris[5][i]!=-1 && matris[5][i]!=1 )
                        {
                            matris[5][10]+=matris[5][i];
                            matris[5][i]=0;
                        }
                    }

                    if(araclar[3]==-1 && araclar[8]==-1)
                {
                    for(i=1; i<11; i++)
                    {
                        matris[8][i]=0;
                    }


                    if(disaret==true)
                    {
                        matris[8][8]=araclar[8];
                        if(cisaret==true)
                            matris[8][7]=araclar[7];
                        else if(cisaret==false)
                        {
                            matris[8][7]=(-1)*araclar[7];

                        }
                        if(zisaret==true)
                        {
                            matris[8][4]=(-1)*araclar[4];

                        }
                        else if(zisaret==false)
                        {
                            matris[8][4]=araclar[4];

                        }


                    }

                    if(disaret==false)
                    {
                        matris[8][8]=(-1)*araclar[8];
                        if(cisaret==true && araclar[7]!=-1)
                            matris[8][7]=araclar[7];
                        else if(cisaret==false)
                        {
                            matris[8][7]=(-1)*araclar[7];

                        }
                        if(zisaret==true&& araclar[4]!=-1)
                        {
                            matris[8][4]=(-1)*araclar[4];

                        }
                        else if(zisaret==false)
                        {
                            matris[8][4]=araclar[4];

                        }
                    }


                    for(i=1; i<=9; i++)
                    {
                        if(matris[8][i]!=-1 && matris[8][i]!=1 )
                        {
                            matris[8][10]+=matris[8][i];
                            matris[8][i]=0;
                        }
                    }
                }
                 if(araclar[4]==-1 && araclar[7]==-1)
                {
                    for(i=1; i<11; i++)
                    {
                        matris[7][i]=0;
                    }


                    if(cisaret==true)
                    {
                        matris[7][7]=araclar[7];
                        if(aisaret==true)
                            matris[7][5]=(-1)*araclar[5];
                        else if(aisaret==false)
                        {
                            matris[7][5]=araclar[5];

                        }
                        if(tisaret==true)
                        {
                            matris[7][1]=araclar[1];

                        }
                        else if(tisaret==false)
                        {
                            matris[7][1]=(-1)*araclar[1];

                        }
                        if(eisaret==true)
                        {
                            matris[7][9]=(-1)*araclar[9];
                        }
                        else if(eisaret==false)
                        {
                            matris[7][9]=araclar[9];
                        }


                    }

                    if(cisaret==false)
                    {
                        matris[7][7]=(-1)*araclar[7];
                        if(aisaret==true && araclar[5]!=-1)
                            matris[7][5]=(-1)*araclar[5];
                        else if(aisaret==false)
                        {
                            matris[7][5]=araclar[5];

                        }
                        if(tisaret==true&& araclar[1]!=-1)
                        {
                            matris[7][1]=araclar[1];

                        }
                        else if(tisaret==false)
                        {
                            matris[7][1]=(-1)*araclar[1];

                        }
                        if(eisaret==true)
                        {
                            matris[7][9]=(-1)*araclar[9];
                        }
                        else if(eisaret==false)
                        {
                            matris[7][9]=araclar[9];
                        }
                    }


                    for(i=1; i<=9; i++)
                    {
                        if(matris[7][i]!=-1 && matris[7][i]!=1 )
                        {
                            matris[7][10]+=matris[7][i];
                            matris[7][i]=0;
                        }
                    }
                }


                 if(araclar[2]==-1 && araclar[6]==-1)
                {
                    for(i=1; i<11; i++)
                    {
                        matris[6][i]=0;
                    }


                    if(bisaret==true)
                    {
                        matris[6][6]=araclar[6];
                        if(yisaret==true)
                            matris[6][3]=(-1)*araclar[3];
                        else if(yisaret==false)
                        {
                            matris[6][3]=araclar[3];

                        }
                        if(disaret==true)
                        {
                            matris[6][8]=(-1)*araclar[8];

                        }
                        else if(disaret==false)
                        {
                            matris[6][8]=araclar[8];

                        }
                        if(eisaret==true)
                        {
                            matris[6][9]=(-1)*araclar[9];
                        }
                        else if(eisaret==false)
                        {
                             matris[6][9]=araclar[9];
                        }


                    }

                    if(bisaret==false)
                    {
                        matris[6][6]=(-1)*araclar[6];
                        if(yisaret==true && araclar[3]!=-1)
                            matris[6][3]=(-1)*araclar[3];
                        else if(yisaret==false)
                        {
                            matris[6][3]=araclar[3];

                        }
                        if(disaret==true&& araclar[8]!=-1)
                        {
                            matris[6][8]=(-1)*araclar[8];

                        }
                        else if(disaret==false)
                        {
                            matris[6][8]=araclar[8];

                        }
                         if(eisaret==true)
                        {
                            matris[6][9]=(-1)*araclar[9];
                        }
                        else if(eisaret==false)
                        {
                             matris[6][9]=araclar[9];
                        }
                    }


                    for(i=1; i<=9; i++)
                    {
                        if(matris[6][i]!=-1 && matris[6][i]!=1 )
                        {
                            matris[6][10]+=matris[6][i];
                            matris[6][i]=0;
                        }
                    }
                }



             for(i=1; i<10; i++)
            {
                for(j=1; j<11; j++)
                {

                   printf("%.1f ",matris[i][j]);
                }
                printf("\n");

            }


              //gauss


                int k;
                float katsayi,x[11];


                int bitir=0,y,t;


                for(j=1; j<=9; j++)
                {
                    if(bitir>=72)
                    {
                        break;
                    }
                    for(i=1; i<=9; i++)
                    {
                        for(y=1; y<10; y++)
                        {
                            for(t=1; t<10; t++)
                            {
                                if(y!=t)
                                {
                                    if(matris[y][t]==0)
                                    {
                                        bitir++;
                                    }
                                }

                            }

                        }
                        if(i!=j)
                        {

                            if(matris[j][j]!=0)
                            {
                                katsayi=matris[i][j]/matris[j][j];
                                for(k=1; k<=10; k++)
                                {
                                    if(katsayi==0)
                                    {
                                        break;
                                    }
                                    if(i==k)
                                    {
                                        continue;
                                    }
                                    matris[i][k]=matris[i][k]-katsayi*matris[j][k];
                                }
                                if(katsayi!=0)
                                    printf("R[%d]=R[%d]-(%.1f)*R[%d]\n",i,i,katsayi,j);
                                for(int y=1; y<10; y++)
                                {
                                    if(katsayi==0)
                                    {
                                        break;
                                    }
                                    for(int p=1; p<=10; p++)
                                    {
                                        printf("%.1f  ",matris[y][p]);

                                    }
                                    printf("\n");

                                }
                            }
                        }
                    }
                    printf("\n");
                    bitir=0;
                }
                printf("\nThe solution is:\n");
                for(i=1; i<=9; i++)
                {
                    x[i]=matris[i][10]/matris[i][i];
                    printf("\n x%d=%.1f\n",i,x[i]);
                }
                eyogunluk=false;
            }

            al_flush_event_queue(event_queue);
            al_flip_display();
            al_rest(0.1);


        }

        al_destroy_display(display); //ekrani ramden siler!

        return 0;

    }
