HOURS_HAND = int(input("HOURS HAND : "))
MINUTES_HAND = int(input("MINUTES HAND : "))

if 1<=HOURS_HAND<=24  and 1<=MINUTES_HAND<=60 :
    if 1<=HOURS_HAND<=12 :
         HOURS_HAND = HOURS_HAND
    else:
        HOURS_HAND =  HOURS_HAND - 12
    ANGLE_OF_HOURS_HAND = ((HOURS_HAND) * 30 + (MINUTES_HAND) * 1 / 2)  # ANGLE MADE BY HOURS HAND IN CLOCK

    ANGLE_OF_MINUTES_HAND = (MINUTES_HAND) * 6                          # ANGLE MADE BY MINUTES HAND IN CLOCK

    FORMULA = float(ANGLE_OF_HOURS_HAND) - float(ANGLE_OF_MINUTES_HAND)


    if ANGLE_OF_HOURS_HAND > ANGLE_OF_MINUTES_HAND:
        FORMULA = FORMULA
    else:
        FORMULA = -FORMULA
    if FORMULA <= 180:
        print("THE ANGLE BETWEEN HOURS HAND AND MINUTES HAND : ", FORMULA, "DEGREES")
    else:
        print("THE ANGLE BETWEEN HOURS HAND AND MINUTES HAND : ", 360 - FORMULA, "DEGREES")
else:
    print("GIVE VALID HOURS AND MINUTES IN THE INPUT")
