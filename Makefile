# make
all: heartrate

# make heartrate
heartrate: heartrate.cpp
	g++ heartrate.cpp -o heartrate
