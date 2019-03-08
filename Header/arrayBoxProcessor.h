//
// Created by merlinos on 24.02.19.
//

#ifndef LESSONBYBOX_ARRAYBOXPROCESSOR_H
#define LESSONBYBOX_ARRAYBOXPROCESSOR_H

#include <vector>
#include "box.h"

class ArrayBoxProcessor {

public:
    static double sumOfTheAllTheBoxes (const std::vector<Box> &);

    static bool chekingTheAmountOfMeasurements(const std::vector<Box> &, int);

    static double findingTheHeaviestBox (const std::vector<Box> &, int);

    static bool nestingCheck ( std::vector<Box> &);

};


#endif //LESSONBYBOX_ARRAYBOXPROCESSOR_H
