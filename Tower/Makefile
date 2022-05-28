CC = gcc
CXX = g++
TARGET = runfile

SRC = sources
INC = include
BIN = bin

SOURCE = $(wildcard $(SRC)/*.cpp)
INCLUDE = $(INC)/*.h
OBJS = $(patsubst %,$(BIN)/%, $(notdir $(SOURCE:.cpp=.o)))

CXXFLAGS = -I$(INC)
LDFLAGS =
LDLIBS = -lm

all : $(BIN)/$(TARGET)

$(BIN)/$(TARGET) : $(OBJS)
	$(CXX) -o $@ $^ $(LDFLAGS) $(LDLIBS)

$(BIN)/%.o : $(SRC)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

.PHONY: clean help run
clean :
	rm -f $(OBJS) $(BIN)/$(TARGET)

help :
	@echo "src: $(SOURCE)"
	@echo "bin: $(OBJS)"

run : $(BIN)/$(TARGET)
	@echo "Execute"
	$(BIN)/$(TARGET)