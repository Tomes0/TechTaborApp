import sqlite3
import serial
import time
ser = serial.Serial('/dev/ttyACM0', 9600)
a,b,c,d=ser.split(',')
conn = sqlite3.connect('ertekek.db')
c = conn.cursor()
i=0
while 1:
	i++
	c.execute("INSERT INTO erzekeklok VALUES (i,strftime('%Y-%m-%d %H:%M:%S'),a,b,c,d)")
	time.sleep (100)
conn.commit()
conn.close()

