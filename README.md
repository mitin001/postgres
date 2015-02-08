PostgreSQL Database Management System, modified with an addition of the ```IGNORE``` operator
=======================================================================================

Syntax extension
----------------
Imagine table T contains n tuples. The ```IGNORE a``` operation hides the first a tuples in the query:
* ```SELECT * FROM T IGNORE a``` returns tuples a + 1, a + 2, ..., n.

The ```IGNORE``` operation can be combined with the ```LIMIT``` operation in the following ways to produce respective outputs:
* ```SELECT * FROM T LIMIT c IGNORE b``` returns tuples b + 1, b + 2, ..., c.
* ```SELECT * FROM T LIMIT f OFFSET e IGNORE d``` returns tuples d + 2, d + 3, ..., f + e.

Text of the original README
-------------------------------

This directory contains the source code distribution of the PostgreSQL
database management system.

PostgreSQL is an advanced object-relational database management system
that supports an extended subset of the SQL standard, including
transactions, foreign keys, subqueries, triggers, user-defined types
and functions.  This distribution also contains C language bindings.

PostgreSQL has many language interfaces, many of which are listed here:

	http://www.postgresql.org/download

See the file INSTALL for instructions on how to build and install
PostgreSQL.  That file also lists supported operating systems and
hardware platforms and contains information regarding any other
software packages that are required to build or run the PostgreSQL
system.  Changes between all PostgreSQL releases are recorded in the
file HISTORY.  Copyright and license information can be found in the
file COPYRIGHT.  A comprehensive documentation set is included in this
distribution; it can be read as described in the installation
instructions.

The latest version of this software may be obtained at
http://www.postgresql.org/download/.  For more information look at our
web site located at http://www.postgresql.org/.
