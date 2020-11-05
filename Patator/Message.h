#pragma once

enum MessageType:char {
	TIME_STEP,
	INPUT,
	DEBUG,
	ERROR,
};

/*
 * The messaging system works as follows:
 * We have a messageType that determines the structure type to which content will point to,
 * all these structure types are defined in Message_contents.h
 * We should create the data structures on the heap in case we store the message for later.
 * We should also not forget to delete the message once we finish processing it.
 * for example we could have:
	mType = INPUT,
	content is of type MessageInput*
 */
struct Message {
	MessageType mType;
	void* content;
};
