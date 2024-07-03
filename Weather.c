#include <stdio.h> // Includes the standard I/O library for input/output operations

// Defining an enumeration for different weather conditions
typedef enum {
    SUNNY, // Represents sunny weather
    CLOUDY, // Represents cloudy weather
    RAINY, // Represents rainy weather
    SNOWY // Represents snowy weather
} WeatherCondition; // The type alias for our weather condition enumeration

// Function prototype for suggestClothing
const char* suggestClothing(WeatherCondition weather); 

int main() {
    // Initialize a variable of type WeatherCondition with the value SUNNY
    // This represents the current weather condition being considered
    WeatherCondition today = SUNNY; 

    // Print a message suggesting appropriate clothing for the current weather condition
    // The suggestClothing function is called with the current weather condition as its argument
    // The returned string is formatted into the output message
    printf("For %s weather, wear light clothes.\n", suggestClothing(today));

    // Return 0 to indicate successful execution of the program
    return 0;
}

// Function definition
const char* suggestClothing(WeatherCondition weather) {
    //Switch statement to select the appropriate clothing suggestion based on the weather condition
    switch (weather) {
        case SUNNY:
            // For sunny weather, suggest wearing light clothes
            return "light clothes";
        case CLOUDY:
            // For cloudy weather, suggest wearing a jacket
            return "a jacket";
        case RAINY:
            // For rainy weather, suggest wearing an umbrella and a raincoat
            return "umbrella and raincoat";
        case SNOWY:
            // For snowy weather, suggest wearing warm clothes and boots
            return "warm clothes and boots";
        default:
            // If the weather condition doesn't match any known conditions, suggest "unknown weather"
            return "unknown weather";
    }
}
