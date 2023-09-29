//
// Created by Kamal Ghimire on 9/25/23.
//

#ifndef PROJECT3_CUSTOMERS_H
#define PROJECT3_CUSTOMERS_H
#include <list>
#include "Customer.h"
#include "BaseCustomer.h"

class Customers {
private:
    std::list<Customer> customerList;
    int sequence;

public:
    Customers();
    //function declaration to add customer in the customer list
    void add(const std::string& name, CustomerRequest);
    //function declaration to remove customer
    void remove(const std::string& name);
    //function declaration to search customer by name
    BaseCustomer& search(const std::string& name);
    //friend function for overloading operator
    friend std::ostream &operator<<(std::ostream &os, Customers &customerList);
    std::list<Customer> getCustomerList();
    std::string timeToString(std::time_t timeStamp);


};


#endif //PROJECT3_CUSTOMERS_H
