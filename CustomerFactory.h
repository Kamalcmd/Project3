//
// Created by Kamal Ghimire on 9/25/23.
//

#ifndef PROJECT3_CUSTOMERFACTORY_H
#define PROJECT3_CUSTOMERFACTORY_H

#include "Customers.h"
class CustomerFactory {
public:
    /* function declartion for creating customer */
    Customer createCustomer(const std::string& name, CustomerRequest request, int sequenceNumber);

};


#endif //PROJECT3_CUSTOMERFACTORY_H
