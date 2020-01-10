/* Header for OpCode0514 class
   Copyright (C) 2018-2020 Adam Leszczynski.

This file is part of Open Log Replicator.

Open Log Replicator is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License as published
by the Free Software Foundation; either version 3, or (at your option)
any later version.

Open Log Replicator is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
Public License for more details.

You should have received a copy of the GNU General Public License
along with Open Log Replicator; see the file LICENSE.txt  If not see
<http://www.gnu.org/licenses/>.  */

#include "OpCode0513.h"

#ifndef OPCODE0514_H_
#define OPCODE0514_H_

namespace OpenLogReplicator {

    class RedoLogRecord;

    class OpCode0514: public OpCode0513 {
    public:
        OpCode0514(OracleEnvironment *oracleEnvironment, RedoLogRecord *redoLogRecord);
        virtual ~OpCode0514();

        virtual void process();
    };
}

#endif