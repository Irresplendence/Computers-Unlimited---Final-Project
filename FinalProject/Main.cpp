#include "menu.h"
#include "splash.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	system("mode 650");
	system("Color 1A");
	system("cls");

	//http://www.kammerl.de/ascii/AsciiSignature.php
	//(Font: 'dotmatrix')
	string art = "";
	art += "       _                        _         _                                                                        _  _  _                                                 \n";
	art += "     _(_)_                     (_)       (_)                                                                    _ (_)(_)(_) _                                              \n";
	art += "   _(_) (_)_    _  _  _  _   _ (_) _  _  (_) _  _  _       _  _  _     _  _  _  _   _               _          (_)         (_)    _  _  _     _  _  _  _      _  _  _      \n";
	art += " _(_)     (_)_ (_)(_)(_)(_)_(_)(_)(_)(_) (_)(_)(_)(_)_  _ (_)(_)(_) _ (_)(_)(_)(_)_(_)_           _(_)         (_)             _ (_)(_)(_) _ (_)(_)(_)(_)_   (_)(_)(_) _   \n";
	art += "(_) _  _  _ (_)(_)        (_)  (_)       (_)        (_)(_)         (_)(_)        (_) (_)_       _(_)           (_)            (_)         (_)(_)        (_)   _  _  _ (_)  \n";
	art += "(_)(_)(_)(_)(_)(_)        (_)  (_)     _ (_)        (_)(_)         (_)(_)        (_)   (_)_   _(_)             (_)          _ (_)         (_)(_)        (_) _(_)(_)(_)(_)  \n";
	art += "(_)         (_)(_)        (_)  (_)_  _(_)(_)        (_)(_) _  _  _ (_)(_)        (_)     (_)_(_)               (_) _  _  _ (_)(_) _  _  _ (_)(_)        (_)(_)_  _  _ (_)_ \n";
	art += "(_)         (_)(_)        (_)    (_)(_)  (_)        (_)   (_)(_)(_)   (_)        (_)      _(_)                    (_)(_)(_)      (_)(_)(_)   (_)        (_)  (_)(_)(_)  (_)\n";
	art += "                                                                                     _  _(_)                                                                               \n";
	art += "                                                                                    (_)(_)                                                                                 \n";
	art += "                                                                                                                                                                           \n";
	art += "      _  _  _                                       _                      _                 _                                                 \n";
	art += "     (_)(_)(_)                                     (_)                    (_)               (_)                                                \n";
	art += "        (_)   _  _  _        _  _  _    _  _  _    (_) _  _  _            (_)             _  _     _  _  _  _      _  _  _  _     _  _  _  _   \n";
	art += "        (_)  (_)(_)(_) _   _(_)(_)(_)_ (_)(_)(_) _ (_)(_)(_)(_)_          (_)            (_)(_)   (_)(_)(_)(_)_  _(_)(_)(_)(_)   (_)(_)(_)(_)_ \n";
	art += "        (_)   _  _  _ (_) (_)       (_)         (_)(_)        (_)         (_)               (_)  (_) _  _  _ (_)(_)_  _  _  _   (_) _  _  _ (_)\n";
	art += " _      (_) _(_)(_)(_)(_) (_)       (_)         (_)(_)        (_)         (_)               (_)  (_)(_)(_)(_)(_)  (_)(_)(_)(_)_ (_)(_)(_)(_)(_)\n";
	art += "(_)  _  (_)(_)_  _  _ (_)_(_)_  _  _(_) _  _  _ (_)(_) _  _  _(_)         (_) _  _  _  _  _ (_) _(_)_  _  _  _     _  _  _  _(_)(_)_  _  _  _  \n";
	art += " (_)(_)(_)   (_)(_)(_)  (_) (_)(_)(_)  (_)(_)(_)   (_)(_)(_)(_)           (_)(_)(_)(_)(_)(_)(_)(_) (_)(_)(_)(_)   (_)(_)(_)(_)    (_)(_)(_)(_) \n";
	art += "                                                                                                                                               \n";
	art += " _           _     _     _           _                                            _             _                   _                  _               _        \n";
	art += "(_) _     _ (_)   (_)   (_)         (_)                                          (_)           (_)                 (_)                (_)             (_)       \n";
	art += "(_)(_)   (_)(_) _  _  _ (_) _  _  _  _  _               _  _  _  _               (_)           (_) _       _  _  _  _      _  _  _  _ (_) _  _  _   _ (_) _  _  \n";
	art += "(_) (_)_(_) (_)(_)(_)(_)(_)(_)(_)(_)(_)(_)_           _(_)(_)(_)(_) _            (_)     _     (_)(_)_  _ (_)(_)(_)(_)   _(_)(_)(_)(_)(_)(_)(_)(_)_(_)(_)(_)(_) \n";
	art += "(_)   (_)   (_)   (_)   (_)         (_)  (_)_       _(_)   _  _  _ (_)           (_)   _(_)_   (_)  (_)(_)         (_)  (_)        (_)(_)        (_)  (_)       \n";
	art += "(_)         (_)   (_)   (_)     _   (_)    (_)_   _(_)   _(_)(_)(_)(_)           (_)  (_) (_)  (_)  (_)            (_)  (_)        (_)(_)        (_)  (_)     _ \n";
	art += "(_)         (_) _ (_) _ (_)_  _(_)_ (_) _    (_)_(_)    (_)_  _  _ (_)_          (_)_(_)   (_)_(_)  (_)          _ (_) _(_)_  _  _ (_)(_)        (_)  (_)_  _(_)\n";
	art += "(_)         (_)(_)(_)(_)  (_)(_) (_)(_)(_)    _(_)        (_)(_)(_)  (_)           (_)       (_)    (_)         (_)(_)(_) (_)(_)(_)(_)(_)        (_)    (_)(_)  \n";
	art += "                                         _  _(_)                                                                           _  _  _ (_)                          \n";
	art += "                                        (_)(_)                                                                            (_)(_)(_)                             \n";

	cout << art;
	cin.get();
	splashScreen();
	mainMenu();
	return 0;
}