# Define the compiler
CXX := g++

# Define compiler flags
CXXFLAGS := -Wall -Wextra -std=c++23

# Find all .cpp files in the current directory
SOURCES := $(wildcard *.cpp)

# Create a list of executables by replacing .cpp with nothing
EXECUTABLES := $(SOURCES:.cpp=)

# Define the recipe for each executable
all: $(EXECUTABLES)

# Link each .cpp file into an individual executable
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# Add a clean target to remove generated files
.PHONY: clean
clean:
	rm -f $(EXECUTABLES)