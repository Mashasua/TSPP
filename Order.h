#ifndef ORDER_H
#define ORDER_H
#pragma once

#include <iostream>
#include <list>
#include <algorithm> 
#include "Product.h"

class Order//order class
{
    std::string SNP,// Surname, name and patronim 
        Adress,// Client adress 
        Order_status;
    std::list<Product> Order_List;//list of all products in order
    bool Order_Is_Paid;// was order paid or not
    double Cost;//total oreder cost

public:

    Order(std::string SNP, std::string Adress, std::string Order_status, std::list<Product> Order_List, bool Order_Is_Paid);

    std::string getSNP();

    void setSNP(std::string SNP);

    std::string getAdress();

    void setAdress(std::string Adress);

    std::string getOrder_status();

    void setOrder_status(std::string Order_status);

    std::list<Product> getOrder_List();

    void add_to_Order_List(Product Product, int how_many);

    void remove_from_Order_List(Product P);

    bool getOrder_Is_Paid();

    void setOrder_Is_Paid(bool Order_Is_Paid);

    double getCost();

    void countCost();

    void Sent_Order();
};

#endif