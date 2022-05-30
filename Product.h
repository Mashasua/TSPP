#pragma once

#include <iostream>
#include <list>
#include <algorithm> 
#include "Communication.h"

class Product//product class
{
    int id;
    std::string Product_Name,
        Company_Name,
        Description;
    double Price;
    int Quantity;
    bool In_Stock;
    std::list<Commentary> Commentaries;
    std::list<Question> Questions;

public:

    Product(int id, std::string P_N, std::string C_N, std::string D, double P, int Q, bool I_S);

    int getId();

    void setId(int id);

    std::string getProduct_Name();

    void setProduct_Name(std::string Product_Name);

    std::string getCompany_Name();

    void setCompany_Name(std::string Company_Name);

    std::string getDescription();

    void setDescription(std::string Description);

    double getPrice();

    void setPrice(double Price);

    int getQuantity();

    void setQuantity(int Quantity);

    bool isIn_Stock();

    void setIn_Stock(bool In_Stock);

    std::list<Commentary> getCommentaries();

    void addCommentaries(Commentary Commentary);

    std::list<Question> getQuestions();

    void addQuestions(Question Question);

    bool operator<(const Product& p);
};

bool operator ==(const Product& Prod, const Product& p);//overload for comparing two Products

bool operator ==(Product& Prod, const std::string& p_name);//overload for comparing products by name

bool operator ==(Product& Prod, const int id);//overload for comparing products by id

