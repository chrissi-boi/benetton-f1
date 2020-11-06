//
// Created by jason on 2020/11/03.
//

#ifndef BENETTON_F1_RESEARCHANDDEVELOPMENTDEPARTMENT_H
#define BENETTON_F1_RESEARCHANDDEVELOPMENTDEPARTMENT_H

#include <vector>
#include <string>
#include "Part.h"
#include "PartsFactory.h"

class ResearchAndDevelopmentDepartment {
public:
    std::vector<Part*> getExperimentalParts();
    void developParts();
    Part* makePart(std::string type);
    Part* makePartExperimental(std::string type, int wear, double efficiency, double pcontrib, double pdraw);
private:
    PartsFactory* myFactory;
    std::vector<Part*> experimentalParts;
};


#endif //BENETTON_F1_RESEARCHANDDEVELOPMENTDEPARTMENT_H
