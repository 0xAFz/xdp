#include <linux/types.h>
#include <linux/bpf.h>
#include <bpf/bpf_helpers.h>

SEC("xdp")
int xdp_paas_kernel_prog(struct xdp_md *ctx) {
    bpf_printk("XDP packet received!\n");
    return XDP_PASS;
}

char LICENSE[] SEC("license") = "GPL";
