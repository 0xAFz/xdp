# XDP

### Build
```bash
clang -O2 -target bpf -c xdp_pass_kernel.c -o xdp_pass_kernel.o
```

### Load
```bash
sudo ip link set dev lo xdpgeneric obj xdp_pass_kernel.o sec xdp
```

### Watch the logs
```bash
sudo cat /sys/kernel/debug/tracing/trace_pipe
```

### Unload
```bash
sudo ip link set dev lo xdpgeneric off
```
