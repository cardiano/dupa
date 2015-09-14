#include "wyszukiwanie.hpp"
#include <iostream>
#include <cstring>


using namespace std;
int main()
{
  dirent plikaudio;
	plikaudio=listujPliki();
cout << "wczytano plik : "<<plikaudio.d_name << endl;



}
