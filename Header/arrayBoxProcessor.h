//
// Created by merlinos on 24.02.19.
//

#ifndef LESSONBYBOX_ARRAYBOXPROCESSOR_H
#define LESSONBYBOX_ARRAYBOXPROCESSOR_H

#include <vector>
#include "box.h"

namespace space_ArrayBoxProccessor {
    class ArrayBoxProcessor {

    public:
        static double sumOfTheAllTheBoxes(const std::vector<space_Box::Box> &);

        static bool chekingTheAmountOfMeasurements(const std::vector<space_Box::Box> &, int);

        static double findingTheHeaviestBox(const std::vector<space_Box::Box> &, int);

        static bool nestingCheck(std::vector<space_Box::Box> &);

    };
}

#endif //LESSONBYBOX_ARRAYBOXPROCESSOR_H
