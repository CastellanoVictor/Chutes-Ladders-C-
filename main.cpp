#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;
float xarreglo[105]={0,1140, 1020, 900, 780, 660, 540, 420, 300, 180, 60, 60, 180, 300, 420, 540, 660, 780, 900, 1020, 1140, 1140, 1020, 900, 780, 660, 540, 420, 300, 180, 60, 60, 180, 300, 420, 540, 660, 780, 900, 1020, 1140, 1140, 1020, 900, 780, 660, 540, 420, 300, 180, 60, 60, 180, 300, 420, 540, 660, 780, 900, 1020, 1140, 1140, 1020, 900, 780, 660, 540, 420, 300, 180, 60, 60, 180, 300, 420, 540, 660, 780, 900, 1020, 1140, 1140, 1020, 900, 780, 660, 540, 420, 300, 180, 60, 60, 180, 300, 420, 540, 660, 780, 900, 1020, 1140};
float yarreglo[105]={0,522.5, 522.5, 522.5, 522.5, 522.5, 522.5, 522.5, 522.5, 522.5, 522.5, 467.5, 467.5, 467.5, 467.5, 467.5, 467.5,467.5, 467.5, 467.5, 467.5, 412.5, 412.5, 412.5, 412.5, 412.5, 412.5, 412.5, 412.5, 412.5, 412.5, 357.5, 357.5, 357.5, 357.5, 357.5, 357.5, 357.5, 357.5, 357.5, 357.5, 302.5, 302.5, 302.5, 302.5, 302.5, 302.5, 302.5, 302.5, 302.5, 302.5, 247.5, 247.5, 247.5, 247.5, 247.5, 247.5, 247.5, 247.5, 247.5, 247.5, 192.5, 192.5, 192.5, 192.5, 192.5, 192.5, 192.5, 192.5, 192.5, 192.5, 137.5, 137.5, 137.5, 137.5, 137.5, 137.5, 137.5, 137.5, 137.5, 137.5, 82.5, 82.5, 82.5, 82.5, 82.5, 82.5, 82.5, 82.5, 82.5, 82.5, 27.5, 27.5, 27.5, 27.5, 27.5, 27.5, 27.5, 27.5, 27.5, 27.5};


int bandera2 = 1;
void inicia_grafico()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    initwindow(getmaxwidth( ), getmaxheight( ));
    delay(100);
}

