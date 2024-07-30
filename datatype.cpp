//Name - Siddhant Bedre
//PRN - 23070123037
//Aim - Verifying Data Types in CPP

#include <string>
#include <iostream>
using namespace std;


int main() {
  
    int numVar;
    float decimalVar;
    char charVar;
    bool BoolVar;
    string stringVar;
    double doubleVar;
    
    cout<<"Enter integer:";
    cin>>numVar;
    cout<<"Size is "<<sizeof(numVar)<<"\n";
    cout<<"Enter float:";
    cin>>decimalVar;
    cout<<"Size is "<<sizeof(decimalVar)<<"\n";
    cout<<"Enter char :";
    cin>>charVar;
    cout<<"Size is "<<sizeof(charVar)<<"\n";
    cout<<"Enter string :";
    cin>>stringVar;
    cout<<"Size is "<<sizeof(stringVar)<<"\n";
    cout<<"Enter a double :";
    cin>>doubleVar;
    cout<<"Size is "<<sizeof(doubleVar)<<"\n";
    cout<<"Enter a boolean: ";
    cin>>BoolVar;
    cout<<"Size is "<<sizeof(BoolVar)<<"\n";
}

/* Output:
Enter integer:12
Size is 4
Enter float:2.6
Size is 4
Enter char :d
Size is 1
Enter string :word
Size is 32
Enter a double :3333333
Size is 8
Enter a boolean: 1
Size is 1
*/
