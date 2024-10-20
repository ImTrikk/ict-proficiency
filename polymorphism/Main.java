class Animal{

 void sound(){
  System.out.println("Animal sound");
 }
}

class Dog extends Animal{
 void sound(){
  System.out.println("Bark Bark Bark");
 }
}

class Cat extends Animal{
 void sound(){
  System.out.println("Meow Meow Meow");
 }
}

public class Main{
 public static void main(String[] args) {
   Animal browny = new Dog();
   Animal whitey = new Cat();

   browny.sound();
   whitey.sound();
 }
}