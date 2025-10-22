#define SDL_MAIN_HANDLED
#include <iostream>
#include <cmath>
#include "./draw/sdlwrapper.h"

const double A = 50;
const double step = 35;
const double ptor = 40;

void drawSin(int y0)
{
    for(double x = 0; x < 400; x += step)
    {
        //sdlw::drawPixel(x,sin(x)*A+y0);
        sdlw::drawLine(x,sin(x/ptor)*A+y0,x+step,sin((x+step)/ptor)*A+y0);
    }
}

void drawTriangle(int zigsize, int startY, int length)
{
    for(int count = 1; count < length / (zigsize * 2); count = count + 2)
    {
        sdlw::drawLine(zigsize*(count-1),0+startY,zigsize*count,zigsize+startY);
        sdlw::drawLine(zigsize*count,zigsize+startY,zigsize*(count+1),0+startY);
    }
}

int main()
{
    sdlw::setColor(255,255,255);

    //drawTriangle(34,0,1000);
    // drawTriangle(45,100,1000);
    // drawTriangle(20,200,1000);

    sdlw:: drawEllipse(200, 200, 150, 100);
    sdlw:: drawEllipse(50, 200, 50, 15);
    sdlw:: drawFillCircle(120, 285, 15);
    sdlw:: drawFillCircle(160, 295, 15);
    sdlw:: drawFillCircle(270, 285, 15);
    sdlw:: drawFillCircle(230, 295, 15);
    sdlw:: drawSin(250, 300, 140, 50);
    sdlw:: drawSin(290, 346, 176, 85);

    sdlw::setColor(0,0,0);

    sdlw:: drawFillCircle(310, 170, 5);
    sdlw:: drawFillCircle(260, 170, 5);

    sdlw:: drawLine(280, 190, 285, 180);
    sdlw:: drawLine(285, 180, 290, 190);

    sdlw:: drawLine(230, 185, 240, 190);
    sdlw:: drawLine(230, 195, 240, 190);

    sdlw:: drawLine(330, 190, 340, 195);
    sdlw:: drawLine(330, 190, 340, 185);

    sdlw:: drawFillCircle(120, 120, 20);
    sdlw:: drawFillCircle(190, 105, 20);

    sdlw::updateGraphics();
    std::cin.get();

    return 0;

}