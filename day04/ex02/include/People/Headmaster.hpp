#ifndef HEADMASTER_HPP
#define HEADMASTER_HPP

#include<vector>

#include "Staff.hpp"

class Form;

class Headmaster : public Staff {
private:
    std::vector<Form *> _formToValidate;

public:
    Headmaster() {}
    ~Headmaster() {}
    void receiveForm(Form *p_form);
    void execute(Form *form);
    std::vector<Form *> getFormsToValidate();
};

#endif