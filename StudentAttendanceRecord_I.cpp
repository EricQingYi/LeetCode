#include "StudentAttendanceRecord_I.h"

bool StudentAttendanceRecord_I::checkRecord(string s){
	size_t countL = 0;
	size_t countA = 0;
	bool signL = false;
	bool likeLate = false;
	bool eligible = true;
	for (auto i = s.begin(); ; ++i) {
		if (i == s.end()) {
			if (signL && countL >=3)
				likeLate = true;
			break;
		}
		if (*i == 'L') {
			signL = true;
			++countL;
		}
		else {
			if (signL) {
				signL = false;
				if (countL >= 3)
					likeLate = true;
				countL = 0;
			}
			if (*i == 'A')
				++countA;
		}
	}
	if (likeLate || countA >= 2)
		eligible = false;
	return eligible;
}
