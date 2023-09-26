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
    void add(const std::string& name, CustomerRequest);
    void remove(const std::string& name);
    BaseCustomer& search(const std::string& name);
    friend std::ostream &operator<<(std::ostream &os, Customers &customerList);
    std::list<Customer> getCustomerList();
    std::string timeToString(std::time_t timeStamp);


};


#endif //PROJECT3_CUSTOMERS_H
