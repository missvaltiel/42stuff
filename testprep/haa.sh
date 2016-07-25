ldapsearch -QLLL "uid=z*" cn | grep -v dn | grep '[:blank:]'
