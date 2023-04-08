#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void drawWatch()

{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   // draw the outer circle of the watch
   setcolor(WHITE);
   circle(250, 250, 100);

   // fill the circle with color
   setfillstyle(SOLID_FILL, RED);
   floodfill(250, 250, WHITE);

   // draw the inner circle of the watch
   setcolor(WHITE);
   circle(250, 250, 80);

   // fill the inner circle with color
   setfillstyle(SOLID_FILL, YELLOW);
   floodfill(250, 250, WHITE);

   // draw the hour markings on the watch
   setcolor(WHITE);
   for (int i = 0; i < 12; i++) {
      line(250 + 80 * sin(i * 30 * 3.14 / 180), 250 - 80 * cos(i * 30 * 3.14 / 180), 250 + 90 * sin(i * 30 * 3.14 / 180), 250 - 90 * cos(i * 30 * 3.14 / 180));
   }

   // draw the minute hand of the watch
   setcolor(BLUE);
   setlinestyle(SOLID_LINE, 3, 2);
   line(250, 250, 250 + 60 * sin(45 * 3.14 / 180), 250 - 60 * cos(45 * 3.14 / 180));

   // draw the hour hand of the watch
   setcolor(GREEN);
   setlinestyle(SOLID_LINE, 5, 2);
   line(250, 250, 250 + 50 * sin(150 * 3.14 / 180), 250 - 50 * cos(150 * 3.14 / 180));

   getch();
   closegraph();

}

void drawCar() {
int gd = DETECT, gm;

initgraph(&gd, &gm,NULL);


line(0,300,640,300);

setcolor(4);


circle(100,285,15);
circle(200,285,15);
circle(100,285,5);
circle(200,285,5);

line(65,285,85,285);
line(115,285,185,285);
line(215,285,235,285);
line(65,285,65,260);
line(235,285,235,260);

line(65,260,100,255);
line(235,260,200,255);

line(100,255,115,235);
line(200,255,185,235);

line(115,235,185,235);


line(106,255,118,238);
line(118,238,118,255);
line(106,255,118,255);

line(194,255,182,238);
line(182,238,182,255);
line(194,255,182,255);

line(121,238,121,255);
line(121,238,148,238);
line(121,255,148,255);
line(148,255,148,238);


line(179,238,179,255);
line(179,238,152,238);
line(179,255,152,255);
line(152,255,152,238);
setcolor(4);
//floodfill(150,200,4);

getch();
closegraph();
}




void drawHouse() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // draw the house
    rectangle(100, 100, 300, 300); // house body
    rectangle(180, 200, 220, 300); // door
    line(100, 100, 200, 20); // roof
    line(200, 20, 300, 100); // roof
    rectangle(130, 130, 170, 170); // window 1
    rectangle(230, 130, 270, 170); // window 2

    // fill the house with color
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(101, 101, WHITE);

    // fill the door with color
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(181, 201, WHITE);

    // fill the roof with color
    setfillstyle(SOLID_FILL, RED);
    floodfill(201, 21, WHITE);

    // fill the windows with color
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(131, 131, WHITE);
    floodfill(231, 131, WHITE);

    getch();
    closegraph();

}


void drawTrafficlight() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   // draw outer rectangle for traffic light
   rectangle(100, 100, 200, 400);

   // draw red light
   setfillstyle(SOLID_FILL, RED);
   fillellipse(150, 150, 30, 30);

   // draw yellow light
   setfillstyle(SOLID_FILL, YELLOW);
   fillellipse(150, 225, 30, 30);

   // draw green light
   setfillstyle(SOLID_FILL, GREEN);
   fillellipse(150, 300, 30, 30);

   getch();
   closegraph();

}




















int main() {

    int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   // Set font and color
   settextstyle(BOLD_FONT, HORIZ_DIR, 3);
   setcolor(YELLOW);

   // Display student name
   char name[] = "Sipra Rani";
   outtextxy(100, 100, "Name: ");
   outtextxy(200, 100, name);

   // Display student ID
   char id[] = "CSE2001019087";
   outtextxy(100, 150, "ID: ");
   outtextxy(200, 150, id);

    initgraph(&gd, &gm, "");




    int choice;
    cout << "Click The Number Which Design You Want to See!  (1-4)\n 1 = Watch:\n 2 = Car:\n 3 = House:\n 4 = Trafficlight  \n   ";
    cin >> choice;
    switch (choice) {
        case 1:
            drawWatch();
            break;
        case 2:
            drawCar();
            break;
        case 3:
            drawHouse();
            break;
        case 4:
            drawTrafficlight();
            break;



        default:
            cout << "Invalid choice!";
            break;
    }
    return 0;

