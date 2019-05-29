import time #Imports a module to add a pause

#Figuring out how users might respond
answer_A = ["A", "a"]
answer_B = ["B", "b"]
answer_C = ["C", "c"]
yes = ["Y", "y", "yes"]
no = ["N", "n", "no"]

#Grabbing objects
key = 0
flashlight = 0

required = ("\nYou can only choose option A, B, or C\n") #Cutting down on duplication
required2 = ("\nYou can only choose option A or B\n")

print("""Welcome to Kevins safari. Life can be
a bit interesting here; many of us enjoy the wilderness
...what will you think?\n\n""")


#The story is broken into sections, starting with "intro"
#When you see def name() it means you are defining a function which you will later call
def intro():
    choice = input("Would you like to explore the safari?\n >>> ")
    time.sleep(1) #this just means you are including a pause
    print("\n")
    if choice in yes: #see arrays above
        print("Perhaps a visit to the safari is in order.\n")
    elif choice in no:
        print ("\nGo on living a boring life with no animals. "
        "\n\nBut don't come crying when you are bored and lonely.")
        raise SystemExit #This will exit the program and bring you back to command line

def learn_more():
  print ("""The safari rangers tell you
they take reservations for those wanting to see
the animals. Do you: """)
  time.sleep(1)
  choice2 = input("""
    A. Make a reservation
    B. Decide this isn't worth your time\n
    >>> """)
  print("\n")
  if choice2 in answer_A:
        print("Be there tomorrow afternoon!")
  elif choice2 in answer_C:
        print ("\nGo on living a lame lifestyle!"
        "\n\nBut don't complain when you are bored n")
        raise SystemExit
  else:
        print(required)
        time.sleep(0.5)
        learn_more()
    #option_rock()

def appointment():
    print("""  \nThe next day, the ranger meets with you and asks what intrigues you?""")
    time.sleep(1)
    choice3 = input("""
    A. The swamp area
    B. The jungle area
    C. The fields\n
    >>> """)
    print("\n")
    if choice3 in answer_A:
          print("Really? The swamp area is boring and a waste of time.\n")
          time.sleep(0.5)
          print("""Feeling somewhat offended, you prepare to leave.\n""")
          key()
    elif choice3 in answer_B:
          print("""There is a large population of tigers and gorillas in the jungles of this safari.
          Also, frogs and snakes are commonly found in the area.\n""")
          raise SystemExit
    elif choice3 in answer_C:
          print("You are wasting your time if you want to explore the barren and quite fields.\n")
          time.sleep(1)
          terrestrial()
          raise SystemExit
    else:
          print(required)
          time.sleep(1)
          appointment()

def key():
    print("Pssssst...\n")
    time.sleep(0.75)
    print("As the safari is coming to an end, you hear someone calling you.\n")
    time.sleep(0.75)
    print("""You see a new park ranger.\n""")
    time.sleep(0.75)
    print("Yes?\n")
    time.sleep(0.75)
    print("""This park ranger says that you aren't wasting your time, and hands you a map.\n""")
    choice4 = input("""Do you leave the map, or do you keep and examine it?\n
    A. Leave the map, this ranger is creepy.
    B. Take the map, and secretly begin exploring on your own\n
    >>> """)
    print("\n")
    if choice4 in answer_A:
        print("You have little curiosity.\n")
        raise SystemExit
    elif choice4 in answer_B:
        print("Smart move, that map is going to become very important.\n")
    else:
          print(required2)
          key()

def coffeeshop():
    print("""Those approaching footsteps were from the stern ranger you had
your reservation with. He rudely reminded you that you were finished
and unwelcomed to the safari. You leave and find a quiet place to think about your next moves.\n""")
    time.sleep(0.75)
    print("""While contemplating,
you notice the ranger that gave you the map.\n""")
    time.sleep(0.75)
    print("""You try to avoid hin, but he comes up to you.\n""")
    time.sleep(0.75)
    print("""What do you want?\n""")
    time.sleep(0.75)
    print("""It is important that you explore the areas on the map.\n""")

def keyclue ():
    print("""On the map, you see stars next to the vast swamp and fields.""")

def terrestrial():
    print("""Really? extraterrestrial life?\n""")

#This is where you call all the functions so they run
intro()
learn_more()
appointment()
coffeeshop()