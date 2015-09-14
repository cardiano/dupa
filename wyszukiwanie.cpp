#include "wyszukiwanie.hpp"
#include <cstring>
#include <iostream>





dirent listujPliki()
{

	using namespace std;
	string dir; 
  	DIR * sciezka;
  	dirent * plik;


  cout << "podaj ścieżkę do biblioteki: " << flush;
  getline( cin, dir );  

  
  sciezka = opendir( dir.c_str() );

 	while ((plik = readdir( sciezka )))
	{
		
		if(strstr(plik->d_name, ".mp3")!=NULL)	
		break;
		
  
}
closedir( sciezka ); 

return *plik;
}
