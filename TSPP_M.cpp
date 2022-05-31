#include <iostream>
#include <list>
#include <algorithm> 

#include "Communication.h"
#include "Product.h"
#include "Order.h"
#include "Catalog.h"
#include "Users.h"

int main()
{
   std::string s1 = "Pelemen",
        s2 = "Skolkovo", s3 = "Write your description here";
   Product p(1,s1,s2,s3,  1200, 23, true);
   Catalog cat = Catalog();
   cat.add_Product(p);
   std::string s = p.getCompany_Name();
   std::cout << s;
   Product p1(2, "Olen", "pelmen", "LOL", 21331, 23, true);
   cat.add_Product(p1);
   cat.Sort();

   auto it = (cat.Show_catalog());
   auto i =it.begin();
   i++;
   return 0;
}

