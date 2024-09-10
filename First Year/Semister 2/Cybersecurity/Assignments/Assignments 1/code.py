def vigenere_encrypt(plaintext, key):
    ciphertext = ""
    key_index = 0
    for char in plaintext:
        if char.isalpha():
            shift = ord(key[key_index % len(key)].lower()) - 97
            if char.isupper():
                ciphertext += chr((ord(char) - 65 + shift) % 26 + 65)
            else:
                ciphertext += chr((ord(char) - 97 + shift) % 26 + 97)
            key_index += 1
        else:
            ciphertext += char
    return ciphertext

def vigenere_decrypt(ciphertext, key):
    plaintext = ""
    key_index = 0
    for char in ciphertext:
        if char.isalpha():
            shift = ord(key[key_index % len(key)].lower()) - 97
            if char.isupper():
                plaintext += chr((ord(char) - 65 - shift) % 26 + 65)
            else:
                plaintext += chr((ord(char) - 97 - shift) % 26 + 97)
            key_index += 1
        else:
            plaintext += char
    return plaintext


#Caesar Cipher:

def caesar_encrypt(plaintext, shift):
    ciphertext = ""
    for char in plaintext:
        if char.isalpha():
            if char.isupper():
                ciphertext += chr((ord(char) - 65 + shift) % 26 + 65)
            else:
                ciphertext += chr((ord(char) - 97 + shift) % 26 + 97)
        else:
            ciphertext += char
    return ciphertext

def caesar_decrypt(ciphertext, shift):
    plaintext = ""
    for char in ciphertext:
        if char.isalpha():
            if char.isupper():
                plaintext += chr((ord(char) - 65 - shift) % 26 + 65)
            else:
                plaintext += chr((ord(char) - 97 - shift) % 26 + 97)
        else:
            plaintext += char
    return plaintext


#Substitution Cipher:


def substitution_encrypt(plaintext, key):
    ciphertext = ""
    for char in plaintext:
        if char.isalpha():
            if char.isupper():
                ciphertext += key[ord(char) - 65].upper()
            else:
                ciphertext += key[ord(char) - 97]
        else:
            ciphertext += char
    return ciphertext

def substitution_decrypt(ciphertext, key):
    plaintext = ""
    for char in ciphertext:
        if char.isalpha():
            if char.isupper():
                plaintext += chr(key.index(char.lower()) + 65).upper()
            else:
                plaintext += key.index(char)
        else:
            plaintext += char
    return plaintext

print(vigenere_decrypt("eslam", "eslam"))