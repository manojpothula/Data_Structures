.PHONY: run

run:
	@echo "Compiling $(problem)..."
	g++ -std=c++17 $(problem) -O2 -o run && ./run
