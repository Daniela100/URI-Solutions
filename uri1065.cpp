#include <iostream>
 
using namespace std;
 
int main() {
 
   int n;
   int cont, par = 0;
   
   cin >> n;
   
   for (cont = 1;cont <= 5;cont++){
       
       if (n%2==0)
        par++;
        
        cin >> n;
   
   }
   
   cout << par << " valores pares" << endl;
 
    return 0;
}