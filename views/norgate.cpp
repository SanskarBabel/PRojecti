#include <iostream>
using namespace std;

int main()
{
    //list of logic gates 
    cout<<"1. NOT gate \n2. AND gate \n3. OR gate"<<endl;
    cout<<"4. NOR gate \n5. NAND gate \n6. XOR gate"<<endl;
    int option;
    cout<<"Enter the operation you want to perform from the given list of gates: ";
    cin>>option; //read choice from the user
    cout<<endl;
    switch(option) //matches the option with the cases
    {
        case 1: 
            {   //performs not operation
                int a;
                cout<<"Enter a bit: ";
                cin>>a;
                cout<<"NOT for bit "<<a<<" is: "<<!a<<endl;
                break;
            }
        
        case 2:
            {   //performs AND operation
                int a, b;
                cout<<"Enter 2 bits (0, 1): ";
                cin>>a>>b;
                cout<<"AND for the bits: "<<(a&b)<<endl;
                break;
            }
        
        case 3:
            {   //performs OR operation
                int a, b;
                cout<<"Enter 2 bits (0, 1): ";
                cin>>a>>b;
                cout<<"OR for the bits: "<<(a|b)<<endl;
                break;
            }

        case 4:
            {   //performs NOR operation
                int a, b;
                cout<<"Enter 2 bits (0, 1): ";
                cin>>a>>b;
                cout<<"NOR for the bits: "<<!(a|b)<<endl;
                break;
            } 
        
        case 5:
            {   //performs NAND operation
                int a, b;
                cout<<"Enter 2 bits (0, 1): ";
                cin>>a>>b;
                cout<<"NAND for the bits: "<<!(a&b)<<endl;
                break;
            }  
        
        case 6:
            {   //performs XOR operation
                int a, b;
                cout<<"Enter 2 bits (0, 1): ";
                cin>>a>>b;
                cout<<"XOR for the bits: "<<(a^b)<<endl;
                break;
            }
        default : cout<<"You have entered wrong choice."<<endl;
    }       

    return 0;
}