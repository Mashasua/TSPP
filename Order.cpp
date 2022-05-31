#include <iostream>
#include <list>
#include <algorithm> 
#include "Product.h"
#include "Order.h"


Order::Order(std::string SNP, std::string Adress, std::string Order_status, std::list<Product> Order_List, bool Order_Is_Paid)
{
    this->SNP = SNP; this->Adress = Adress; this->Order_status = Order_status;
    this->Order_List = Order_List; this->Order_Is_Paid = Order_Is_Paid; countCost();
}

std::string Order::getSNP()
{
    return this->SNP;
}

void Order::setSNP(std::string SNP)
{
    this->SNP = SNP;
}

std::string Order::getAdress()
{
    return this->Adress;
}

void Order::setAdress(std::string Adress)
{
    this->Adress = Adress;
}

std::string Order::getOrder_status()
{
    return this->Order_status;
}

void Order::setOrder_status(std::string Order_status)
{
    this->Order_status = Order_status;
}

std::list<Product> Order::getOrder_List()
{
    return this->Order_List;
}

void Order::add_to_Order_List(Product Product, int how_many)
{
    Product.setQuantity(how_many);
    Order_List.push_back(Product);
}

void Order::remove_from_Order_List(Product P)
{
    Order_List.remove(P);
}

bool Order::getOrder_Is_Paid()
{
    return this->Order_Is_Paid;
}

void Order::setOrder_Is_Paid(bool Order_Is_Paid)
{
    this->Order_Is_Paid = Order_Is_Paid;
}

double Order::getCost()
{
    return this->Cost;
}

void Order::countCost()
{
    double Count = 0;
    auto it = Order_List.begin();
    while (it != Order_List.end())
    {
        Count += (*it).getPrice();
        it++;
    }
    Cost = Count;
}

void Order::Sent_Order()
{
    Order_status = "Order is sent";
}