void creaGrafico()
{
int n, m, a, b;
    ///inicia_grafico();
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
 ///   rectangle(0,0,1200,550);
    setcolor(BLACK);
for(int i=0; i<=10; i++)
{
    for(int j=0; j<=9; j++)
    {
        m=j*55;
        setcolor(BLACK);
        rectangle(n,m,60+n,27.5+m);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        floodfill(n+10,m+10,LIGHTBLUE);
    }
  n=120*i;
}


for(int i=0; i<=10; i++)
{
    for(int j=0; j<=9; j++)
    {
        m=j*55;
        setcolor(WHITE);
        rectangle(n+60,m,120+n,27.5+m);
        setfillstyle(SOLID_FILL,RED);
        floodfill(n+61,m+1,WHITE);
    }
  n=120*i;
}


for(int i=0; i<=10; i++)
{
    for(int j=0; j<=9; j++)
    {
        m=j*55;
        setcolor(WHITE);
        rectangle(n,m+27.5,60+n,55+m);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(n+1,m+28.5,WHITE);
    }
  n=120*i;
}


for(int i=0; i<=10; i++)
{
    for(int j=0; j<=9; j++)
    {
        m=j*55;
        setcolor(WHITE);
        rectangle(n+60,m+27.5,120+n,55+m);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(n+61,m+28.5,WHITE);
    }
  n=120*i;
}

setcolor(BROWN);
rectangle(1200,0,1500, 550);
setfillstyle(SOLID_FILL,BLACK);
floodfill(1201,1,BROWN);

setcolor(BROWN);
rectangle(0,550,1400, 1400);
setfillstyle(SOLID_FILL,BLACK);
floodfill(1,551,BROWN);

setcolor(WHITE);
settextstyle(1,0,3);
outtextxy(40, 12, "91");
outtextxy(160, 12, "92");
outtextxy(280, 12, "93");
outtextxy(400, 12, "94");
outtextxy(520, 12, "95");
outtextxy(640, 12, "96");
outtextxy(760, 12, "97");
outtextxy(880, 12, "98");
outtextxy(1000, 12, "99");
outtextxy(1110, 12, "100");


outtextxy(40, 67, "90");
outtextxy(160, 67, "89");
outtextxy(280, 67, "88");
outtextxy(400, 67, "87");
outtextxy(520, 67, "86");
outtextxy(640, 67, "85");
outtextxy(760, 67, "84");
outtextxy(880, 67, "83");
outtextxy(1000, 67, "82");
outtextxy(1120, 67, "81");


outtextxy(40, 122, "71");
outtextxy(160, 122, "72");
outtextxy(280, 122, "73");
outtextxy(400, 122, "74");
outtextxy(520, 122, "75");
outtextxy(640, 122, "76");
outtextxy(760, 122, "77");
outtextxy(880, 122, "78");
outtextxy(1000, 122, "79");
outtextxy(1120, 122, "80");


outtextxy(40, 177, "70");
outtextxy(160, 177, "69");
outtextxy(280, 177, "68");
outtextxy(400, 177, "67");
outtextxy(520, 177, "66");
outtextxy(640, 177, "65");
outtextxy(760, 177, "64");
outtextxy(880, 177, "63");
outtextxy(1000, 177, "62");
outtextxy(1120, 177, "61");


outtextxy(40, 232, "51");
outtextxy(160, 232, "52");
outtextxy(280, 232, "53");
outtextxy(400, 232, "54");
outtextxy(520, 232, "55");
outtextxy(640, 232, "56");
outtextxy(760, 232, "57");
outtextxy(880, 232, "58");
outtextxy(1000, 232, "59");
outtextxy(1120, 232, "60");


outtextxy(40, 287, "50");
outtextxy(160, 287, "49");
outtextxy(280, 287, "48");
outtextxy(400, 287, "47");
outtextxy(520, 287, "46");
outtextxy(640, 287, "45");
outtextxy(760, 287, "44");
outtextxy(880, 287, "43");
outtextxy(1000, 287, "42");
outtextxy(1120, 287, "41");


outtextxy(40, 342, "31");
outtextxy(160, 342, "32");
outtextxy(280, 342, "33");
outtextxy(400, 342, "34");
outtextxy(520, 342, "35");
outtextxy(640, 342, "36");
outtextxy(760, 342, "37");
outtextxy(880, 342, "38");
outtextxy(1000, 342, "39");
outtextxy(1120, 342, "40");


outtextxy(40, 397, "30");
outtextxy(160, 397, "29");
outtextxy(280, 397, "28");
outtextxy(400, 397, "27");
outtextxy(520, 397, "26");
outtextxy(640, 397, "25");
outtextxy(760, 397, "24");
outtextxy(880, 397, "23");
outtextxy(1000, 397, "22");
outtextxy(1120, 397, "21");


outtextxy(40, 452, "11");
outtextxy(160, 452, "12");
outtextxy(280, 452, "13");
outtextxy(400, 452, "14");
outtextxy(520, 452, "15");
outtextxy(640, 452, "16");
outtextxy(760, 452, "17");
outtextxy(880, 452, "18");
outtextxy(1000, 452, "19");
outtextxy(1120, 452, "20");


outtextxy(40, 507, "10");
outtextxy(170, 507, "9");
outtextxy(290, 507, "8");
outtextxy(410, 507, "7");
outtextxy(530, 507, "6");
outtextxy(650, 507, "5");
outtextxy(770, 507, "4");
outtextxy(890, 507, "3");
outtextxy(1010, 507, "2");
outtextxy(1130, 507, "1");

setcolor(BLACK);
///Lineas horizontales
line(0,55,1200,55);
line(0,110,1200,110);
line(0,165,1200,165);
line(0,220,1200,220);
line(0,275,1200,275);
line(0,330,1200,330);
line(0,385,1200,385);
line(0,440,1200,440);
line(0,495,1200,495);
line(0,550,1200,550);

 ///Lineas verticales
line(120, 0, 120,550);
line(240, 0, 240,550);
line(360, 0, 360,550);
line(480, 0, 480,550);
line(600, 0, 600,550);
line(720, 0, 720,550);
line(840, 0, 840,550);
line(960, 0, 960,550);
line(1080, 0, 1080,550);
line(1200, 0, 1200,550);

setcolor(LIGHTGRAY);
settextstyle(0,0,3);
    outtextxy(10, 560, "************** SERPIENTES Y ESCALERAS **************");
settextstyle(1,0,2);
///line(0, 0, 1280, 655);

}

