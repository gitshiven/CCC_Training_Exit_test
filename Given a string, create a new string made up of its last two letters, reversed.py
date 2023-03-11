def letters(word):
    lasttwoletters = word[-2:][::-1]
    return " ".join(lasttwoletters)
