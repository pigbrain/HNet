valgrind --tool=memcheck --leak-check=full --error-limit=no --track-origins=yes --show-reachable=yes --log-file=memcheck.txt -v ./hnet_clnt 211.245.106.28 5010