int numerorandom,numerorandom2;
int bandera=0;

void imprimirEscaleras(int num1, int num2)
{
    int xarreglo[100]={1130, 1010, 890, 770, 650, 530, 410, 290, 170, 40, 40, 160, 280, 400, 520, 640, 760, 880, 1000, 1120, 1120, 1000, 880, 760, 640, 520, 400, 280, 160, 40, 40, 160, 280, 400, 520, 640, 760, 880, 1000, 1120, 1120, 1000, 880, 760, 640, 520, 400, 280, 160, 40, 40, 160, 280, 400, 520, 640, 760, 880, 1000, 1120, 1120, 1000, 880, 760, 640, 520, 400, 280, 160, 40, 40, 160, 280, 400, 520, 640, 760, 880, 1000, 1120, 1120, 1000, 880, 760, 640, 520, 400, 280, 160, 40, 40, 160, 280, 400, 520, 640, 760, 880, 1000, 1110};
    int yarreglo[100]={507, 507, 507, 507, 507, 507, 507, 507, 507, 507, 452, 452, 452, 452, 452, 452, 452, 452, 452, 452, 397, 397, 397, 397, 397, 397, 397, 397, 397, 397, 342, 342, 342, 342, 342, 342, 342, 342, 342, 342, 287, 287, 287, 287, 287, 287, 287, 287, 287, 287, 232, 232, 232, 232, 232, 232, 232, 232, 232, 232, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12};
    setcolor(WHITE);
    setlinestyle(SOLID_LINE,0, 4);
    line(xarreglo[num1-1],yarreglo[num1-1],xarreglo[num2-1],yarreglo[num2-1]);
}

void imprimirSerpiente(int num3, int num4)
{
    int xarreglo[100]={1130, 1010, 890, 770, 650, 530, 410, 290, 170, 40, 40, 160, 280, 400, 520, 640, 760, 880, 1000, 1120, 1120, 1000, 880, 760, 640, 520, 400, 280, 160, 40, 40, 160, 280, 400, 520, 640, 760, 880, 1000, 1120, 1120, 1000, 880, 760, 640, 520, 400, 280, 160, 40, 40, 160, 280, 400, 520, 640, 760, 880, 1000, 1120, 1120, 1000, 880, 760, 640, 520, 400, 280, 160, 40, 40, 160, 280, 400, 520, 640, 760, 880, 1000, 1120, 1120, 1000, 880, 760, 640, 520, 400, 280, 160, 40, 40, 160, 280, 400, 520, 640, 760, 880, 1000, 1110};
    int yarreglo[100]={507, 507, 507, 507, 507, 507, 507, 507, 507, 507, 452, 452, 452, 452, 452, 452, 452, 452, 452, 452, 397, 397, 397, 397, 397, 397, 397, 397, 397, 397, 342, 342, 342, 342, 342, 342, 342, 342, 342, 342, 287, 287, 287, 287, 287, 287, 287, 287, 287, 287, 232, 232, 232, 232, 232, 232, 232, 232, 232, 232, 177, 177, 177, 177, 177, 177, 177, 177, 177, 177, 122, 122, 122, 122, 122, 122, 122, 122, 122, 122, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12};
    setcolor(BLUE);
    setlinestyle(SOLID_LINE,0, 4);
    line(xarreglo[num3-1],yarreglo[num3-1],xarreglo[num4-1],yarreglo[num4-1]);
}

