#include "Var.h"

void var::convertTo(Type targetType)
{
	if (valueType == targetType)
		return;

	if (targetType == Type::INT){
		if (valueType == Type::DOUBLE)
			data.intValue = static_cast<int>(data.doubleValue);
		else if (valueType == Type::STRING)
		data.intValue = std::stoi(*data.stringValue);
	}
	else if (targetType == Type::DOUBLE){
		if (valueType == Type::INT)
			data.doubleValue = static_cast<double>(data.intValue);
		else if (valueType == Type::STRING)
			data.doubleValue = std::stod(*data.stringValue);
	}
	else if (targetType == Type::STRING){
		if (valueType == Type::INT)
			data.stringValue = new std::string(std::to_string(data.intValue));
		else if (valueType == Type::DOUBLE)
			data.stringValue = new std::string(std::to_string(data.doubleValue));
	}
	valueType = targetType;
}

var::var(){
	valueType = Type::INT;
	data.intValue = 0;
}

var::var(int value){
	valueType = Type::INT;
	data.intValue = value;
}

var::var(double value){
	valueType = Type::DOUBLE;
	data.doubleValue = value;
}

var::var(const std::string& value){
	valueType = Type::STRING;
	data.stringValue = new std::string(value);
}

var::~var(){
	if (valueType == Type::STRING)
		delete data.stringValue;
}

var::var(const var& other) {
	valueType = other.valueType;
	if (valueType == Type::STRING)
		data.stringValue = new std::string(*other.data.stringValue);
	else
		data = other.data;
}

var& var::operator=(const var& other) {
	if (this == &other)
		return *this;

	if (valueType == Type::STRING)
		delete data.stringValue;

	valueType = other.valueType;
	if (valueType == Type::STRING)
		data.stringValue = new std::string(*other.data.stringValue);
	else
		data = other.data;

	return *this;
}

var var::operator+(const var& other) const {
	var result(*this);
	result += other;
	return result;
}

var var::operator-(const var& other) const {
	var result(*this);
	result -= other;
	return result;
}

var var::operator*(const var& other) const {
	var result(*this);
	result *= other;
	return result;
}

var var::operator/(const var& other) const {
	var result(*this);
	result /= other;
	return result;
}

var& var::operator+=(const var& other) {
	if (valueType == Type::STRING)
		*data.stringValue += other.toString();
	else {
		convertTo(Type::DOUBLE);
		data.doubleValue += other.toDouble();
	}
	return *this;
}

var& var::operator-=(const var& other) {
	convertTo(Type::DOUBLE);
	data.doubleValue -= other.toDouble();
	return *this;
}

var& var::operator*=(const var& other) {
	convertTo(Type::DOUBLE);
	data.doubleValue *= other.toDouble();
	return *this;
}

var& var::operator/=(const var& other) {
	convertTo(Type::DOUBLE);
	data.doubleValue /= other.toDouble();
	return *this;
}

bool var::operator<(const var& other) const {
	if (valueType == Type::STRING)
		return *data.stringValue < other.toString();
	else if (valueType == Type::INT)
		return data.intValue < other.toInt();
	else
		return data.doubleValue < other.toDouble();
}

bool var::operator>(const var& other) const {
	if (valueType == Type::STRING)
		return *data.stringValue > other.toString();
	else if (valueType == Type::INT)
		return data.intValue > other.toInt();
	else
		return data.doubleValue > other.toDouble();
}

bool var::operator<=(const var& other) const {
	if (valueType == Type::STRING)
		return *data.stringValue <= other.toString();
	else if (valueType == Type::INT)
		return data.intValue <= other.toInt();
	else
		return data.doubleValue <= other.toDouble();
}

bool var::operator>=(const var& other) const {
	if (valueType == Type::STRING)
		return *data.stringValue >= other.toString();
	else if (valueType == Type::INT)
		return data.intValue >= other.toInt();
	else
		return data.doubleValue >= other.toDouble();
}

bool var::operator==(const var& other) const {
	if (valueType == Type::STRING)
		return *data.stringValue == other.toString();
	else if (valueType == Type::INT)
		return data.intValue == other.toInt();
	else
		return data.doubleValue == other.toDouble();
}

bool var::operator!=(const var& other) const {
	if (valueType == Type::STRING)
		return *data.stringValue != other.toString();
	else if (valueType == Type::INT)
		return data.intValue != other.toInt();
	else
		return data.doubleValue != other.toDouble();
}

int var::toInt() const {
	if (valueType == Type::STRING)
		// stoi() converts string to int
		return std::stoi(*data.stringValue);
	else if (valueType == Type::INT)
		return data.intValue;
	else
		return static_cast<int>(data.doubleValue);
}

double var::toDouble() const {
	if (valueType == Type::STRING)
		// stod() converts string to double
		return std::stod(*data.stringValue);
	else if (valueType == Type::INT)
		return static_cast<double>(data.intValue);
	else
		return data.doubleValue;
}

const char* var::toString() const {
	if (valueType == Type::STRING)
		return data.stringValue->c_str();
	else if (valueType == Type::INT)
		// c_str() converts int to string
		return std::to_string(data.intValue).c_str();
	else
		return std::to_string(data.doubleValue).c_str();
}
