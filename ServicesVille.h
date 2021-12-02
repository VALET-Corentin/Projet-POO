#pragma once
#include "MAP.h"
#include "CAD.h"

ref class servicesville
{
private:
    CAD^ oCad;
    CLville^ oMap;
public:
    servicesville(void);
    System::Data::DataSet^ selectionnerville(System::String^);
    void setoMap(CLville^);
    CLville^ getoMap(void);
    void setoCad(CAD^);
    CAD^ getoCad(void);

};