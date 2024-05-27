#include <iostream>
#include <cmath>
#include "diod.h"
#define SATURATION_CURRENT 10e-6

LedDiod::LedDiod() 
{
    brightness = 0;
    color = "red";
}

void LedDiod::setColor(std::string color) {
    if (color != "red" && color != "green" && color != "blue") {
   
        color = "red";
    }
    this->color = color;
}

void LedDiod::setBrightness(int br) {
    if (br >= 0 && br <= 100) {
        brightness = br;
    }
    else {
        brightness = 0;
    }
}


void LedDiod::showColor() const {
    std::cout << "led color is " << color << std::endl;
}


void LedDiod::showBrightness() const {
    std::cout << "led brightness is " << brightness << std::endl;
}


double LedDiod::calcDiodCurrent(double voltage) const {
    double thermal_voltage = 0.02585;
    return SATURATION_CURRENT * (std::exp(voltage / thermal_voltage) - 1);
}