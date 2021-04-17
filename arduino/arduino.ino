/*
    author : danu andrean
    date : 18 april 2021
    profile : https://me-danuandrean.github.io/

*/

#include "CTBot.h"
CTBot myBot;
String ssid = "dann";
String pass = "danu12345";

//set token telegram
String token = "1652016015:AAFvl924BYzMzQGol7CcFlCZIhlJnyHKYEw";
//set id chat
const int id = 568105225; 

void setup() {
  Serial.begin(9600);
  Serial.println("Starting TelegramBot...");
  myBot.wifiConnect(ssid, pass);
  myBot.setTelegramToken(token);

  if (myBot.testConnection()) {
    Serial.println("connection ok");
  } else {
    Serial.println("bad connection");
  }

  myBot.sendMessage(id, "Tes chat");
  Serial.println("Pesan Terkirim");
}

void loop() {

}
