❯ docker-compose up -d
[+] Running 3/3
 ✔ Network observabilidade_observability  Creat...                                         0.3s
 ✔ Container kibana                       Started                                          0.4s
 ✔ Container elasticsearch                Started                                          0.4s

❯ docker network ls
NETWORK ID     NAME                            DRIVER    SCOPE
d87e431f522d   observabilidade_observability   bridge    local

❯ docker logs elasticsearch

{"type": "server", "timestamp": "2024-01-03T22:39:52,262Z", "level": "INFO", "component": "o.e.n.Node", "cluster.name": "es-docker-cluster", "node.name": "elasticsearch", "message": "version[7.13.0], pid[7], build[default/docker/5ca8591c6fcdb1260ce95b08a8e023559635c6f3/2021-05-19T22:22:26.081971330Z], OS[Linux/6.5.11-linuxkit/amd64], JVM[AdoptOpenJDK/OpenJDK 64-Bit Server VM/16/16+36]" }