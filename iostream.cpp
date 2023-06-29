#include <iostream>
#include <iomanip>
using namespace std;
ostream& demo(ostream& c){
    c<<setw(4)<<setfill('%')<<left;
}
int main(){
cout<<setw(4)<<setfill('*')<<left<<20<<endl;
cout<<setw(4)<<setfill('@')<<right<<30<<endl;
}