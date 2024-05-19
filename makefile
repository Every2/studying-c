NAME = c-programming-language/section-1/1-15

bin/$(NAME): bin/ $(NAME).c
	gcc -o bin/a $(NAME).c

bin/:
	mkdir bin

run: bin/$(NAME)
	./bin/a

.PHONY: clean
clean:
	rm -rf bin