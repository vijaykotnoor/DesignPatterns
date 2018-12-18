/*
 * GenericSingleton.h
 *
 *  Created on: Dec 18, 2018
 *      Author: vkotnoor
 */

#ifndef GENERICSINGLETON_H_
#define GENERICSINGLETON_H_
template <typename T>
class GenericSingleton {
public:
	~GenericSingleton() = default;
	//Meyers singleton
	//Thread safe as the static is used inside the function.
	static T* getInstance()
	{
		static T instance;
		return &instance;
	}

	GenericSingleton() = delete;
	GenericSingleton(const GenericSingleton&) = delete;
	GenericSingleton& operator=(const GenericSingleton&) = delete;
};

#endif /* GENERICSINGLETON_H_ */
