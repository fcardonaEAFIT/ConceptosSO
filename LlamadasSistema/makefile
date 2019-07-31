.phony: clean

all: directCalling manualCalling directCalling2 manualCalling2

directCalling: directCalling.o mifuncion.o
	g++ -o $@ $^

directCalling.o: directCalling.cpp

manualCalling: manualCalling.o mifuncion.o
	g++ -o $@ $^

manualCalling.o: manualCalling.cpp

directCalling2: directCalling2.o mifuncion.o
	g++ -o $@ $^

directCalling2.o: directCalling2.cpp

manualCalling2: manualCalling2.o mifuncion.o
	g++ -o $@ $^

manualCalling2.o: manualCalling2.cpp

mifuncion.o: mifuncion.cpp

clean:
	rm -f *.o
	rm -f *.cpp~
	rm -f directCalling manualCalling directCalling2 manualCalling2
