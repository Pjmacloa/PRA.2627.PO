CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = robotic_arm
OBJECTS = main.o RoboticArm.o

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

main.o: main.cpp RoboticArm.h
	$(CXX) $(CXXFLAGS) -c main.cpp

RoboticArm.o: RoboticArm.cpp RoboticArm.h
	$(CXX) $(CXXFLAGS) -c RoboticArm.cpp

test: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

