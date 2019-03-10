//
// Created by merlinos on 08.03.19.
//

#include "../Header/Container.h"
#include "../Header/ContainerException.h"

using namespace space_Container;

Container::Container(int length, int width, int height, double maxWeight) : length(length), width(width),
                                                                            height(height), maxWeight(maxWeight) {}
int Container::numberOfBoxes() {
    return arrayBox.size();
}

double Container::getTotalWeight() {
    double sumWeight = 0;
    for (int i = 0; i < arrayBox.size() ; i++) {
        sumWeight += arrayBox[i].getWeight();
    }
    return sumWeight;
}

space_Box::Box Container::getBox(int i) {
    return arrayBox[i];
}

std::ostream& operator<<(std::ostream &out, const Container & container) {
    out << container.height;
    out << container.width;
    out << container.length;
    out << container.maxWeight;
    return out;
}

std::istream& operator>>(std::istream &in, Container & container) {
    in >> container.height;
    in >> container.width;
    in >> container.length;
    in >> container.maxWeight;
    return in;
}

space_Box::Box& Container::operator[](const int index) {
    return arrayBox[index];
}

void Container::addBox(const space_Box::Box & box) {
    if (Container::getTotalWeight() + box.getWeight() > Container::maxWeight) {
        throw ContainerException("Weight is greater than maximum!");
    }
}

void Container::removeBoxByIndex(int index) {
    arrayBox.erase(arrayBox.begin() + index);
}




