# Compiler
CXX = g++

# Language standard and warnings
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

# Executable name
TARGET = transporter

# ------------------------------------------------------------
# Source files
# Start with driver.cpp so the project builds immediately.
# Add your other .cpp files below as you create them.
# ------------------------------------------------------------

SRCS = driver.cpp \

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# ------------------------------------------------------------
# Build rules
# NOTE: Command lines MUST begin with a TAB character.
# ------------------------------------------------------------

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Remove generated files
clean:
	rm -f $(OBJS) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)
