CMAKE_MINIMUM_REQUIRED ( VERSION 3.10 )

SET ( LIBSRCS
	mytools.cpp
)

SET ( SRCS
	main.cpp
)

ADD_LIBRARY ( mytools ${LIBSRCS} )
#TARGET_INCLUDE_DIRECTORIES ( mytools PUBLIC ../include )

ADD_EXECUTABLE ( pluser ${SRCS} )
ADD_EXECUTABLE ( minuser ${SRCS} )
ADD_EXECUTABLE ( multipler ${SRCS} )
ADD_EXECUTABLE ( divider ${SRCS} )

TARGET_COMPILE_DEFINITIONS( pluser PUBLIC PLUS )
TARGET_COMPILE_DEFINITIONS( minuser PUBLIC MINUS )
TARGET_COMPILE_DEFINITIONS( multipler PUBLIC MULTIPLE )
TARGET_COMPILE_DEFINITIONS( divider PUBLIC DIVIDE )

TARGET_LINK_LIBRARIES( pluser plus mytools )
TARGET_LINK_LIBRARIES( minuser minus mytools )
TARGET_LINK_LIBRARIES( multipler multiple mytools )
TARGET_LINK_LIBRARIES( divider divide mytools )
