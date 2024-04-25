OpenAI().chat.completions.create(
messages=[
{"role": "system", "content": "You are a friendly… a rubber duck."},
       {"role": "user", "content": "Can you help me with my filter pset?"},
       {"role": "assistant", "content": "Of course! I’d be happy … "},
       {"role": "user", "content": "<User Prompt>"},
       {"role": "assistant", "content": "<Assistant Response>"},
       {"role": "user", "content": "<User Prompt>"},
       {"role": "assistant", "content": "<Assistant Response>"},
       {"role": "user", "content": "<User Prompt>"}
    ],
    model="gpt-4",
)
