import time
import paho.mqtt.client as mqtt
import time
import base64
from Crypto.Cipher import AES

IP="172.16.32.7"
PORT=1080X
GROUPE="GROUPE_XX_YY_ZZ"

def EncodeXor(tabMessage,tabKey):
    tabKey=tabKey*(len(tabMessage)//len(tabKey)+1)
    return bytes([a^b for a,b in zip(tabMessage,tabKey)])

def DecodeXor(tabMessage,tabKey):
    tabKey=tabKey*(len(tabMessage)//len(tabKey)+1)
    return bytes([a^b for a,b in zip(tabMessage,tabKey)])

#Le travail commence ici
def newMessage(client,userData,msg):
    print ("\n",msg.topic,"\t\t",msg.payload,end=' ')
    if "LED2_HACKED" in msg.topic and GROUPE in msg.topic:
            print("\nWell done !")
            raise KeyboardInterrupt

    #Construction du nouveau payload ICI

    if False:#si construction payload OK :
        topic=msg.topic
        topic=topic.replace("GROUPE_XX",GROUPE)
        topic=topic.replace("LED1","LED2")
        client.publish(topic,newpayload)

def mqttConnect():
    mqttClient=mqtt.Client(GROUPE)
    mqttClient.username_pw_set("TOBEDETERMINED","TOBEDETERMINED")
    mqttClient.connect(IP,PORT)
    mqttClient.on_message=newMessage
    mqttClient.subscribe("TOBEDETERMINED")
    return mqttClient

def main():
    try:
        mqttClient=mqttConnect()
        while True:
            mqttClient.loop()
            time.sleep(0.5)
            print (".",end='')
    except KeyboardInterrupt:
        pass
    mqttClient.disconnect()

if __name__ == '__main__':
    main()
