// TODO: C++ Assignment 10

//! TODO: Assignment-38: Inheritance

//! 1. Define a class Person with name and age as instance variables as private members. Provide setters and getters as protected methods. Derive a class Employee from Person class with private instance variable salary. Provide public methods setEmployee() and showEmployee().

//! 2. Define a class Circle with radius as private Instance variable and setRadius(), getRadius(), getArea() as public instance methods. Define a class ThickCircle as a subclass of Circle with thickness as private instance variable and getThickness(). setThickness() as public instance methods. Provide an overridden method getArea() to calculate area of thick portion of circle.

//! 3. Define a class Coordinate with x and y as instance variables. Define overloaded versions of getDistance(), first with no argument calculating distance from origin, and second with one argument of Coordinate type to calculate distance between two coordinates. Also define other methods if required.

//! 4. Define a class Shape with shapeName as instance variable. Provide setter and getter.

//! 5. In question 3 & 4, derive a class StraightLine from Shape with two Coordinate type objects as instance members. Provide methods to setLine(), getDistance() and showLine()

//! 6. Define a class Game with an array of 5 int variables as instance member to store the score of each of 5 rounds. Provide method to setScore(int round, int score). Also provide method getScore(int round).

//! 7. In question 6, derive a class GameResult with an array of 5 int type variables to store the result in each round. Result value is 2 for win, 0 for loose and 1 for draw. Provide methods to set Result and getResult. Write method to calculate final result of the game.

//! 8. Define a class Actor with name, age as instance variables and setter, getters as instance methods. Define a class TVActor as a derived class of Actor with instance variable to store number of TV projects done or running and define setter, getter. Also define setTVActor() and showTVActor(). Define a class MovieActor as a derived class of Actor with instance variable to store number of movies doe or running and define setter, getter. Also define setMovieActor() and showMovie Actor(). Derive a class AllScreenActor from TVActor and MovieActor. Define a method to setActorData() and showActorData().