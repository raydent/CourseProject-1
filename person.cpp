#include "person.h"

Person::Person(std::string gh){
	name = gh;
}

Person::Person(){}

Person::~Person(){
	std::cout << "Your name is " << name << "\n" << "Your class is " << class_type
			<< "\n" << "Your health is " << health_point << "\n" << "Texture is on file: " << name_texture << std::endl;
}

void Person::SetCharacter(std::string gh){
	if(gh == "Warrior"){
		YouAreWarrior();
	}else if(gh == "Archer"){
		YouAreArcher();
	}else if(gh == "Rogue"){
		YouAreRogue();
	}
}

void Person::YouAreWarrior(){
	SetClass("Warrior");
	SetHP(100);
}

void Person::YouAreArcher(){
	SetClass("Archer");
	SetHP(70);
}

void Person::YouAreRogue(){
	SetClass("Rogue");
	SetHP(87);
}

void Person::SetClass(std::string gh){
	class_type = gh;
}

void Person::SetHP(int gh){
	health_point = gh;
}

void Person::SetModel(sf::Sprite new_model){
	model_of_hero = new_model;
}

void Person::SetTexture(const std::string& name){
	name_texture = name;
}

void Person::SetPosition(float x, float y){
	model_of_hero.setPosition(x, y);
}

void Person::move(float x, float y){
	model_of_hero.setPosition(model_of_hero.getPosition().x + x, model_of_hero.getPosition().y + y);
}

sf::Vector2f Person::GetPosition() const{
	return sf::Vector2f(model_of_hero.getPosition().x, model_of_hero.getPosition().y);
}

sf::Sprite Person::GetModel() const{
	return model_of_hero;
}