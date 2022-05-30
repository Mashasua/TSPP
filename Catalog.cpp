#include <iostream>
#include <list>
#include <algorithm> 
#include "Product.h"
#include "Catalog.h"

Catalog::Catalog()
{
    Quantity = 0;
}

Catalog::Catalog(std::list<Product> List, int Quan)
{
    All_products_list = List; this->Quantity = Quan;
}

void Catalog::add_Product(Product P)//add new product to catalog
{
    this->All_products_list.push_back(P);
}

void Catalog::remove_Product(Product P)//remove product from catalog
{
    All_products_list.remove(P);
}

std::list <Product> Catalog::Search_Product(std::string Name)//search in whole catalog
{
    std::list<Product> Search_result;//search result list
    auto it = All_products_list.begin();//iterator for search
    while (it != All_products_list.end())//while list is not ended
    {
        it = std::find(it, All_products_list.end(), Name);//find product depended on name of product
        std::copy(it, it, std::inserter(Search_result, Search_result.end()));//copy element which we found
        it++;//iterator ++
    }
    return Search_result;
}

Product Catalog::Show_Product(int id)
{
    auto it = find(All_products_list.begin(), All_products_list.end(), id);
    return *it;
}

std::list<Product> Catalog::Show_catalog()
{
    return All_products_list;
}

void Catalog::Sort()
{
    All_products_list.sort();
}

std::list<Product> Catalog::Filter(std::string Com_Name)
{
    std::list<Product> Filtered_Catalog;
    auto it = All_products_list.begin();
    while (it != All_products_list.end())
    {
        if ((*it).getCompany_Name() == Com_Name)
        {
            Filtered_Catalog.push_back(*it);
        }
    }
    return Filtered_Catalog;
}

void Catalog::count_Quantity()
{
    auto it = All_products_list.begin();
    int count = 0;
    while (it != All_products_list.end())
    {
        count++;
        it++;
    }
    Quantity = count;
}