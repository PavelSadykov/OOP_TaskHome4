//
//  main.cpp
//  ДЗ 4 ООП
//
//  Created by Павел on 25.12.2022.
//
#include "Class Telefonbook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <iterator>
 

 
    


int main(int argc, const char * argv[]) {
    Telefonbook num, name, name1;
   
    if(name > name1){
        std::cout<<"Массив  name1 имен телефонной книги больше чем массив name "<<std::endl;
    }else{
        std::cout<<"Массив  name имен телефонной книги больше чем массив name1 "<<std::endl;
    }
    
    if(name1 < name){
        std::cout<<"Массив  name1 имен телефонной книги больше чем массив name "<<std::endl;
    }else{
        std::cout<<"Массив  name имен телефонной книги больше чем массив name1 "<<std::endl;
    }
    
    if(name >= name1){
        std::cout<<"Массив  name1 имен телефонной книги не меньше чем массив name "<<std::endl;
    }else{
        std::cout<<"Массив  name имен телефонной книги не меньше чем массив name1 "<<std::endl;
    }
    
    if(name1 <= name){
        std::cout<<"Массив  name1 имен телефонной книги не меньше чем массив name "<<std::endl;
    }else{
        std::cout<<"Массив  name имен телефонной книги  не меньше чем массив name1 "<<std::endl;
    }
    
    int index;
    std::cout<<"\nВведите индекс --> ";
    std::cin>> index;
    std::cout<<"В массиве имен name заданному индексу  "<<index<<"  соответствует имя : "<<name[index]<<std::endl;
    
   
    
    std::cout<<name.getName()<<std::endl;
    std::cout<<num.getNum()<<std::endl;
   
    
    return 0;
}
