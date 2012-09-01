/*
 * Route.h
 *
 *  Created on: Sep 1, 2012
 *      Author: pnewman
 */

#ifndef ROUTE_H_
#define ROUTE_H_

/*
 *
 */

#include "MOOS/libMOOS/Utils/IPV4Address.h"
#include <string>

namespace MOOS {

class Route {
public:
	Route();
	virtual ~Route();

	MOOS::IPV4Address dest_address;
	std::string dest_name;
	std::string src_name;
	bool multicast;
	std::string to_string() const;

};

}

#endif /* ROUTE_H_ */
