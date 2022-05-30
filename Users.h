#ifndef USERS_H
#define USERS_H
#pragma once

#include <iostream>
#include "Product.h"
#include "Order.h"
#include "Catalog.h"
#include "Communication.h"

class User
{
public:
	void Write_Commentary(Product Product_for_commentary, std::string comentary_text, int rating);
	Catalog Search(Catalog Catalog_for_search, std::string Search_by_Name);
	void Write_Question(Product Product_fro_Q,std::string Question_text);
	void Sort_Catalog(Catalog Catalog_for_Sort);
	void Pay_for_Order(Order Client_Order);
	void Filter_Catalog(Catalog Catalog_for_Filter, std::string Company_Name);
};


class Seller
{
public:
	void Answer_the_Question(Product p, Question q, std::string s);
	void Change_Description(Product P,std::string s);
};

class Administrator :public Seller
{
public:
	void Remove_Product(Catalog c,Product p);
	void Add_Product(Catalog c, Product p);
	void change_Product_param(Product p, int choice, double param);
};

bool operator ==(const Question& Q_in, const Question& Q_from);

#endif