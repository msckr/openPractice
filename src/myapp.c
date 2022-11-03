#include "myfunc.h"

int main(){
    // call foo,goo 3 times
for(int i=0;i<3;i++){
    foo();
    goo();  
}
//call joo 3 times
for(int i=0;i<3;i++){
    joo();
}

return 0;
}
