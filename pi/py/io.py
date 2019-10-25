from gpiozero import LED, Button
from time import sleep
from datetime import datetime
from signal import pause

relay = LED(2)
button = Button(3)

while True:
    timestamp = datetime.now().isoformat()
    print(timestamp + ' : ' + str(button.value))
    sleep(1)
    relay.value = button.value


