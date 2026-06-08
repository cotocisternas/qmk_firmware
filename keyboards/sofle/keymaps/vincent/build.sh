sudo qmk clean

qmk compile -kb sofle/rev1 -km vincent

# Left half — put it in bootloader mode first, then:
# sudo qmk flash -kb sofle/rev1 -km vincent -bl avrdude-split-left

# Right half — put it in bootloader mode first, then:
# sudo qmk flash -kb sofle/rev1 -km vincent -bl avrdude-split-right