void creajugador1(int x, int y)
{
    setcolor(BLACK);
    circle(x,y,10);
setfillstyle(SOLID_FILL,BLACK);
floodfill(x,y,BLACK);
}

void borrajugador1(int x, int y)
{
    setcolor(LIGHTBLUE);
    circle(x,y,10);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(x,y,LIGHTBLUE);
}

void creajugador2(int x1, int y1)
{
    setcolor(BLACK);
    circle(x1,y1,10);
setfillstyle(SOLID_FILL,BLACK);
floodfill(x1,y1,BLACK);
}

void borrajugador2(int x1, int y1)
{
    setcolor(RED);
    circle(x1,y1,10);
    setfillstyle(SOLID_FILL,RED);
    floodfill(x1,y1,RED);
}

void creajugador3(int x2, int y2)
{
    setcolor(BLACK);
    circle(x2,y2,10);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(x2,y2,BLACK);
}

void borrajugador3(int x2, int y2)
{
    setcolor(GREEN);
    circle(x2,y2,10);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(x2,y2,GREEN);
}

void creajugador4(int x3, int y3)
{
    setcolor(BLACK);
    circle(x3,y3,10);
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(x3,y3,BLACK);
}

void borrajugador4(int x3, int y3)
{
    setcolor(YELLOW);
    circle(x3,y3,10);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(x3,y3,YELLOW);
}

struct casilla
  {
      int pos;
      casilla*siguiente;
      casilla*se;
  };

struct jugador
  {
      casilla *posicion;
      jugador *sig;

  };


jugador *jugadores = NULL;
casilla *casillas = NULL;
casilla *seinicio = NULL;

jugador *creajugador(casilla *casillas)
  {
      jugador *nuevo_jugador = new jugador();
      nuevo_jugador->posicion = casillas;
      nuevo_jugador->sig = NULL;
      return nuevo_jugador;
  }

casilla *creacasilla(int n)
  {
      casilla *nueva_casilla = new casilla();
      nueva_casilla -> pos = n;
      nueva_casilla -> siguiente = NULL;
      return nueva_casilla;
  }

void *insertaJugador(jugador *&jugadores, casilla *casillas,int n)
{
    if (n!=0)
    {
        if (jugadores == NULL)
        {
            jugador *nuevo_jugador = creajugador(casillas);
            jugadores = nuevo_jugador;
            insertaJugador(jugadores->sig, casillas,n-1);
        }
    }
}

void *insertaCasilla(casilla *&casillas, int n)
{
    if (n<=100)
    {
        if (casillas == NULL)
            {
                casilla *nueva_casilla = creacasilla(n);
                casillas = nueva_casilla;
                insertaCasilla(casillas->siguiente,n+1);
            }
    }
}

void mostrarcasillas(casilla *casillas)
{
    if(casillas == NULL)
    {
        return;
    }
    else
    {
        cout << casillas->pos << endl;
        mostrarcasillas(casillas->siguiente);
    }
}

void imprimetodas(casilla *casillas)
{
    if (casillas)
    {
        if(casillas->se)
        {
            if(casillas->pos < casillas->se->pos)
            {
                imprimirEscaleras(casillas->pos, casillas->se->pos);
                imprimetodas(casillas->siguiente);
            }
            else
            {
                imprimirSerpiente(casillas->pos,casillas->se->pos);
                imprimetodas(casillas->siguiente);
            }
        }
        else
        {
            imprimetodas(casillas->siguiente);
        }
    }
}

