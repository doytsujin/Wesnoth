/* $Id: formula_debugger_fwd.cpp 48153 2011-01-01 15:57:50Z mordante $ */
/*
   Copyright (C) 2009 - 2011 by Yurii Chernyi <terraninfo@terraninfo.net>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/

/**
 * @file
 * Formula debugger - forward declaration and add_debug_info static function
 * */


#include "formula_debugger_fwd.hpp"
#include "formula_debugger.hpp"

namespace game_logic {

formula_debugger* add_debug_info(formula_debugger *fdb, int arg_number, const char *f_name)
{
	if (fdb==NULL) {
		return NULL;
	}
	fdb->add_debug_info(arg_number,f_name);
	return fdb;
}


variant evaluate_arg_callback(formula_debugger &fdb, const formula_expression &expression, const formula_callable &variables)
{
	return fdb.evaluate_arg_callback(expression,variables);
}


variant evaluate_formula_callback(formula_debugger &fdb, const formula &f, const formula_callable &variables)
{
	return fdb.evaluate_formula_callback(f,variables);
}


variant evaluate_formula_callback(formula_debugger &fdb, const formula &f)
{
	return fdb.evaluate_formula_callback(f);
}


} // end of namespace game_logic
