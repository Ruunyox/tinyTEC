## TinyTEC: Use an ATtiny45/ATtiny85 to control a TEC unit

TinyTEC uses an Arduino-based sketch with a ATtiny45/ATtiny85 to control a
TEC unit with a 10K potentiometer. Such a small device can be used for
nonspecific DC heating/cooling with analog control. This particular device
was developed for use in a glovebox environmental chamber used in
biophysical research. The code only utilizes 2 of the 6 IO pins of the
microcontroller, so other components (such as temperature/humidity sensors)
may be used as well, though larger sketches may not fit into the ATtiny45's
limited 4kb storage.

## Hardware Required

You will need specific files to communicate with the ATtiny
microcontrollers (see https://github.com/Wulfrabbit/tinylight).
Additionally you will need:

* N-channel MOSFET
* 10K potentiometer
* 10K Resistor
* TEC unit (with external power)

One source of compact external power is a buck converter. I recommend this
DROK buck converter
(https://www.amazon.com/gp/product/B00BYS9JYA/ref=oh\_aui\_detailpage\_o04\_s00?ie=UTF8&psc=1).
This allows for tunable voltage and current stepdown from, say a 12V/6A
wall source
(https://www.amazon.com/gp/product/B00VA2K0MK/ref=oh\_aui\_detailpage\_o05\_s00?ie=UTF8&psc=1). 
