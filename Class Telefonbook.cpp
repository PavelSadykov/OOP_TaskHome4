//
//  Class Telefonbook.cpp
//  ДЗ 4 ООП
//
//  Created by Павел on 25.12.2022.
//

#include "Class Telefonbook.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <iterator>

Telefonbook::Telefonbook(){};


bool & Telefonbook::operator > (  Telefonbook & other ){
    bool res = ( _name1 >other._name1) && (_name > other._name);
   return res;
      }

bool & Telefonbook::operator < (  Telefonbook & other ){
    bool res = ( _name1 < other._name1) && (_name < other._name);
   return res;
      }

bool & Telefonbook::operator >= (  Telefonbook & other ){
    bool res = ( _name1 >= other._name1) && (_name >= other._name);
   return res;
      }

bool & Telefonbook::operator <= (  Telefonbook & other ){
    bool res = ( _name1 <= other._name1) && (_name <= other._name);
   return res;
      }


const  std::string & Telefonbook::operator[](int index){
    return _name[index];
}
 

std::string  Telefonbook:: getName()  {
    
    return _name[2];
}
 int Telefonbook:: getNum() {
    return _num[5];
}


void  Telefonbook:: setName( const  std::string name[]){
  
       _name[n];
}
void  Telefonbook:: setNum (const int _num[]){
    _num[m];
}
