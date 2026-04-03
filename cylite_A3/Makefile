.PHONY: part3 part4 part5 clean distclean

yapl: y.tab.c lex.yy.c
	gcc -O3 lex.yy.c y.tab.c -o yapl
	@echo "Run the program as ./yapl [input_file]"

part3:
	$(MAKE) clean
	$(MAKE) yapl
	./yapl part3/tests/rdt_basic.cyl --svg part3/tests/rdt_basic.svg > part3/tests/output_rdt_basic.txt
	./yapl part3/tests/rdt_extensions.cyl --svg part3/tests/rdt_extensions.svg > part3/tests/output_rdt_extensions.txt
	./yapl part3/tests/rdt_print_strings.cyl --svg part3/tests/rdt_print_strings.svg > part3/tests/output_rdt_print_strings.txt

part4: yapl.output
	python3 part4/generate_parsing_table.py yapl.output part4 > part4/terminal_output.txt
	@echo "Part 4 tables generated in part4/"

part5: yapl
	@echo "Part 5 diagnostics demo (errors are expected):"
	-./yapl part5/tests/diag_missing_semicolon.cyl > part5/tests/output_diag_missing_semicolon.txt 2>&1
	-./yapl part5/tests/diag_unexpected_else.cyl > part5/tests/output_diag_unexpected_else.txt 2>&1
	-./yapl part5/tests/diag_missing_semicolon_after_print.cyl > part5/tests/output_diag_missing_semicolon_after_print.txt 2>&1
	-./yapl part5/tests/diag_missing_closing_brace.cyl > part5/tests/output_diag_missing_closing_brace.txt 2>&1
	-./yapl part5/tests/diag_bad_for_range_syntax.cyl > part5/tests/output_diag_bad_for_range_syntax.txt 2>&1
	-./yapl part5/tests/diag_bad_try_except_syntax.cyl > part5/tests/output_diag_bad_try_except_syntax.txt 2>&1
	-./yapl part5/tests/diag_invalid_character.cyl > part5/tests/output_diag_invalid_character.txt 2>&1

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
	@rm -f part3/tests/*.dot part3/tests/*.png part3/tests/*.png.dot
	@rm -f part3/tests/*.svg part3/tests/output_*.txt
	@rm -f part5/tests/output_*.txt
