#include <bits/stdc++.h>

/*handle interrupt signal like (ctrl+c)*/

void signalHandler(int signal) {
    std::cout << "\n good bye "<<std::endl;

    exit(signal);
}

int main() {
    signal(SIGINT, signalHandler);

    while (1)
    {
    }

    return 0;
}