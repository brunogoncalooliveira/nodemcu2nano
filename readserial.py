import serial, time

ser = serial.Serial('/dev/ttyUSB0', 9600)

while 1:
    serial_line = ser.read()

    print(serial_line) # If using Python 2.x use: print serial_line

    #time.sleep(1) # sleep 5 minutes


ser.close() # Only executes once the loop exits
