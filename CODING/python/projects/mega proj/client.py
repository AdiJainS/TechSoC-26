from openai import OpenAI
import os

# Best practice: set your API key as an environment variable
# On Linux/Mac: export OPENAI_API_KEY="your-key"
# On Windows (PowerShell): setx OPENAI_API_KEY "your-key"

client = OpenAI(api_key=os.getenv("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"))

completion = client.chat.completions.create(
    model="gpt-4o",
    messages=[
        {"role": "system", "content": "You are a virtual assistant named Jarvis skilled in general tasks like Alexa and Google Cloud"},
        {"role": "user", "content": "what is coding"}
    ]
)

print(completion.choices[0].message)

