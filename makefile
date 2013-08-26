garf: main.cpp Garf.o Channel.o ChannelList.o Server.o User.o
	g++ main.cpp Garf.o Channel.o ChannelList.o Server.o User.o -o garf

Garf.o: Garf.cpp Garf.h
	g++ -c Garf.cpp

Channel.o: Channel.cpp Channel.h
	g++ -c Channel.cpp

ChannelList.o: ChannelList.cpp ChannelList.h
	g++ -c ChannelList.cpp

Server.o: Server.cpp Server.h
	g++ -c Server.cpp

User.o: User.cpp User.h
	g++ -c User.cpp

clean:
	rm -rf *.o garf
