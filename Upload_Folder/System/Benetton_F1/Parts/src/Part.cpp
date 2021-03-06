//
// Created by jason on 2020/11/03.
//

#include "../include/Part.h"

void Part::mutate(double powerContributionMut, double efficiencyMut, double powerDrawMut) {
    powerContributionMut+=1;
    powerContribution*=powerContributionMut;
    powerDrawMut+=1;
    powerDraw*=powerDrawMut;
    efficiencyMut+=1;
    efficiency*=efficiencyMut;
    powerDraw -= powerDraw > 1 ? 1 : 0;
    efficiency -= efficiency > 1 ? 1 : 0;
    powerContribution -= powerContribution > 1 ? 1 : 0;
}

std::string Part::getType()
{
    string data;
    data += this->type + " " + to_string(this->efficiencyMutValue) + " " + to_string(this->powerContributionMutValue) + " " + to_string(this->powerDrawMutValue);
    return data;
}
