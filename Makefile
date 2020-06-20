# set compiler and compile options
EXEC = app
CXX = g++             # use the GNU C++ compiler
OPTS = -O2 -Wall -g   # use some optimization, report all warnings and enable debugging
CFLAGS = $(OPTS)      # add compile flags
LDFLAGS =             # specify link flags here

# set a list of directories
BINDIR = ./bin
SRCDIR = ./src

# define directories for binaries
DIRS= $(BINDIR) $(SRCDIR)
$(shell mkdir -p $(DIRS))


# add here the source files for the compilation
SOURCES = main.cpp

all: $(BINDIR)/$(EXEC)

$(BINDIR)/$(EXEC): $(SRCDIR)/$(SOURCES)
	$(CXX) -o $@ $< $(CFLAGS)

clean:
	rm -rf bin
