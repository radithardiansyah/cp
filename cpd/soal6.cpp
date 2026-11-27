#include<iostream>
using namespace std;
#include <vector>
#include<algorithm>
struct Athlete{
	string name;
	double time;
};
int main()
{
	vector<Athlete> athletes = {
        {"Alex", 12.5},
        {"Beth", 13.0},
        {"Carl", 13.0},
        {"Dan", 14.2}
    };
	double time = 13.0;


		auto l_b = lower_bound(athletes.begin(), athletes.end(), time,
			[](const Athlete &name, double time ){
			return name.time < time;
			});
	return 0;
}
//why the athlete name get address(&), but not with time?
//what lowerbound, upperbound, and equalrange return like binary is returning boolean
//
//its completely miss understanding, i think the function copy the address of name and the etime on the second parameter but what exactly happening is we copy the address of the struct as name, than the second value is the target variable that we pass than were acessing the struct buy using its new name than .property
//
//the real question now how do i know that i can put double time in the function but i need to write it again not just writing time
//
//lowerbound value is iterator >= of target, upperbound value is iterator > target, equalrenge value is pair of iterator<lower, upper>
//--how to access value and index of them?
//mapping what this bad boy is about
