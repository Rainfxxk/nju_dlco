CXXFLAGS = "-I ../csrc/lib/ -Wall -Wextra"

vsrc = ./vsrc/alu.v ./vsrc/adder.v
csrc = ./csrc/main.cpp ./csrc/AluIn.cpp ./csrc/AluInDrv.cpp ./csrc/AluInMon.cpp ./csrc/AluOutMon.cpp ./csrc/AluScb.cpp
lib = ./csrc/lib/


waveform: run
	gtkwave waveform.vcd

run: Valu
	./obj_dir/Valu > log.txt

Valu: obj_dir
	make -C obj_dir -f Valu.mk Valu

obj_dir: $(vsrc) $(csrc)
#	verilator --cc --trace $(vsrc) --exe $(csrc) --Mdir $(lib)
	verilator --cc --trace $(vsrc) --exe $(csrc) --Mdir obj_dir -CFLAGS $(CXXFLAGS)

clean:
	rm -rf obj_dir
	rm -r log.txt
