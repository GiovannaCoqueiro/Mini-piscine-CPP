#include "Form.hpp"

void Form::toSign(bool sign) {
    this->sign = sign;
}

bool Form::isSigned() {
    return sign;
}


std::string Form::getFormTitle() const {
    return title;
}