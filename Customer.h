//
// Created by Kamal Ghimire on 9/25/23.
//

#ifndef PROJECT3_CUSTOMER_H
#define PROJECT3_CUSTOMER_H

#include <iostream>
#include "BaseCustomer.h"
#include<ctime>

using namespace std;

enum CustomerRequest{Repair, Training, Purchase, Other};
class Customer :public BaseCustomer{
private:
     int sequenceNumber;
  std::time_t timestamp;
    CustomerRequest request;
    std::string name;


public:
    Customer(const std:: string& name, CustomerRequest request, int sequenceNumber);
    bool operator==(const Customer& other) const;
    std::time_t getTimestamp() const;

     int getSequenceNumber  () const ;



    CustomerRequest getRequest() const;
    std::string getName() const override;







};


#endif //PROJECT3_CUSTOMER_H
