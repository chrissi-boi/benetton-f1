//
// Created by jason on 2020/11/03.
//

#ifndef BENETTON_F1_ELECTRONICSPART_H
#define BENETTON_F1_ELECTRONICSPART_H

#include "Part.h"

class ElectronicsPart: public Part {
public:
    ElectronicsPart();
    ElectronicsPart(ElectronicsPart* clone);
    virtual double getPerformance() = 0;
};


#endif //BENETTON_F1_ELECTRONICSPART_H