void avanzar(jugador *jugadores, casilla *casillas, int dado, int j)
{
    if (casillas->siguiente != NULL)
    {
        if (dado == 0)
        {
            Sleep(300);
            if (j == 1)
            {
                borrajugador1(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]-13.75);
                imprimetodas(casillas);
            }
            if (j == 2)
            {
                borrajugador2(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]-13.75);
                imprimetodas(casillas);
            }
            if (j == 3)
            {
                borrajugador3(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]+13.75);
                imprimetodas(casillas);
            }
            if (j == 4)
            {
                borrajugador4(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]+13.75);
                imprimetodas(casillas);
            }
            jugadores -> posicion = casillas;
            imprimetodas(casillas);
            if (j == 1)
            {
                creajugador1(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]-13.75);
            }

            if (j == 2)
            {
                creajugador2(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]-13.75);
            }

            if (j == 3)
            {
                creajugador3(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]+13.75);
            }

            if (j == 4)
            {
                creajugador4(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]+13.75);
            }

            if (casillas->se)
            {
                Sleep(300);
                if (j == 1)
                {
                    borrajugador1(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]-13.75);
                    imprimetodas(casillas);
                }
                if (j == 2)
                {
                    borrajugador2(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]-13.75);
                    imprimetodas(casillas);
                }
                if (j == 3)
                {
                    borrajugador3(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]+13.75);
                    imprimetodas(casillas);
                }
                if (j == 4)
                {
                    borrajugador4(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]+13.75);
                    imprimetodas(casillas);
                }
                jugadores->posicion=casillas->se;
                imprimetodas(casillas);
                if (j == 1)
                {
                    creajugador1(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]-13.75);
                }
                if (j == 2)
                {
                    creajugador2(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]-13.75);
                }
                if (j == 3)
                {
                    creajugador3(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]+13.75);
                }
                if (j == 4)
                {
                    creajugador4(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]+13.75);
                }
            }
        }
        else
        {
            Sleep(300);
            imprimetodas(casillas);
            if (j == 1)
            {
                borrajugador1(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]-13.75);
                imprimetodas(casillas);
            }
            if (j == 2)
            {
                borrajugador2(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]-13.75);
                imprimetodas(casillas);
            }
            if (j == 3)
            {
                borrajugador3(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]+13.75);
                imprimetodas(casillas);
            }
            if (j == 4)
            {
                borrajugador4(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]+13.75);
                imprimetodas(casillas);
            }
            jugadores -> posicion = casillas;
            imprimetodas(casillas);
            if (j == 1)
            {
                creajugador1(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]-13.75);
            }
            if (j == 2)
            {
                creajugador2(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]-13.75);
            }
            if (j == 3)
            {
                creajugador3(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]+13.75);
            }
            if (j == 4)
            {
                creajugador4(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]+13.75);
            }
            avanzar(jugadores, casillas -> siguiente, dado-1, j);
        }
    }
    else
    {
        imprimetodas(casillas);
        if (j == 1)
            {
                borrajugador1(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]-13.75);
                imprimetodas(casillas);
            }
            if (j == 2)
            {
                borrajugador2(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]-13.75);
                imprimetodas(casillas);
            }
            if (j == 3)
            {
                borrajugador3(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]+13.75);
                imprimetodas(casillas);
            }
            if (j == 4)
            {
                borrajugador4(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]+13.75);
                imprimetodas(casillas);
            }
            jugadores -> posicion = casillas;
            imprimetodas(casillas);
            if (j == 1)
            {
                creajugador1(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]-13.75);
            }
            if (j == 2)
            {
                creajugador2(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]-13.75);
            }
            if (j == 3)
            {
                creajugador3(xarreglo[jugadores -> posicion -> pos]-30, yarreglo[jugadores -> posicion -> pos]+13.75);
            }
            if (j == 4)
            {
                creajugador4(xarreglo[jugadores -> posicion -> pos]+30, yarreglo[jugadores -> posicion -> pos]+13.75);
            }
    }
}

