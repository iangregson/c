RM = rm -f
CFLAGS =
CXX = gcc

%.out: src/%.c
	$(CXX) $(CFLAGS) -o bin/$@ $<