.PHONY: part3 part4 part5 clean distclean

yapl: y.tab.c lex.yy.c
	gcc -O3 lex.yy.c y.tab.c -o yapl
	@echo "Run the program as ./yapl [input_file]"

part3:
	$(MAKE) clean
	$(MAKE) yapl
	./yapl part3/tests/rdt_basic.cyl --png part3/tests/rdt_basic.png
	./yapl part3/tests/rdt_extensions.cyl --png part3/tests/rdt_extensions.png
	./yapl part3/tests/rdt_print_strings.cyl --png part3/tests/rdt_print_strings.png

part4: yapl.output
	python3 part4/generate_parsing_table.py yapl.output part4
	@echo "Part 4 tables generated in part4/"

part5: yapl
	@echo "Part 5 diagnostics demo (errors are expected):"
	-./yapl part5/tests/diag_missing_semicolon.cyl
	-./yapl part5/tests/diag_unexpected_else.cyl
	-./yapl part5/tests/diag_missing_semicolon_after_print.cyl
	-./yapl part5/tests/diag_missing_closing_brace.cyl
	-./yapl part5/tests/diag_bad_for_range_syntax.cyl
	-./yapl part5/tests/diag_bad_try_except_syntax.cyl
	-./yapl part5/tests/diag_invalid_character.cyl

y.tab.c: yapl.y 
# 	bison -d yapl.y
	bison -d -o y.tab.c yapl.y

yapl.output: yapl.y
	bison -v -d yapl.y

lex.yy.c: yapl.l y.tab.h
	lex yapl.l

clean:
	@rm -f lex.yy.c y.tab.h y.tab.c yapl

distclean: clean
	@rm -f yapl.output yapl.tab.c yapl.tab.h
	@rm -f part4/action_table.csv part4/goto_table.csv part4/parsing_table_summary.md part4/parsing_table_matrix.html
	@rm -f part3/tests/*.dot
