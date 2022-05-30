#include <iostream>
#include <list>
#include <algorithm>
#include "Communication.h"
#include "Product.h"

Product::Product(int id, std::string P_N, std::string C_N, std::string D, double P, int Q, bool I_S)
{
    this->id = id; this->Product_Name = P_N; this->Company_Name = C_N;
    this->Description = D; this->Price = P; this->Quantity = Q; this->In_Stock = I_S;
}

int Product::getId()
{
    return id;
}

void Product::setId(int id)
{
    this->id = id;
}

std::string Product::getProduct_Name()
{
    return Product_Name;
}

void Product::setProduct_Name(std::string Product_Name)
{
    this->Product_Name = Product_Name;
}

std::string Product::getCompany_Name()
{
    return Company_Name;
}

void Product::setCompany_Name(std::string Company_Name)
{
    this->Company_Name = Company_Name;
}

std::string Product::getDescription()
{
    return Description;
}

void Product::setDescription(std::string Description)
{
    this->Description = Description;
}

double Product::getPrice()
{
    return Price;
}

void Product::setPrice(double Price)
{
    this->Price = Price;
}

int Product::getQuantity()
{
    return Quantity;
}

void Product::setQuantity(int Quantity)
{
    this->Quantity = Quantity;
}

bool Product::isIn_Stock()
{
    return In_Stock;
}

void Product::setIn_Stock(bool In_Stock)
{
    this->In_Stock = In_Stock;
}

std::list<Commentary> Product::getCommentaries()
{
    return this->Commentaries;
}

void Product::addCommentaries(Commentary Commentary)
{
    this->Commentaries.push_back(Commentary);
}

std::list<Question> Product::getQuestions()
{
    return this->Questions;
}

void Product::addQuestions(Question Question)
{
    this->Questions.push_back(Question);
}

bool Product::operator<(const Product& p)
{
    return (Product_Name < p.Product_Name);
}

bool operator ==(const Product& Prod, const Product& p) {
    return Prod == p;
}//overload for comparing two Products

bool operator ==(Product& Prod, const std::string& p_name) {
    return (Prod).getProduct_Name() == p_name;
}//overload for comparing products by name

bool operator ==(Product& Prod, const int id) {
    return (Prod).getId() == id;
}//overload for comparing products by id