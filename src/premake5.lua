project("TweakDBext")
    targetdir(paths.build())

    kind("SharedLib")
    language("C++")
    pchheader("stdafx.hpp")
    pchsource("stdafx.cpp")

    includedirs(
    {
        ".",
        paths.deps("red4ext.sdk", "include")
    })

    files(
    {
        "**.cpp",
        "**.hpp"
    })