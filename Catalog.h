#ifndef CATALOG_H
#define CATALOG_H
#pragma once
#include <iostream>
#include <list>
#include <algorithm> 
#include "Product.h"

class Catalog
{
    int Quantity;//quantity of all products
    std::list <Product> All_products_list;//list of all produts

public:

    Catalog();

    Catalog(std::list<Product> List, int Quan);

    void add_Product(Product P);//add new product to catalog

    void remove_Product(Product P);//remove product from catalog

    std::list <Product> Search_Product(std::string Name);//search in whole catalog

    Product Show_Product(int id);

    std::list<Product> Show_catalog();

    void Sort();

    std::list<Product> Filter(std::string Com_Name);

    void count_Quantity();
};

#endif