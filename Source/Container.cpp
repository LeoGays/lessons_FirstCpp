//
// Created by merlinos on 08.03.19.
//

#include "../Header/Container.h"

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

Box Container::getBox(int i) {
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

Box& Container::operator[](const int index) {
    return arrayBox[index];
}




