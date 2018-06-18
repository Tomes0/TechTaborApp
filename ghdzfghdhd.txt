
from sense_hat import SenseHat
import numpy as np 

import datetime 
import time 

import firebase_admin
from firebase_admin import credentials
from firebase_admin import db

cred = credentials.Certificate('/home/pi/kool-fcd49-firebase-adminsdk-j7msp-508ac7401d.json')
firebase_admin.initialize_app(cred, {
    'databaseURL' : 'https://kool-fcd49.firebaseio.com/'
})

sense = SenseHat()

ref = db.reference('Raspberry')

print ("humidity")
while 1:
    
    y = (244,238, 66)
    e = (0,0,0)
    r = (228,3,3)
    o = (255,140,0)
    g = (0,128,38)
    b = (0,77,255)
    p = (117,7,135)
   
    temperature = sense.temperature-10
    humidity = sense.humidity
    humidity_value =64* humidity/100
    humidity = str(round(humidity, 2))

    ref.update({
        'HO':round(temperature,1)
    })
    ref.update({
        'HUM':round(humidity_value,1)
    })

    print (humidity)
    
    sense.show_message("temperature: %d" %temperature, text_colour=[100, 0, 5])
    sense.show_message('humidity: ', text_colour=[0, 100, 0])
    sense.show_message(humidity, text_colour=[0, 100, 0])
    sense.show_message('%', text_colour=[0, 100, 0] )
    
    
    sonix1 = [
    e, e, e, e, e, e, e, e,
    r, r, r, r, r, r, r, r,
    o, o, o, o, o, o, o, o,
    y, y, y, y, y, y, y, y,
    g, g, g, g, g, g, g, g,
    b, b, b, b, b, b, b, b,
    p, p, p, p, p, p, p, p,
    e, e, e, e, e, e, e, e,
    ]

    sense.set_pixels (sonix1)
    

