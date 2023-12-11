#include<stdio.h>
#include<list>
#include<iostream>
void StationNameDraw(const char* year, std::list<const char*> stationName) {
	std::cout << year << std::endl;
	for (auto i = stationName.begin(); i != stationName.end(); ++i) {
		std::cout << *i << std::endl;
	}
	std::cout << "\n" << std::endl;
}

std::list<const char*> InsertAfter(const char* stationName1, const char* stationName2, std::list<const char*> stationNameList) {
	for (auto i = stationNameList.begin(); i != stationNameList.end(); ++i) {
		if (*i == stationName1) {
			i = stationNameList.insert(i, stationName2);
			break;
		}

	}

	return stationNameList;
}

int main(void) {
	std::list<const char*> stationNameList{
		"Tokyo",
		"Yurakucho",
		"Shimbashi",
		"Hamamatsucho",
		"Tamachi",
		//"Takanawa Gateway",//6
		"Shinagawa",
		"Osaki",
		"Gotanda",
		"Meguro",
		"Ebisu",
		"Shibuya",
		"Harajuku",
		"Yoyogi",
		"Shinjuku",
		"Shin-Okubo",
		"Takadanobaba",
		"Mejiro",
		"Ikebukuro",
		"Otsuka",
		"Sugamo",
		"Komagome",
		"Tabata",
		//"Nishi-Nippori",//22
		"Nippori",
		"Uguisudani",
		"Ueno",
		"Okachimachi",
		"Akihabara",
		"Kanda"
	};

	StationNameDraw("1970", stationNameList);
	
	stationNameList = InsertAfter("Nippori", "Nishi-Nippori", stationNameList);
	
	StationNameDraw("2019", stationNameList);
	
	stationNameList = InsertAfter("Shinagawa", "Takanawa Gateway", stationNameList);
	
	StationNameDraw("2022", stationNameList);


	return 0;
}