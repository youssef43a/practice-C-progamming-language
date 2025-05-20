Name = ./a.out

DIR = ex04
src = $(DIR)/Count_Digits_Rec.c
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
