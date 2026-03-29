yapl: y.tab.c lex.yy.c
	gcc -O3 lex.yy.c y.tab.c -o yapl
	@echo "Run the program as ./yapl [input_file]"

a3-conflicts:
	@mkdir -p a3_artifacts
	bison -y -d -v -Wcounterexamples yapl.y > a3_artifacts/conflict_report.txt 2>&1 || true
	@echo "Wrote a3_artifacts/conflict_report.txt"

a3-table: y.tab.c
	@mkdir -p a3_artifacts
	bison -y -d -v yapl.y
	python3 tools/parse_table_matrix.py --input y.output --out-dir a3_artifacts
	@echo "Wrote parse table CSV files under a3_artifacts/"

y.tab.c: yapl.y 
# 	bison -d yapl.y
	bison -y -d yapl.y

lex.yy.c: yapl.l y.tab.h
	lex yapl.l

clean:
	@rm -f lex.yy.c y.tab.h y.tab.c y.output yapl

distclean: clean
	@rm -rf a3_artifacts

