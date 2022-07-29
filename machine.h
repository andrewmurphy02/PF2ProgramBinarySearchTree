#ifndef MACHINE_H
#define MACHINE_H

//-----------------------------------------------------------
//  Purpose:    Header file for the Machine class.
//  Author:     Andrew Murphy
//-----------------------------------------------------------
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//-----------------------------------------------------------
// Define the Machine class interface
//-----------------------------------------------------------
class Machine
{
 public:
   // Constructors
   Machine();
  ~Machine();

   // Get methods
   string getMachineName();
   string getManufacturerName();
   int getMakeYear();
   string getMachineType();

   // Set methods
   void setMachineName(string machine_name);
   void setManufacturerName(string manufacturer_name);
   void setMakeYear(int make_year);
   void setMachineType(string machine_type);

   // Print method
   void print();

 private:
   // Object attributes
   string Machine_Name;
   string Manufacturer_Name;
   int Make_Year;
   string Machine_Type;
};
#endif