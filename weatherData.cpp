#include "weatherData.h"

#include <iostream>

class weatherData::Private {
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

float weatherData::getTemperature() const{
	return d->temp;
}

float weatherData::getHumidity() const{
	return d->humidity;
}

float weatherData::getPressure() const{
	return d->pressure;
}

void weatherData::Private::setTemperature(float temp) {
	this->temp = temp;
}

void weatherData::Private::setHumidity(float humidity) {
	this->humidity = humidity;
}

void weatherData::Private::setPressure(float pressure) {
	this->pressure = pressure;
}
