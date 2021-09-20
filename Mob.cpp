#include "Mob.h"

Mob::Mob() {
	Ten = "";
	CapDo = 1;
}
Mob::Mob(std::string Name, unsigned int Level, int Class) {
	this->setTen(Name);
	this->setCapDo(Level);

	if (Class != -1) {
		this->setHe(Class);
	}

	this->setSatThuong(1);
}

std::string Mob::getTen() { return this->Ten; }
void Mob::setTen(std::string Name) {
	if (Name == "") {
		printf("Ten khong duoc de trong.");
	}
	else {
		Ten = Name;
	}
}
unsigned int Mob::getCapDo() { return this->CapDo; }
void Mob::setCapDo(int Level) {
	if (Level < 1) {
		printf("Cap do khong duoc duoi 1.");
	}
	else { CapDo = Level; }
}
NguHanh Mob::getHe() {
	return this->He;
}
std::string Mob::getHeName() {
	return this->getHe().getTen();
}
void Mob::setHe(int Class) {
	switch (Class)
	{
	case 1:
		this->He = NguHanh::NguHanh("Kim", "Thuy", "Moc");
		break;
	case 2:
		this->He = NguHanh::NguHanh("Moc", "Hoa", "Tho");
		break;
	case 3:
		this->He = NguHanh::NguHanh("Thuy", "Moc", "Hoa");
		break;
	case 4:
		this->He = NguHanh::NguHanh("Hoa", "Tho", "Kim");
		break;
	case 5:
		this->He = NguHanh::NguHanh("Tho", "Kim", "Thuy");
		break;
	default:
		printf("Khong co he.");
		break;
	}
}

void Mob::setSatThuong(int Damage) { SatThuong = Damage; }
int Mob::getSatThuong() {
	return this->SatThuong;
}

void Mob::TanCong(Mob muctieu) {}

void Mob::Xuat() {
}