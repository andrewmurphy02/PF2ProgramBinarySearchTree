//-----------------------------------------------------------
// Purpose: Main program to test Machine and MachineBST classes 
//     
// Author:  Andrew Murphy
//-----------------------------------------------------------
#include "machine.h"
#include "tree.h"

BinaryTree tree;
Machine machine;
//-----------------------------------------------------------
// Reads the file.
//-----------------------------------------------------------
void read_file_BST(string filename)
{
   ifstream din;
   din.open(filename.c_str());
   if (din.fail())
   {
      cout << "Error";
   }
   string Mn, Man, Mt, My;	//Mn(Machine name) Man(Manufacturer name) Mt(Machine type) My(Machine year)
   while (!din.eof ())
    {
      Machine data; 
      getline (din, Mn, ',');
      getline (din, Man, ',');
      getline (din, My, ',');
      getline (din, Mt);
      data.setMachineName (Mn);
      data.setManufacturerName (Man);
      data.setMakeYear (stoi (My));
      data.setMachineType (Mt);
      tree.Insert(key, data);
    }
  // Close input file
  din.close ();
}

int main()
{
    read_file_BST("machines_title.txt");
}