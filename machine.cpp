#include "machine.h"
//-----------------------------------------------------------
// Constructor function
//-----------------------------------------------------------
Machine::Machine()
{
  Machine_Name = "";
  Manufacturer_Name = "";
  Make_Year = 0;
  Machine_Type = "";
}

//-----------------------------------------------------------
// Destructor function
//-----------------------------------------------------------
Machine::~Machine()
{
}

//-----------------------------------------------------------
// Set machine name
//-----------------------------------------------------------
void Machine::setMachineName(string machine_name)
{
    Machine_Name = machine_name;
}

//-----------------------------------------------------------
// Set machine name
//-----------------------------------------------------------
void Machine::setManufacturerName(string manufacturer_name)
{
    Manufacturer_Name = manufacturer_name;
}

//-----------------------------------------------------------
// Set make year
//-----------------------------------------------------------
void Machine::setMakeYear(int make_year)
{
    Make_Year = make_year;
}

//-----------------------------------------------------------
// Set machine type
//-----------------------------------------------------------
void Machine::setMachineType(string machine_type)
{
    Machine_Type = machine_type;
}

//-----------------------------------------------------------
// Get machine name
//-----------------------------------------------------------
string Machine::getMachineName()
{
    return Machine_Name;
}

//-----------------------------------------------------------
// Get manufacturer name
//-----------------------------------------------------------
string Machine::getManufacturerName()
{
    return Manufacturer_Name;
}

//-----------------------------------------------------------
// Get make year
//-----------------------------------------------------------
int Machine::getMakeYear()
{
    return Make_Year;
}

//-----------------------------------------------------------
// Get machine type
//-----------------------------------------------------------
string Machine::getMachineType()
{
    return Machine_Type;
}

//-----------------------------------------------------------
// Print method
//-----------------------------------------------------------
void Machine::print()
{
    cout << Machine_Name;
    cout << Manufacturer_Name;
    cout << Make_Year;
    cout << Machine_Type;
}