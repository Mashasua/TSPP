// TSPP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;
//считаем что товар уже создан и читаем из файла?
class Good
{
public:
	string desription;
	int amount;
	double price;
	bool in stock;
	string name;
	string firma_name;

	goods[]:Good; // массив из товаров? как записать и где (вспомнить)

private:
	void change_parametrs; // имя и тд
	void dob_description;
};


class Catalog
{
public:
	int order_components;

private:

};


class Order 
{
public:
	string adress;
	double delivery price;
	int_components of order
	Order ();
	~Order ();

private:

};

Order ::Order ()
{
}

Order ::~Order ()
{
}


class Chatting  //посмотреть какой там был класс, связанный с общением коментами
{
public:
	Chatting 
	~Chatting 

private:
	void write_comment;
	void write_otziv;
	void write_answer;

};

Chatting 
{
}

Chatting 
{
}


int main()
{
    std::cout << "Hello World!\n";
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
