// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(NULL));
    int fortune = rand()%9 +1;
    /*switch (fortune)
    {
    case 1: cout << "You will get A in this 261102.";
        break;
    case 2: cout << "You will get B+ in this 261102.";
        break;
    case 3: cout << "You will get B in this 261102.";
        break;
    case 4: cout << "You will get C+ in this 261102.";
        break;
    case 5: cout << "You will get C in this 261102.";
        break;
    case 6: cout << "You will get D+ in this 261102.";
        break;
    case 7: cout << "You will get D in this 261102.";
        break;
    case 8: cout << "You will get F in this 261102.";
        break;
    case 9: cout << "You will get W in this 261102.";
        break;
    }*/
    if (fortune == 1)cout << "You will get A in this 261102.";
    else if (fortune == 2)cout << "You will get B+ in this 261102.";
    else if (fortune == 3)cout << "You will get B in this 261102.";
    else if (fortune == 4)cout << "You will get C+ in this 261102.";
    else if (fortune == 5)cout << "You will get C in this 261102.";
    else if (fortune == 6)cout << "You will get D+ in this 261102.";
    else if (fortune == 7) cout << "You will get D in this 261102.";
    else if (fortune == 8)cout << "You will get F in this 261102.";
    else cout << "You will get W in this 261102.";
    

    return 0;
   
    
   
    
}
