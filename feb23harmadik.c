#include <stdio.h>

const int LIMIT = 10; //globális konstatns változó, nagy betűvel szoktuk írni


int main(){

const int n=10; //konstatns változó, ennek az értékét nem akarom és nem lehet változtatni
for(int i=1; i<LIMIT; i++){
    if(i % 2 == 1){
        printf("%d\n",i);
    }
}
return 0;

}