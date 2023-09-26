//
// Created by Kamal Ghimire on 9/25/23.
//

#include "CustomerFactory.h"

Customer CustomerFactory::createCustomer(const string &name, CustomerRequest request,int sequenceNumber) {
    return Customer(name, request,sequenceNumber);
}
