//
//  Class Telefonbook.hpp
//  ДЗ 4 ООП
//
//  Created by Павел on 25.12.2022.
//

#ifndef Class_Telefonbook_hpp
#define Class_Telefonbook_hpp

#include <stdio.h>
#include <string>
#include <iostream>


const int n = 5;
const int m = 6;
class Telefonbook{
public:
   Telefonbook();
     std::string getName() ;
     int getNum();
    void setName( const std::string name[]);
    void setNum (const int _num[]);
    bool & operator > ( Telefonbook & other  );
    bool & operator < ( Telefonbook & other  );
    bool & operator >= (  Telefonbook & other );
    bool & operator <= (  Telefonbook & other );
    const std::string & operator[](int index);
    

private:
  
    int  _num [m]{12345,13452,15432,21435,31245,35267};
    std::string _name[n] {"John","Bill","Alex","Nic","Viktor"};
    std::string _name1[m] {"John1","Bill1","Alex1","Nic1","Viktor1","Elena"};

};


#endif /* Class_Telefonbook_hpp */
