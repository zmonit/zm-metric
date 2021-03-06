/*  =========================================================================
    rule_tester - Class for testing rule file

    Copyright (C) 2016 - 2017 Tomas Halman                                 
                                                                           
    This program is free software; you can redistribute it and/or modify   
    it under the terms of the GNU General Public License as published by   
    the Free Software Foundation; either version 2 of the License, or      
    (at your option) any later version.                                    
                                                                           
    This program is distributed in the hope that it will be useful,        
    but WITHOUT ANY WARRANTY; without even the implied warranty of         
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          
    GNU General Public License for more details.                           
                                                                           
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.            
    =========================================================================
*/

#ifndef RULE_TESTER_H_INCLUDED
#define RULE_TESTER_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @interface
//  Create a new rule_tester
ZM_METRIC_EXPORT int
    rule_tester (
        const char *file,
        int snmpversion,
        const char *community,
        const char *addr);

ZM_METRIC_EXPORT void
    rule_tester_test (bool verbose);
//  @end

#ifdef __cplusplus
}
#endif

#endif
