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
    std::cout << "setting finished flag to true\n";
    finished = true;
    
    // block main execution until thread1 finishs
    thread1.join();

    std::cout << "thread1 finished (joind main stream)\n";

    return 0;
}
