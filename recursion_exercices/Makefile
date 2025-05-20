Name = ./a.out

DIR = ex05
src = $(DIR)/Sum_of_Digits_Rec.c
sub = $(DIR)/subject.txt
$(Name): $(DIR) $(src) compile
	@./a.out

compile: $(DIR) $(src)
	@gcc $(src)
text:
	code  $(DIR)/subject.txt
$(src): $(DIR)
	@touch -f $@ $(sub)

$(DIR):
	@mkdir -p $@

clean:
	@rm ./a.out
