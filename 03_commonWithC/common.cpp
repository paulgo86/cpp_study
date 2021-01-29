#include <iostream>


using std::cout;
using std::endl;
using std::cin;

int main(){
    int i , sum = 0;

    std::cout << "common in for" << std::endl;

    for(i = 1; i <= 10; i++){        
        std::cout << i << " + " << sum << " = " << sum + i << std::endl;
        sum += i;
    }

    i = 10;

    std::cout << "===================" << std::endl << std::endl;

    std::cout << "common in while" << std::endl;

    while ( i > 0 ){
        std::cout << sum << " - " << i << " = " << sum - i << std::endl;
        sum -= i;
        i--;
    }

    std::cout << "===================" << std::endl << std::endl;
    std::cout << "common in if ( if pw == 11 -> break ) " << std::endl;

    int password = 11;
    int user_input;

    while (1) {
        std::cout << "input pw :";
        std::cin >> user_input;
        if ( user_input == password ) {
            std::cout << "welcome ! " << std::endl;
            break;
        }else{
            std::cout << "not valid ! "<< std::endl;
        }
    }

    std::cout << "===================" << std::endl << std::endl;
    std::cout << "common in switch" << std::endl;

    int user_select;

    while (user_select != 3) {
        cout << "select below" << endl;
        cout << "1. print author" << endl;
        cout << "2. print title of this chapter" << endl;
        cout << "3. exit" << endl;

        cin >> user_select;
        switch (user_select) {
            case 1:
                cout << "Paul Go" << endl;
                break;

            case 2:
                cout << "Common in Cpp and C" << endl;
                break;

            case 3:
                cout << "bye ~" << endl;
                break;

            default:
                cout << "select 1 to 3" << endl;
                break;
        }
    }

       



    return 0;
}