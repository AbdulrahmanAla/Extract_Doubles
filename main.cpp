
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>
#include <stdexcept>
using std::istringstream;
using std::ostringstream;
using std::invalid_argument;
using std::out_of_range;
using std::runtime_error;
using  std::string, std::cin, std::cout, std::size_t, std::endl, std::vector;


vector<double> ExtractDoubles(const string &input){
    istringstream ins;
    ins.str(input);
    double num;
    vector<double> result;

    while (ins >> num){
        result.push_back(num);
    }
    return result;

}
string ReturnPercentFormatted(vector<double> const &vect){
    ostringstream infoOSS;
    string result2;
    for( size_t i =0; i< vect.size();++i){
        
        infoOSS <<std::fixed << std::setprecision(3) << vect[i] *100 <<"%, ";
    }
    result2 = infoOSS.str();
    return result2;
}
int main() {
    string var;
    while(getline(cin, var)){
        ExtractDoubles(var);
        vector<double> test =ExtractDoubles(var);
        cout <<std::setprecision(5) <<ReturnPercentFormatted(test);
        cout <<endl;
    }
    

}