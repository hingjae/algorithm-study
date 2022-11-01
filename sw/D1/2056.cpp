#include<bits/stdc++.h>
using namespace std;

int t;
int main(){
	cin >> t;
	int i = 1;
	while(i <= t){
		string cal;
		cin >> cal;
		string year, month, day;
		int _month, _day;
		year = cal.substr(0, 4);
		month = cal.substr(4, 2);
		day = cal.substr(6, 2);
		_month = stoi(month);
		_day = stoi(day);
		
		if(_month >= 1 && _month <= 12){
			if(_month == 1 || _month == 3 || _month == 5 || _month == 7 || _month == 8 || _month == 10 || _month == 12){
				if(_day >= 1 && _day <= 31)
					cout <<"#"<< i << " " << year << "/" << month << "/" << day << "\n";
				else
					cout <<"#"<< i << " " << -1 << "\n";
			} else if(_month == 2) {
				if(_day >= 1 && _day <= 28)
					cout <<"#"<< i << " " << year << "/" << month << "/" << day << "\n";
				else
					cout <<"#"<< i << " " << -1 << "\n";
			} else {
				if(_day >= 1 && _day <= 30)
					cout <<"#"<< i << " " << year << "/" << month << "/" << day << "\n";
				else
					cout <<"#"<< i << " " << -1 << "\n";
			}
		} else{
			cout <<"#"<< i << " " << -1 << "\n";
		}
		i++;
	}
}
