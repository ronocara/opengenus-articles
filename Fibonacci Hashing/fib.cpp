#include <iostream>
#include <sstream>
using namespace std;

hash(int x) {
    // the value for a using golden ratio
    const std::uint32_t hash = 2654442313;
    const std::uint32_t y = x;
    // look at the top 3 bits of the hash value
    return (y * hash) >> (29);
}

int main() {

    for(int x=0; x<17; x++)  
    cout<<hash(x)<<endl;
    return 0;
}
