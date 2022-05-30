#include <iostream>
#include "Product.h"
#include "Order.h"
#include "Catalog.h"
#include "Communication.h"
#include "Users.h"

void User::Write_Commentary(Product Product_for_commentary, std::string comentary_text, int rating)
{
	Commentary c(comentary_text, rating);
	Product_for_commentary.addCommentaries(c);
}

Catalog User::Search(Catalog Catalog_for_search, std::string Search_by_Name)
{
	Catalog Result(Catalog_for_search.Search_Product(Search_by_Name), 0);
	Result.count_Quantity();
	return Result;
}

void User::Write_Question(Product Product_fro_Q, std::string Question_text)
{
	Question q(Question_text);
	Product_fro_Q.addQuestions(q);
}

void User::Sort_Catalog(Catalog Catalog_for_Sort)
{
	Catalog_for_Sort.Sort();
}

void User::Pay_for_Order(Order Client_Order)
{
	Client_Order.setOrder_Is_Paid(true);
	Client_Order.setOrder_status("Paid");
}

void User::Filter_Catalog(Catalog Catalog_for_Filter, std::string Company_Name)
{
	Catalog_for_Filter.Filter(Company_Name);
}

void Seller::Answer_the_Question(Product p,Question q, std::string s)
{
	auto Questions = p.getQuestions();
	auto it = find(Questions.begin(), Questions.end(), q);
	(*it).addAnswer(s);
}

void Seller::Change_Description(Product P,std::string s)
{
	P.setDescription(s);
}

void Administrator::Remove_Product(Catalog c,Product p)
{
	c.remove_Product(p);
}

void Administrator::Add_Product(Catalog c, Product p)
{
	c.add_Product(p);
}

void Administrator::change_Product_param(Product p,int choice,double param)
{
	switch (choice)
	{
	case 1:
		p.setPrice(param);
		break;
	case 2:
		p.setQuantity(param);
		break;
	}
}

bool operator ==(const Question& Q_in, const Question& Q_from) {
	return Q_in == Q_from;
}//overload for comparing two Questions