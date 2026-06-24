letter = ''' Dear <|Name|> 
You are selected
<|Date|>'''
print(letter.replace("<|Name|>","Harry").replace("<|Date|>","6 Aug 2025"))
#chaining can be done