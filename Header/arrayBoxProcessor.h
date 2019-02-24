//
// Created by merlinos on 24.02.19.
//

#ifndef LESSONBYBOX_ARRAYBOXPROCESSOR_H
#define LESSONBYBOX_ARRAYBOXPROCESSOR_H

#include "box.h"

class ArrayBoxProcessor {

    static double sumOfTheAllTheBoxes (Box *, int );

    static bool chekingTheAmountOfMeasurements(Box *, int, int);

    static double findingTheHeaviestBox (Box *, int, int);

    static bool nestingCheck (Box *, int);

};


#endif //LESSONBYBOX_ARRAYBOXPROCESSOR_H
