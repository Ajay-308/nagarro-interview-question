s = "my name is ajay"
words = s.split()  

result = ""
for word in words:
    result += word[::-1] + " "

print(result) 

# if remove extra space from start and end use this 
# result.strip()