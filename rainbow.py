from sense_hat import SenseHat
sense = SenseHat()

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
    print (humidity)
    sense.show_message("t= %d" %temperature, text_colour=[100, 0, 5])
    sense.show_message('h= ', text_colour=[0, 100, 0])
    sense.show_message(humidity, text_colour=[0, 100, 0])
    sense.show_message('%', text_colour=[0, 100, 0] )

    

