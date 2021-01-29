#include <iostream>


int main(){
    int i , sum = 0;
    for(i = 1; i <= 10; i++){        
        std::cout << i << " + " << sum << " = " << sum + i << std::endl;
        sum += i;
    }

    i = 10;

    while ( i > 0 ){
        std::cout << sum << " - " << i << " = " << sum - i << std::endl;
        sum -= i;
        i--;
    }

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

       



    return 0;
}