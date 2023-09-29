//
// Created by Kamal Ghimire on 9/25/23.
//

#include "Customer.h"
#include <ctime>

/* constructor definition of customer */
Customer::Customer(const std::string &name, CustomerRequest request, int sequenceNUmber) {
    this->name = name;
    this->request = request;
    this->sequenceNumber=sequenceNUmber;
    std::time_t currentTime;
    std::time(&currentTime);
    this->timestamp= currentTime;
}

/* definition of overloaded operator == */
bool Customer::operator==(const Customer &other) const {
    if(this->name == other.name &&
    this->request == other.request &&
    this->sequenceNumber == other.sequenceNumber &&
    this->timestamp == other.timestamp
    ){
        return true;
    }
    else
        return false;

}

std::time_t Customer::getTimestamp() const {
    return timestamp;
}

int Customer::getSequenceNumber() const  {
    return sequenceNumber;
}



CustomerRequest Customer::getRequest() const {
    return (this->request);
}

std::string Customer::getName() const  {
    return name;
}




