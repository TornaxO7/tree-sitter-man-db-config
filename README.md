A tree sitter grammar for the `man_db.conf` file format. See `man 5 manpath` for more information.

# Status

Implementation is complete. Only bug fixes will be applied.

# Example

This file

```
# comment

MANDATORY_MANPATH /test /yo
MANPATH_MAP /kekw /bro
MANDB_MAP /yes /no

DEFINE something awesome
SECTION yes

MINCATWIDTH 69
MAXCATWIDTH 42
CATWIDTH 1337
NOCACHE
```

will result into the following tree:

```
(file
	(comment)
	(mandatory_manpath
		manpath_element: (path)
	)
	(manpath_map
		path_element: (path)
		manpath_element: (path)
	)
	(mandb_map
		manpath_element: (path)
		catpath_element: (path)
	)
	(define
		key: (word)
		value: (word)
	)
	(section (word))
	(mincatwidth (width))
	(maxcatwidth (width))
	(catwidth (width))
	(nocache)
)
```
