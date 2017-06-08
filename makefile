build:
	@echo 'trying to comple...'
	gcc -O2 -std=c11 -c src/main.c
	@echo 'tryping to link ...'
	gcc -o cecho main.o
	@echo 'okay.'
test:
	./cecho random * endl

clean:
	@echo 'trying to remove useless file...'
	rm -f *.o *~
	@echo 'okay.'
