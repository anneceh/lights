# Arduino Uno Christmas Lights

This project is based on the [December 2016 Teknoboks.no project](https://kodegenet.no/page/teknoboks_1_2016) by [Kodegenet](https://kodegenet.no/).

# How to get started 

1. Connect Arduino Uno to computer using USB port
2. Connect the Christmas lights to the Arduino Uno
  - 1 wire (e.g. black) from the white wire on the lights to GND
  - 1 wire (e.g. grey) from the green wire on the lights to digital port 2
  - 1 (optional) wire (e.g. white) from the red wire on the lights to 5V.
    - This can be skipped if connecting lights directly to external power supply
3. Download and open Arduino IDE
  - Check that "Tools/Board" is set to "Arduino/Genuino Uno"
  - Check that "Tools/Port" is set to whatever port has "(Arduino/Genuino Uno)" after the name (e.g. "COM4 (Arduino/Genuino Uno)")
  - Restart IDE with Arduino connected if the port can not be found
4. Copy the program you want to run into the IDE
5. Press "Verify" and wait for verification
6. Press "Upload" and wait for upload to complete
7. Enjoy your Christmas lights!