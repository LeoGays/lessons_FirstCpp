//
// Created by merlinos on 24.02.19.
//

#include "../Header/box.h"
#include <iostream>
Box::Box(int length, int width, int height, double weight, double value) {
    setLength(length);
    setWidth(width);
    setHeight(height);
    setWeight(weight);
    setValue(value);
}

Box::Box(Box * box) {
    Box(box->getLength(),box->getWidth(),box->getHeight(),box->getWeight(),box->getValue());
}

bool operator==( const Box &box1, const Box &box2) {
    return box1.length == box2.length && box1.width == box2.width && box1.height == box2.height;
}

bool operator>(const Box &box1, const Box &box2) {
    return box1.length > box2.length && box1.width > box2.width && box1.height > box2.height;
}

bool operator<(const Box &box1, const Box &box2) {
    return box1.length < box2.length && box1.width < box2.width && box1.height < box2.height;
}

bool Box::boxComprasion(const Box &box1, const Box &box2) {
    return  box1 == box2 || box1 > box2 || box1 < box2;
}

std::ostream& operator<<(std::ostream &out, const Box &box) {
    out << "Length: " <<box.length << std::endl;
    out << "Width: " <<box.width << std::endl;
    out << "Height: " <<box.height << std::endl;
    out << "Weight: " <<box.weight << std::endl;
    out << "Value: " <<box.value << std::endl;
    return out;
}

std::istream& operator>>(std::istream &in,  Box &box) {
    in >> box.length;
    in >> box.width;
    in >> box.height;
    in >> box.weight;
    in >> box.value;
    return in;
}


int Box::getLength() const {
    return length;
}

void Box::setLength(int length) {
    Box::length = length;
}

int Box::getWidth() const {
    return width;
}

void Box::setWidth(int width) {
    Box::width = width;
}

int Box::getHeight() const {
    return height;
}

void Box::setHeight(int height) {
    Box::height = height;
}

double Box::getWeight() const {
    return weight;
}

void Box::setWeight(double weight) {
    Box::weight = weight;
}

double Box::getValue() const {
    return value;
}

void Box::setValue(double value) {
    Box::value = value;
}

Box::~Box() {

}


