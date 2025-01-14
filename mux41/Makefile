run: Vmux41
	./obj_dir/Vmux41

Vmux41: obj_dir
	make -C obj_dir -f Vmux41.mk Vmux41

obj_dir: mux41.v sim_main.cpp
	verilator -Wall --cc --trace mux41.v --exe sim_main.cpp

clean:
	rm -rf obj_dir;
	rm waveform.vcd;

.PHONY: wave
wave: run
	gtkwave waveform.vcd
