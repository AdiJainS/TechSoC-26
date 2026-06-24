import speech_recognition as sr
import webbrowser
import requests
from openai import OpenAI
import os
from gtts import gTTS
import pygame

# 🎵 Music Library
musicLibrary = {
    "carry on": "https://www.youtube.com/watch?v=P5ZJui3aPoQ",
    "skyfall": "https://www.youtube.com/watch?v=DeumyOzKqgI",
    "way down we go": "https://www.youtube.com/watch?v=0-7IHOXkiV8"
}

recognizer = sr.Recognizer()
newsapi = "d825e3a0b5184eb29f1708796bf95c2b"

# ✅ AI Processing function
def aiProcess(command):
    client = OpenAI(api_key=os.getenv("OPENAI_API_KEY"))  # use env var
    completion = client.chat.completions.create(
        model="gpt-4o",
        messages=[
            {"role": "system", "content": "You are a virtual assistant named Jarvis skilled in general tasks like Alexa and Google Cloud"},
            {"role": "user", "content": command}
        ]
    )
    return completion.choices[0].message["content"]

# ✅ Speak function with gTTS + pygame
def speak(text):
    print("Jarvis says:", text)  # debug print
    tts = gTTS(text=text, lang="en")
    filename = "speech.mp3"
    tts.save(filename)

    pygame.mixer.init()
    pygame.mixer.music.load(filename)
    pygame.mixer.music.play()

    while pygame.mixer.music.get_busy():
        pygame.time.Clock().tick(10)

# ✅ Process user commands
def processCommand(c):
    c = c.lower()

    if "open google" in c:
        webbrowser.open("https://google.com")

    elif "open facebook" in c:
        webbrowser.open("https://facebook.com")

    elif "open youtube" in c:
        webbrowser.open("https://youtube.com")

    elif "open linkedin" in c:
        webbrowser.open("https://linkedin.com")

    elif c.startswith("play"):
        song = c.replace("play", "").strip()
        link = musicLibrary.get(song)
        if link:
            speak(f"Playing {song}")
            webbrowser.open(link)
        else:
            speak("Sorry, I don't know that song.")

    elif "news" in c:
        r = requests.get(
            f"https://newsapi.org/v2/everything?q=tesla&sortBy=publishedAt&apiKey={newsapi}"
        )
        if r.status_code == 200:
            data = r.json()
            articles = data.get("articles", [])
            speak("Here are the latest Tesla headlines:")
            for i, article in enumerate(articles[:5], 1):
                headline = article['title']
                print(f"{i}. {headline}")
                speak(headline)
        else:
            speak("Sorry, I could not fetch the news.")

    else:
        # ✅ Fall back to AI
        response = aiProcess(c)
        speak(response)

# ✅ Main Loop
if __name__ == "__main__":
    speak("Initializing Jarvis....")
    while True:
        try:
            with sr.Microphone() as source:
                print("Listening for wake word...")
                audio = recognizer.listen(source, timeout=5, phrase_time_limit=3)

                word = recognizer.recognize_google(audio)
                if word.lower() == "jarvis":
                    print("Wake word detected!")
                    speak("Yes?")
                    with sr.Microphone() as source:
                        print("Jarvis active...")
                        audio = recognizer.listen(source, timeout=5, phrase_time_limit=5)
                        try:
                            command = recognizer.recognize_google(audio)
                            processCommand(command)
                        except sr.UnknownValueError:
                            speak("Sorry, I didn't catch that.")
                        except sr.RequestError:
                            speak("Network error.")
        except sr.UnknownValueError:
            pass
        except Exception as e:
            print("Error:", e)
