Name = ./a.out

DIR = ex02
src = $(DIR)/Fibonacci_Series_Recu.c
sub = $(DIR)/subject.txt
$(Name): $(DIR) $(src) compile
	@./a.out

compile: $(DIR) $(src)
	@gcc $(src)

$(src): $(DIR)
	@touch -f $@ $(sub)

$(DIR):
	@mkdir -p $@

clean:
	@rm ./a.out
