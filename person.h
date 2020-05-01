#ifndef PERSON_H_
#define PERSON_H_

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

class Person{
public:
	Person(std::string gh); // добавить имя для персонажа

	Person();

	~Person();

	void SetCharacter(std::string gh); // добавить класс персонажа и установить его хп

	void YouAreWarrior(); // сделать воином

	void YouAreArcher(); // сделать лучником

	void YouAreRogue(); // сделать вором

	void SetHP(int gh); // установить хп

	void SetModel(sf::Sprite new_model); // установить модельку

	void SetTexture(const std::string& name); // установить имя файла для модельки

	void SetPosition(float x, float y); // установить местоположение для персонажа

	void move(float x, float y); // передвижение персонажа

	sf::Vector2f GetPosition() const; // получить местоположение персонажа

	sf::Sprite GetModel() const; // получить модельку героя

private:

	void SetClass(std::string gh); // установить класс

	std::string class_type;
	int health_point = 0;
	std::string name;
	sf::Sprite model_of_hero;
	std::string name_texture;
};

#endif /* PERSON_H_ */