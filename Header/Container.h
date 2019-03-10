//
// Created by merlinos on 08.03.19.
//

#ifndef LESSONBYBOX_CONTAINER_H
#define LESSONBYBOX_CONTAINER_H


#include <vector>
#include "box.h"
namespace space_Container {
    class Container {
    private:
        std::vector<space_Box::Box> arrayBox;
        int length;
        int width;
        int height;
        double maxWeight;
    public:
        Container(int length, int width, int height, double maxWeight);

        int numberOfBoxes();

        double getTotalWeight();

        space_Box::Box getBox(int);

        space_Box::Box &operator[](const int);

        void addBox ( const space_Box::Box&);

        void removeBoxByIndex (int );

        friend std::ostream &operator<<(std::ostream &out, const Container &);

        friend std::istream &operator>>(std::istream &in, Container &);



    };
}

#endif //LESSONBYBOX_CONTAINER_H
