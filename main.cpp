#include <iostream>
#include <vector>
#include "Header/box.h"
#include "Header/arrayBoxProcessor.h"
int main() {

    std::vector<Box> arrayBox;

    Box box1(1,1,1,2.0,5);
    Box box2(2,1,2,3.0,4);
    Box box3(3,3,3,6.0,12);
    Box box4(4,4,4,7.0,10);
    Box box5(5,5,5,1.0,30);

    arrayBox.push_back(box1);
    arrayBox.push_back(box2);
    arrayBox.push_back(box3);
    arrayBox.push_back(box4);
    arrayBox.push_back(box5);

    std::cout <<ArrayBoxProcessor::nestingCheck(arrayBox) << std::endl;



    return 0;
}