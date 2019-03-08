//
// Created by merlinos on 24.02.19.
//

#ifndef LESSONBYBOX_BOX_H
#define LESSONBYBOX_BOX_H

#include <iostream>
class Box {
private:
    int length;
    int width;
    int height;
    double weight;
    double value;
public:

    Box(int,int,int, double, double);

    Box(Box*);

    static bool boxComprasion( const Box &, const Box &);

    friend bool operator ==(const Box &, const Box &);

    friend bool operator >(const Box &, const Box &);

    friend bool operator <(const Box &, const Box &);

    friend std::ostream& operator<<(std::ostream& out, const Box &);

    friend std::istream&operator>>(std::istream& in,  Box &);

    int getLength() const;

    void setLength(int length);

    int getWidth() const;

    void setWidth(int width);

    int getHeight() const;

    void setHeight(int height);

    double getWeight() const;

    void setWeight(double weight);

    double getValue() const;

    void setValue(double value);

    ~Box();
};

#endif //LESSONBYBOX_BOX_H
