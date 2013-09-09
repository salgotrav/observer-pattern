class weatherData {
	public:
		weatherData();
		~weatherData();

		float getTemperature() const;
		float getHumidity() const;
		float getPressure() const;

		void mesurementsChanged();
	private:
		class Private;
		Private *d;
};
