#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

string grade(){
    
    srand(time(0));
    switch (rand()%9){
        
        case 0:
            return "A";
            break;
        case 1:
            return "B+";
            break;
        case 2:
            return "B";
            break;
        case 3:
            return "C+";
            break;    
        case 4:
            return "C";
            break;
        case 5:
            return "D+";
            break;
        case 6:
            return "D";
            break;
        case 7:
            return "F";
            break;
        case 8:
            return "W";
            break;
        default: 
            return 0;
            
   }
   
}

int main(){
    
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get "<< grade() <<" in this 261102.";
    
    return 0;
    
}

