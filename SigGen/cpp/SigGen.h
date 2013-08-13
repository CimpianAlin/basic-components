/*
 * This file is protected by Copyright. Please refer to the COPYRIGHT file distributed with this
 * source distribution.
 *
 * This file is part of REDHAWK Basic Components.
 *
 * REDHAWK Basic Components is free software: you can redistribute it and/or modify it under the terms of
 * the GNU Lesser General Public License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * REDHAWK Basic Components is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License along with this
 * program.  If not, see http://www.gnu.org/licenses/.
 */

#ifndef SIGGEN_IMPL_H
#define SIGGEN_IMPL_H

#include "SigGen_base.h"

class SigGen_i;

class SigGen_i : public SigGen_base
{
    ENABLE_LOGGING
    public:
        SigGen_i(const char *uuid, const char *label);
        ~SigGen_i();
        int serviceFunction();

    private:
        void streamIdChanged(const std::string& id);

    	std::vector<double> data;
    	double phase;
    	double chirp;
    	double sample_time_delta;
    	double delta_phase;
    	double delta_phase_offset;
    	long last_xfer_len;
    	BULKIO::StreamSRI sri;
    	bool sriUpdate;

};

#endif
