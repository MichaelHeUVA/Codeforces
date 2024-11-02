# Define the compiler
CXX := g++

# Define compiler flags
CXXFLAGS := -Wall -Wextra -std=c++23 -pedantic -Wformat=2 -Wfloat-equal -Wlogical-op -Wredundant-decls -Wconversion -Wcast-qual -Wcast-align -Wuseless-cast -Wno-shadow -Wno-unused-result -Wno-unused-parameter -Wno-unused-local-typedefs -Wno-long-long -DLOCAL_PROJECT -g -DLOCAL_DEBUG -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC

# Find all .cpp files in the current directory
SOURCES := $(wildcard *.cpp)

# Create a list of executables by replacing .cpp and prepending the output directory
EXECUTABLES := $(patsubst %.cpp,output/%,$(SOURCES))

# Define the recipe for each executable
all: output $(EXECUTABLES)

# Ensure the output directory exists
output:
	mkdir -p output

# Link each .cpp file into an individual executable in the output directory
output/%: %.cpp 
	$(CXX) $(CXXFLAGS) -o $@ $<

# Add a clean target to remove generated files
.PHONY: clean
clean:
	rm -f $(EXECUTABLES)