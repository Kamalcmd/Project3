//
// Created by Kamal Ghimire on 9/25/23.
//

#ifndef PROJECT3_CUSTOMERNULL_H
#define PROJECT3_CUSTOMERNULL_H
#include "BaseCustomer.h"
#include<iostream>

class CustomerNull : public BaseCustomer{
public:
    CustomerNull();
    std::string getName() const override;


};


#endif //PROJECT3_CUSTOMERNULL_H
