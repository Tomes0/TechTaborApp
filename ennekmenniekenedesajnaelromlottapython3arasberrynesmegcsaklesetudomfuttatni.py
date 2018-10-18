
from sense_hat import SenseHat
import numpy as np 

import datetime 
import time 

import firebase_admin
from firebase_admin import credentials
from firebase_admin import db
from sense_hat import SenseHat

cred = credentials.Certificate('/home/pi/kool-fcd49-firebase-adminsdk-j7msp-508ac7401d.json')
firebase_admin.initialize_app(cred, {
    'databaseURL' : 'https://kool-fcd49.firebaseio.com/'
})

sense = SenseHat()

ref = db.reference('')

while 1:
    
    y = (244,238, 66)
    e = (0,0,0)
    r = (228,3,3)
    o = (255,140,0)
    g = (0,128,38)
    b = (0,77,255)
    p = (117,7,135)
    
    pressure = sense.get_pressure()
    pressure = pressure * 1013.249977
    pressure = pressure / 1000000
    temperature = sense.temperature-10
    humidity = sense.humidity
    humidity_value =64* humidity/100
    humidity = str(humidity)
    
    ref.update({
        'HO':round(temperature,1)
    })
    ref.update({
        'HUM':round(humidity_value,2)
    })
    ref.update({
        'PRESS':round(pressure,1)
    })


