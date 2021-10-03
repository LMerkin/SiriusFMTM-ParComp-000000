// vim:ts=2:et
//===========================================================================//
//                                "ServerSetup.h":                           //
//                          Common Setup for TCP Servers                     //
//===========================================================================//
#pragma once

// Returns the Acceptor Socket, or (-1) on error:
extern int ServerSetup(int argc, char* argv[]);
