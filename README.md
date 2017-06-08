
### cecho
Or colorize echo, is a simple `C` Language code that allows you seeing the output of [ANSI COLOR CODE](https://en.wikipedia.org/wiki/ANSI_escape_code).  

The only thing you need is just the `gcc` compiler to compile the code and then use it.  
Or simply you can use `make` command:  
Of course first: `git clone https://github.com/k-five/cecho.git`   

and then:  

```
cd cecho
make build
makd test
make clean
```
Without `make` and using `gcc` directly:
```
gcc -O2 -std=c11 main.c -o cecho
```

### Some examples:  
- cecho green some-test  
- cecho b-green some-test  
- cecho i-green * endl   
- cecho random * endl

