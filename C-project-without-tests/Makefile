CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
SRCDIR = src
BUILDDIR = build

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(patsubst $(SRCDIR)/%.cpp,$(BUILDDIR)/%.o,$(SOURCES))
DEPS = $(OBJS:.o=.d)
TARGET = $(BUILDDIR)/main

all: $(BUILDDIR) $(TARGET)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile and generate dependency files
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp | $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -MMD -MP -I$(SRCDIR) -c $< -o $@

# Include dependency files
-include $(DEPS)

clean:
	rm -rf $(BUILDDIR)

run: $(TARGET)
	$(TARGET)

.PHONY: all clean run
