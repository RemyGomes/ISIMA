# -*- coding: utf-8 -*-

from Crypto.Cipher import AES
from Crypto import Random

import base64

# AES
def pad(s):
    return s + b"\0" * (AES.block_size - len(s) % AES.block_size)

def Xor(string,key):
    """ Chiffrement Ou exclusif. string et key sont des chaines de caractères."""
    xored=""
    for c1 in range(0,len(string)):
		xored = xored + chr(ord(string[c1]) ^ ord(key[(c1)%(len(key))]))
    return xored

def Indice(table,element):
    """ Retourne l'indice d'élément dans table"""
    return table.index(element)

def EncodeBase64(chaine):
    """ Encode en base 64 le paramètre chaine"""
    return base64.b64encode(chaine)


def DecodeBase64(chaine):
    """ Décode la chaine encodée en base 64"""
    return base64.b64decode(chaine)

def EncodeAES(chaine,key):
    """ Chiffrement AES 128 bits de chaine avec key comme clef.
        La taille de chaine est quelconque et sera complétée par le
        caractère espace si nécessaire. Key est un tableau 16 éléments."""
    while((len(chaine)%16) !=0) :
        chaine = chaine + " "
    keystring =  ''.join((str(key)) for e in chaine)
    chaine = pad(chaine)
    iv = Random.new().read(AES.block_size)
    cipher = AES.new(key, AES.MODE_CBC, iv)
    return iv + cipher.encrypt(chaine)


    

def DecodeAES(chaine,key):
    """ Déchiffre chaine. La clef key est un tableau de 16 éléments.
        Les caractères espace en fin de la chaine résultatante seront supprimés."""
    iv = chaine[:AES.block_size]
    keystring =  ''.join((str(key)) for e in chaine)
    cipher = AES.new(key, AES.MODE_CBC, iv)
    plaintext = cipher.decrypt(chaine[AES.block_size:])
    return plaintext.rstrip(b"\0")

def Contient(aiguille,chaine):
    """ Résultat True si le paramètre chaine contient la chaine aiguille."""
    res = False
    if chaine.find(aiguille) >= 0 :
        res = True
    return res

def EstImprimable(caractere):
    """ Liste des caractères imprimables :
        0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!"#$%&'()*+,-./:;<=>?@[\]^_`{|}~ """
    res = False
    imprimable = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ "
    if imprimable.find(caractere) >=0 :
        res = True
    return res

def Remplace(chaine,avant,apres):
    """ Remplace les occurrences de avant par apres dans chaine."""
    chaine = chaine.replace(avant,apres)
    return chaine

def Extraire(chaine,separation,n):
    """ Retourne la valeur du nième champ de chaine.
        Les champs sont séparés par le caractère séparation."""
    champ = chaine.split(separation)
    return champ[n]

def Format(n):
    """ Retourne une chaine de caractères de 4 caractères pour tout nombre entier de 0 à  9999
        Les valeurs seront précédées de 0."""
    strn = str(n)
    if(len(strn) < 4): 
        while(len(strn) < 4):
            strn = "0" + strn 
    return strn

def main():
    """ Tests, toutes les lignes sont correctes (résultat : True). Complèter les fonctions."""
    print (Xor(" $--.","A")=="aello")
    print (Xor("-/+-43","ABA")=="Bonjour")
    print (Indice([1,2,3,4,5,6],3)==2)
    print (EncodeBase64(b"Une Chaine")==b"VW5lIENoYWluZQ==")
    print (DecodeBase64(b"VW5lIENoYWluZQ==")==b"Une Chaine")
    print (EncodeAES(b"Elements",[2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,6])==b"\xcb[q(\x07\xe70\xff\x13D\xfe\xf9\x9eQ\x08!")
    print (DecodeAES(b"\xcb[q(\x07\xe70\xff\x13D\xfe\xf9\x9eQ\x08!",[2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,6])==b"Elements")
    print (Contient("OK","Le resultat est OK !")==True)
    print (Contient("OK","Le resultat est Ok !")==False)
    print (EstImprimable("A")==True)
    print (EstImprimable("\x07")==False)
    print (EstImprimable(" ")==True)
    print (Remplace("Ceci est une string typique","string","chaine")=="Ceci est une chaine typique")
    print (Extraire("ROUGE,0034,4EF563",",",1)=="0034")
    print (Format(3)=="0003")
    print (Format(123)=="0123")
    return


if __name__ == '__main__':
    main()
