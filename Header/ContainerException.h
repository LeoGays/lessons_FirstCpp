//
// Created by merlinos on 10.03.19.
//

#ifndef LESSONBYBOX_CONTAINEREXCEPTION_H
#define LESSONBYBOX_CONTAINEREXCEPTION_H

#include <string>
#include <bits/exception.h>

class ContainerException: public std::exception{
private:
    std::string m_error;
public:
    ContainerException(const std::string &m_error);

    const char* what() const noexcept;

};


#endif //LESSONBYBOX_CONTAINEREXCEPTION_H
