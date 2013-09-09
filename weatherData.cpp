#include <iostream>

class Private {
	public:
		float temp;
		float humidity;
		float pressure;

		Private() { 
			temp = humidity = pressure = 0.0;
		}
};

weatherData::weatherData(): d(new Private) {

}


