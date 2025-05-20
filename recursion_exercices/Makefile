Name = ./a.out

DIR_ = backtaraging
DIR = $(DIR_)/ex01
src = $(DIR)/ft_generate_strings_of_3_chars.c
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
