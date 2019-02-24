    
#include "../Header/arrayBoxProcessor.h"
#include "../Header/box.h"
double ArrayBoxProcessor::sumOfTheAllTheBoxes(Box * arrayBox, int size) {
    double sumValue = 0;
    for(int i = 0; i < size; i++ ) {
        sumValue += arrayBox[i].getLength();
    }
    return sumValue;
}

bool ArrayBoxProcessor::chekingTheAmountOfMeasurements(Box * arrayBox, int size, int topGrade) {
    int sum = 0;
    for (int i = 0; i <size ; i++) {
        sum += arrayBox[i].getWidth() + arrayBox[i].getLength() + arrayBox[i].getHeight();
    }
    return sum <= topGrade;
}

double ArrayBoxProcessor::findingTheHeaviestBox(Box * arrayBox, int size, int maxV) {
    double max = 0;
    for (int i = 0; i <size; i++) {
        if(arrayBox[i].getHeight()*arrayBox[i].getLength()*arrayBox[i].getWidth() <= maxV && max < arrayBox[i].getWeight()) {
            max = arrayBox[i].getWeight();
        }
    }
    return max;
}

bool ArrayBoxProcessor::nestingCheck(Box * arrayBox, int size ) {
    for (int i = 0; i <size -1; i++) {
        int smallElemIndex = i;
        for(int j = i + 1; j < size; j++) {
            if(Box::boxComprasion(arrayBox[j], arrayBox[smallElemIndex])) {
                return false;
            }
            if(arrayBox[j] < arrayBox[smallElemIndex]) {
                smallElemIndex = j;
            }
        }
        Box *boxCopy = new Box(arrayBox[i]);
        arrayBox[i] = arrayBox[smallElemIndex];
        arrayBox[smallElemIndex] = boxCopy;
    }

    for (int i = 0; i < size -1; i++) {
        if(arrayBox[i] == arrayBox[i+1]) {
            return false;
        }
    }
    return true;

}