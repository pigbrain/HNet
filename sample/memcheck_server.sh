valgrind --tool=memcheck --leak-check=full --error-limit=no --track-origins=yes --show-reachable=yes --log-file=memcheck.txt -v ./hnet_server