jugador *cambiarJugador(jugador *jugadores, int contador)
{
    if (contador == 1)
    {
        return jugadores;
    }
    else
    {
        return cambiarJugador(jugadores -> sig, contador-1);
    }
}

int ganador (jugador *jugadores)
{
    if (jugadores)
    {
        if (jugadores -> posicion -> pos == 100)
        {
            return 1;
        }
        else
        {
            return ganador (jugadores -> sig);
        }
    }
    else
    {
        return 0;
    }
}

void muestraJugador(jugador *jugadores, int contador, int numerodejugador)
{
    if (contador==1)
    {
        cout<< "JUGADOR NUMERO: "<<numerodejugador<< "\n"<< "CASILLA: "<<jugadores->posicion->pos<<"\n";
    }
    else
    {
        muestraJugador(jugadores->sig,contador-1,numerodejugador+1);
    }
}

casilla *buscarElemento(casilla *&casillas, int dato)
{
    if (casillas->pos==dato)
    {
        return casillas;
    }
    else
    {
        return buscarElemento(casillas->siguiente,dato);
    }
}

void insertaEscaleras(casilla *casillas, int inicio, int fin)
{
    seinicio  = buscarElemento(casillas, inicio);
    seinicio->se = buscarElemento(casillas, fin);
}

void buscarrepetida(casilla *&seinicio, int dato)
{
    if (seinicio->se && dato==seinicio->pos)
    {
       bandera=1;
       return;

    }
    else
        {
            if (seinicio->pos<dato)
            {
                buscarrepetida(seinicio->siguiente,dato);
            }
            else
            {
                return;
            }
        }
}

int main()
{

    srand(time(NULL));
    int dado;
    int x=1110, y=536.25;
    int x1=1110, y1=508.75;
    int x2=1170, y2=536.25;
    int x3=1170, y3=508.75;
    char inicio;
    cout << "El ganador sera el jugador que llegue a 100, provocando que se cierre el programa." << endl;
    cout << "Las serpientes seran de color azul y las escaleras blancas." << endl;
    cout << "Ingrese el numero de jugadores (de 2 a 4): " << endl;
    int playes;
    cin >> playes;

    inicia_grafico();
    creaGrafico();
    Sleep(200);
    inicio=getch();
    getch();
    cout<<"\n";
    insertaCasilla(casillas, 1);
    for(int i=0;i<8;i++)
    {
            numerorandom = 10 + rand()%90;
            buscarrepetida(casillas,numerorandom);
            if (bandera==1)
            {
                numerorandom = 10+rand()%90;
                bandera=0;
            }
            numerorandom2 = 1 + rand()%(numerorandom-9);
            cout << "SERPIENTE: " << numerorandom << " De " << numerorandom2 <<endl;
            insertaEscaleras(casillas, numerorandom, numerorandom2);
    }
    cout<<"\n";
    for(int i=0;i<8;i++)
    {
            numerorandom = 10 + rand()%40;
            buscarrepetida(casillas,numerorandom);
            if (bandera==1)
            {
                numerorandom = 10+rand()%40;
                bandera=0;
            }
            numerorandom2 = 20 + rand()%80;
            cout << "ESCALERA: " << numerorandom << " De  " << numerorandom2 <<endl;
            insertaEscaleras(casillas, numerorandom, numerorandom2);
    }
    imprimetodas(casillas);
    cout<<"\n";
    insertaJugador(jugadores, casillas, playes);
    int n = 1;
    jugador *nuevo=NULL;
    char p;
    do
    {
       nuevo = cambiarJugador(jugadores, n);
       dado =1 + rand()%6;
       avanzar(nuevo, nuevo -> posicion, dado, n);
       p=getch();
       muestraJugador(jugadores,n,1);
       n++;
       if (n > playes)
       {
           n = 1;
       }
    }
    while (ganador(jugadores) != 1);
    closegraph();
    return 0;
}
