Python - Almost a circle

Created by Chukwudike Igwe

Task 1:  If it's not tested it doesn't work.
All your files, classes and methods must be unit tested and be PEP 8 validated.

Task 2: Write the first class Base:

Create a folder named models with an empty file __init__.py inside - with this file, the folder will become a Python package

Create a file named models/base.py:

Class Base:
private class attribute __nb_objects = 0
class constructor: def __init__(self, id=None)::
if id is not None, assign the public instance attribute id with this argument value - you can assume id is an integer and you don’t need to test the type of it
otherwise, increment __nb_objects and assign the new value to the public instance attribute id

Task 3: Write the class Rectangle that inherits from Base:

In the file models/rectangle.py
Class Rectangle inherits from Base
Private instance attributes, each with its own public getter and setter:
__width -> width
__height -> height
__x -> x
__y -> y
Class constructor: def __init__(self, width, height, x=0, y=0, id=None):
Call the super class with id - this super call with use the logic of the __init__ of the Base class
Assign each argument width, height, x and y to the right attribute
Why private attributes with getter/setter? Why not directly public attribute?

Task 4: Update the class Rectangle by adding validation of all setter methods and instantiation (id excluded):

If the input is not an integer, raise the TypeError exception with the message: <name of the attribute> must be an integer. Example: width must be an integer
If width or height is under or equals 0, raise the ValueError exception with the message: <name of the attribute> must be > 0. Example: width must be > 0
If x or y is under 0, raise the ValueError exception with the message: <name of the attribute> must be >= 0.

Task 5: Update the class Rectangle by adding the public method def area(self): that returns the area value of the Rectangle instance.

Task 6: Update the class Rectangle by adding the public method def display(self): that prints in stdout the Rectangle instance with the character # - you don’t need to handle x and y here.

Task 7: Update the class Rectangle by overriding the __str__ method so that it returns [Rectangle] (<id>) <x>/<y> - <width>/<height>

Task 8: Update the class Rectangle by improving the public method def display(self): to print in stdout the Rectangle instance with the character # by taking care of x and y

Task 9: Update the class Rectangle by adding the public method def update(self, *args): that assigns an argument to each attribute:

1st argument should be the id attribute
2nd argument should be the width attribute
3rd argument should be the height attribute
4th argument should be the x attribute
5th argument should be the y attribute

Task 10: Update the class Rectangle by updating the public method def update(self, *args): by changing the prototype to update(self, *args, **kwargs) that assigns a key/value argument to attributes:

**kwargs can be thought of as a double pointer to a dictionary: key/value
As Python doesn’t have pointers, **kwargs is not literally a double pointer – describing it as such is just a way of explaining its behavior in terms you’re already familiar with
**kwargs must be skipped if *args exists and is not empty
Each key in this dictionary represents an attribute to the instance

Task 11: Write the class Square that inherits from Rectangle:

In the file models/square.py
Class Square inherits from Rectangle
Class constructor: def __init__(self, size, x=0, y=0, id=None)::
Call the super class with id, x, y, width and height - this super call will use the logic of the __init__ of the Rectangle class. The width and height must be assigned to the value of size
You must not create new attributes for this class, use all attributes of Rectangle - As reminder: a Square is a Rectangle with the same width and height
All width, height, x and y validation must inherit from Rectangle - same behavior in case of wrong data
The overloading __str__ method should return [Square] (<id>) <x>/<y> - <size> - in our case, width or height

Task 12: Update the class Square by adding the public getter and setter size

The setter should assign (in this order) the width and the height - with the same value
The setter should have the same value validation as the Rectangle for width and height - No need to change the exception error message (It should be the one from width)

Task 13: Update the class Square by adding the public method def update(self, *args, **kwargs) that assigns attributes:

*args is the list of arguments - no-keyworded arguments
1st argument should be the id attribute
2nd argument should be the size attribute
3rd argument should be the x attribute
4th argument should be the y attribute

Task 14: Update the class Rectangle by adding the public method def to_dictionary(self): that returns the dictionary representation of a Rectangle:

This dictionary must contain:

id
width
height
x
y

Task 15: Update the class Square by adding the public method def to_dictionary(self): that returns the dictionary representation of a Square:

This dictionary must contain:

id
size
x
y

Task 16: JSON is one of the standard formats for sharing data representation.

Update the class Base by adding the static method def to_json_string(list_dictionaries): that returns the JSON string representation of list_dictionaries:

list_dictionaries is a list of dictionaries
If list_dictionaries is None or empty, return the string: "[]"
Otherwise, return the JSON string representation of list_dictionaries

Task 17: Update the class Base by adding the class method def save_to_file(cls, list_objs): that writes the JSON string representation of list_objs to a file:

list_objs is a list of instances who inherits of Base - example: list of Rectangle or list of Square instances
If list_objs is None, save an empty list
The filename must be: <Class name>.json - example: Rectangle.json
You must use the static method to_json_string (created before)
