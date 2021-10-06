#include <iostream>
using namespace std;

int main()
{
   int i, x;
   char str[100];

   cout << "Please enter your current password:\t";
   cin >> str;

   cout << "\nPlease choose following options:\n";
   cout << "1 = Encrypt the password.\n";
   cout << "2 = Decrypt the password.\n";
   cin >> x;


   switch(x)
   {
 
      case 1:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2; 

         cout << "\nEncrypted string: " << str << endl;
         int end2;
		 cin >> end2;

    
      default:
         cout << "\nInvalid Input !!!\n";
   }
   return 0;
}