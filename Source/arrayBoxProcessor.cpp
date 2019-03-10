    
#include "../Header/arrayBoxProcessor.h"
#include "../Header/box.h"

using namespace space_ArrayBoxProccessor;

double ArrayBoxProcessor::sumOfTheAllTheBoxes(const std::vector<space_Box::Box> & arrayBox) {
    double sumValue = 0;
    for(int i = 0; i < arrayBox.size(); i++ ) {
        sumValue += arrayBox[i].getValue();
    }
    return sumValue;
}

bool ArrayBoxProcessor::chekingTheAmountOfMeasurements(const std::vector<space_Box::Box> & arrayBox, int topGrade) {
    int sum = 0;
    for (int i = 0; i <arrayBox.size() ; i++) {
        sum += arrayBox[i].getWidth() + arrayBox[i].getHeight() + arrayBox[i].getLength();
    }
    return sum <= topGrade;
}

double ArrayBoxProcessor::findingTheHeaviestBox(const std::vector<space_Box::Box> & arrayBox, int maxV) {
    double max = 0;
    for (int i = 0; i <arrayBox.size(); i++) {
        if(arrayBox[i].getHeight()*arrayBox[i].getLength()*arrayBox[i].getWidth() <= maxV && max < arrayBox[i].getWeight()) {
            max = arrayBox[i].getWeight();
        }
    }
    return max;
}

bool ArrayBoxProcessor::nestingCheck(std::vector<space_Box::Box> & arrayBox ) {
    int size = arrayBox.size();
    std::vector<space_Box::Box> arrayCopy = arrayBox;
    for (int i = 0; i <size -1; i++) {
        int smallElemIndex = i;
        for(int j = i + 1; j < size; j++) {
            if(!(space_Box::Box::boxComprasion(arrayBox[j], arrayBox[smallElemIndex]))) {
                return false;
            }
            if(arrayBox[j] < arrayBox[smallElemIndex]) {
                smallElemIndex = j;
            }
        }
        space_Box::Box object = arrayBox[i];
        arrayBox[i] = arrayBox[smallElemIndex];
        arrayBox[smallElemIndex] = object;

    }

    for (int i = 0; i < size -1; i++) {
        if(arrayBox[i] == arrayBox[i+1]) {
            return false;
        }
    }
    return true;

}