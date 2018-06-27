// FOX PAGES SERVER VERSION
#DEFINE FOX_PAGES_VERSION			"Fox Pages Server 3.1.0"

// 64 BITS VERSION
//#DEFINE X64

// CRLF
#DEFINE CRLF						CHR(13)+CHR(10)

// HTTP
#DEFINE HEADER_DELIMITER			CHR(13)+CHR(10)+CHR(13)+CHR(10)
#DEFINE HTTP_PACKET_LENGTH			8192

// FCGI DEFINES
#DEFINE FCGI_HEADER_LEN				8
#DEFINE FCGI_VERSION_1				1

#DEFINE FCGI_BEGIN_REQUEST			1
#DEFINE FCGI_ABORT_REQUEST			2
#DEFINE FCGI_END_REQUEST			3
#DEFINE FCGI_PARAMS					4
#DEFINE FCGI_STDIN					5
#DEFINE FCGI_STDOUT					6
#DEFINE FCGI_STDERR					7
#DEFINE FCGI_DATA					8
#DEFINE FCGI_GET_VALUES				9
#DEFINE FCGI_GET_VALUES_RESULT		10
#DEFINE FCGI_UNKNOWN_TYPE			11
#DEFINE FCGI_MAXTYPE				(FCGI_UNKNOWN_TYPE)

#DEFINE FCGI_RESPONDER				1
#DEFINE FCGI_AUTHORIZER				2
#DEFINE FCGI_FILTER					3

#DEFINE FCGI_KEEP_CONN				1

#DEFINE FCGI_REQUEST_COMPLETE		0
#DEFINE FCGI_CANT_MPX_CONN			1
#DEFINE FCGI_OVERLOADED				2
#DEFINE FCGI_UNKNOWN_ROLE			3

//SOCKETWRENCH
#DEFINE USEFREEVERSION
#DEFINE CSWSOCK_CONTROL			"SocketTools.SocketWrench.6"

//SocketWrench 8
//#DEFINE CSWSOCK_CONTROL			"SocketTools.SocketWrench.8"
//#DEFINE CSWSOCK_LICENSE_KEY		"INSERT YOUR RUNTIME LICENSE HERE"

//SocketWrench 9
//#DEFINE CSWSOCK_CONTROL			"SocketTools.SocketWrench.9"
//#DEFINE CSWSOCK_LICENSE_KEY		"INSERT YOUR RUNTIME LICENSE HERE"