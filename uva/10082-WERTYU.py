def main():

    vector = ['`','1','2','3','4','5','6','7','8','9','0','-','=', ' ', ' ', 'Q','W','E','R','T','Y','U','I',
    'O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.'
    ,'/']

    while True :
        try:
            string = input()
        except EOFError:
                break
        stringLen = len(string)
        i = 0

        while  i < stringLen:
            vectorLen = (len(vector)) - 1
            while vectorLen >= 0:
                if string[i] == vector[vectorLen]:
                    print(vector[vectorLen-1], end="")
                    break
                vectorLen -= 1
            i += 1
        print()




if __name__ == '__main__':
    main()
