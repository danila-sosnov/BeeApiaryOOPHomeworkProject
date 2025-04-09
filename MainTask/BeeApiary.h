#include <iostream>
using namespace std;
#include <string>

class Bee
{
	public:
		string type;
		string behavior;
		bool in_hive;
		string health;
		int lifetime;
			
		
		string getString()
		{
			string s = "Type: " + type;
			s += ", behavior: " + behavior
				+ ",is in hive: " + (in_hive ? "yes" : "no")
				+ ", health: " + health
				+ ", lifetime: " + to_string(lifetime) + " days";

			return s;
		}

};
