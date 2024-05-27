#pragma once

#include <string>

class LedDiod {
private:
    int brightness; 
    std::string color; 

public:
 
    LedDiod();

    void setColor(std::string color);
    void setBrightness(int br);
    void showColor() const;
    void showBrightness() const;
    double calcDiodCurrent(double voltage) const;
};