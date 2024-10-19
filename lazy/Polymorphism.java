class Animal{ 
 public void AnimalSound(){
  System.out.println("The animal makes a sound");
 }
}

class Dog extends Animal{
 public void AnimalSound(){
  System.out.println("Dog: BARKK BARKKKK");
 }
}


class Cat extends Animal{
 public void AnimalSound(){
  System.out.println("Cat: mewooowwwwwww");
 }
}



public class Polymorphism{
 public static void main(String[] args) {
  Animal animal = new Animal();
  Animal blacky = new Cat();
  Animal browny = new Dog();
  animal.AnimalSound();
  blacky.AnimalSound();
  browny.AnimalSound();
 }
}