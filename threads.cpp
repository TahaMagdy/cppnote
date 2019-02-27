#include <iostream>
#include <thread>


bool finished = false;


void do_something() {
    
    while(!finished) {
        std::cout << "thread1\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}



int main() {

    std::cout << "main thread started\n";
    std::thread thread1(do_something);
    std::cin.get();

    // setting finished flag to true
    finished = true;
    
    thread1.join();

    return 0;
}
