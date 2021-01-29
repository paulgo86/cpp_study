#include "header1.h"
#include "header2.h"
#include "header3.h"

using namespace header1;
using header3::greet;

int main(){
    header1::say();
    header2::say();

    say();

    greet();
    return 0;
}