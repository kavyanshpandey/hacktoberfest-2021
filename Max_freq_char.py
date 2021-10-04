from collections import Counter
test_string = "Hacktoberfest Lets Hack"
print ("The original string is : " + test_string)
res = Counter(test_string)
res = max(res, key = res.get) 
print ("The maximum of all characters inHacktoberfest Lets  Hack is : " + str(res))
