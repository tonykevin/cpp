# set compiler and compile options
EXEC = app
CXX = g++             # use the GNU C++ compiler
OPTS = -O2 -Wall -g   # use some optimization, report all warnings and enable debugging
CFLAGS = $(OPTS)      # add compile flags
LDFLAGS =             # specify link flags here

# set a list of directories
BINDIR = ./bin
OBJDIR = ./obj
SRCDIR = ./src

# define directories for binaries
DIRS= $(BINDIR) $(OBJDIR) $(SRCDIR)
$(shell mkdir -p $(DIRS))


# add here the source files for the compilation
SOURCES = main.cpp

# create the obj variable by substituting the extension of the sources
# and adding a path
_OBJ = $(SOURCES:.cpp=.o)
OBJ = $(patsubst %,$(OBJDIR)/%,$(_OBJ))

all: $(BINDIR)/$(EXEC)

$(BINDIR)/$(EXEC): $(OBJ)
	$(CXX) -o $(BINDIR)/$(EXEC) $(OBJ) $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) -c -o $@ $< $(CFLAGS)

clean:
	rm -rf $(BINDIR) $(OBJDIR)
