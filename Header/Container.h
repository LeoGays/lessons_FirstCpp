//
// Created by merlinos on 08.03.19.
//

#ifndef LESSONBYBOX_CONTAINER_H
#define LESSONBYBOX_CONTAINER_H


#include <vector>
#include "box.h"

class Container {
private:
    std::vector<Box> arrayBox;
    int length;
    int width;
    int height;
    double maxWeight;
public:
    Container(int length, int width, int height, double maxWeight);
    int numberOfBoxes();
    double getTotalWeight();
    Box getBox(int);
    Box &operator[](const int);
    friend std::ostream& operator <<(std::ostream& out, const Container &);
    friend std::istream&operator >>(std::istream& in, Container &);


};


#endif //LESSONBYBOX_CONTAINER_H
