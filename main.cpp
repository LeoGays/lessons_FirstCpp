#include <iostream>
#include <vector>
#include "Header/box.h"
#include "Header/arrayBoxProcessor.h"

int main() {

    std::vector<space_Box::Box> arrayBox;


    space_Box::Box box1(1,1,1,2.0,5);
    space_Box::Box box2(2,1,2,3.0,4);
    space_Box::Box box3(3,3,3,6.0,12);
    space_Box::Box box4(4,4,4,7.0,10);
    space_Box::Box box5(5,5,5,1.0,30);

    arrayBox.push_back(box1);
    arrayBox.push_back(box2);
    arrayBox.push_back(box3);
    arrayBox.push_back(box4);
    arrayBox.push_back(box5);

    std::cout <<space_ArrayBoxProccessor::ArrayBoxProcessor::nestingCheck(arrayBox) << std::endl;



    return 0;
}