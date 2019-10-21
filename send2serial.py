import serial, time

ser = serial.Serial('/dev/ttyUSB0', 9600)

ser.write(0)

print("Enter 9 to exit")
while 1:
    try:
        txt = input(">> ")
        value = int(txt)
        print("Number {}".format(value))
        ser.write(chr(value).encode("latin1"))
        print(chr(value).encode("latin1"))
        if value == 9:
            ser.close() # Only executes once the loop exits
            exit()
    except ValueError:
        print ("You must send a number! You wrote this:", txt)
