//
// Created by Kamal Ghimire on 9/25/23.
//

#ifndef PROJECT3_BASECUSTOMER_H
#define PROJECT3_BASECUSTOMER_H
#include<iostream>
/* BaseCustomer is created to provide polymorphism while returning CUstomer null object from Search
 * The BaseCustomer has two child class Customer and CustomerNull, and in Customers the search method
 * returns either Customer or CUstomerNull based on the result, if customer with the name is found,
 * it will return Customer else
 * it will return Customer null
 * */
class BaseCustomer {
public:
    virtual std::string getName() const;
};


#endif //PROJECT3_BASECUSTOMER_H
