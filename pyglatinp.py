phrase = input("Enter the word or sentence to translate: ")
sliced = phrase.split(' ')

#Translate input
for i in range(len(sliced)):
    sliced[i] += sliced[i][0] + "ay"
    sliced[i] = sliced[i][1:]
    sliced[i] = sliced[i].capitalize()

print(*sliced)
