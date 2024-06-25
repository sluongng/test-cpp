cc_binary(
    name = "hello_world",
    srcs = ["main.cc"],
)

platform(
    name = "linux_gcc_13",
    exec_properties = {
        "container-image": "docker://gcc:13@sha256:8ae888190cfc1444e13f52ae3a3ad68737599dbb2c0af509d96e5cf92d079b57",
    },
    parents = ["@buildbuddy_toolchains//:platform_linux"],
)
