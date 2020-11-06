//
// Created by jason on 2020/11/03.
//

#ifndef BENETTON_F1_AERODYNAMICS_H
#define BENETTON_F1_AERODYNAMICS_H

#include "ResearchAndDevelopmentDepartment.h"

class Aerodynamics: public ResearchAndDevelopmentDepartment{
public:
    Part* makePart(std::string type);
    Part* makePartExperimental(std::string type, int wear, double efficiency, double pcontrib, double pdraw);
    void developParts();
};


#endif //BENETTON_F1_AERODYNAMICS_H
