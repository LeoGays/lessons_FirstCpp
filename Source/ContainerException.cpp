//
// Created by merlinos on 10.03.19.
//

#include "../Header/ContainerException.h"

ContainerException::ContainerException(const std::string &m_error) : m_error(m_error) {}

const char* ContainerException::what() const {
    return m_error.c_str();
}