.PHONY : wave
wave : run
	gtkwave waveform.vcd

run: Vmux21
	./obj_dir/Vmux21

Vmux21: obj_dir
	make -C ./obj_dir -f Vmux21.mk Vmux21

obj_dir: mux21.v mux21_tb.cpp
	verilator -Wall --trace -cc mux21.v --exe mux21_tb.cpp
