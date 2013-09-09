#include <iostream>

class Private {
	public:
		float temp;
		float humidity;
		float pressure;

		Private() { 
			temp = humidity = pressure = 0.0;
		}

		void setTemperature(float);
		void setHumidity(float);
		void setPressure(float);
		
};

weatherData::weatherData(): d(new Private) {

}

float weatherData::getTemperature() {
	return d->temp;
}

float weatherData::getHumidity() {
	return d->humidity;
}

float weatherData::getPressure() {
	return d->pressure;
}

void Private::setTemperature(float temp) {
	d->temp = temp;
}

void Private::setHumidity(float humidity) {
	d->humidity = humidity;
}

void Private::setPressure(float pressure) {
	d->pressure = pressure;
}
