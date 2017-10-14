#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>

using std::cout;
using std::endl;
using std::string;
    int main() {
        cout.setf(std::ios_base::unitbuf);
        pid_t pid;
        cout << ("At the start") << endl;

        if((pid = fork()) < 0){
            perror("FORK ERROR");
        }

        for (int i = 0; i < 200; ++i){
            cout << "i = "      << i        << ", "
                 << "my pid = " << getpid() << ", "
                 << "fork = "   << pid      << ", "
                 << "ppid = "   << getppid()<< endl;
        }
        return EXIT_SUCCESS;
    }
