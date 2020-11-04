#pragma once

enum MessageType:char {
	TIME_STEP,
	INPUT,
	DEBUG,
	ERROR,
};

/// <summary>
/// Cette structure de donnees est le message que les pieces vont envoyer et recevoir au Bus
/// On doit envoyer le type de message a envoyer et un pointeur sur la valeur ou le groupement de
/// valeurs qui represente le message en lui meme
/// </summary>
struct Message {
	MessageType mType;
	void* content;
};
