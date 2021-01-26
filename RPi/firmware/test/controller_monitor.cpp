#include <stdio.h>
#include <fstream>
#include <unistd.h>
#define FILE "/dev/input/js0"

int main() {
    
    std::ifstream file(FILE);
    int idx = 0;
    char c;
    char block[8];

    while (file.get(c)) {
        block[idx] = c;
        idx++;
        sleep(0.1);
        if (idx == 8){
            if ((block[6] == 2) && ((block[7] == 1) || (block[7] == 0))) {
                printf("%hhx %hhx", block[4], block[5]);
                printf("\n");
            }
            idx = 0;
        }
    }
    file.close();
    return 0;
}
