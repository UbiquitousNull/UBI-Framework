# Performance-Obsessed Game From Scratch

This repository is dedicated to building a game from the ground up with one
major guiding principle: **maximize computational speed**. Everything here—
from rendering pipelines to data structures—is built or chosen only if it
benefits raw performance. If a third-party library or framework introduces
unacceptable overhead, we cut it.

<!--## Features

- **Custom Rendering**: Direct use of [OpenGL](https://www.opengl.org/) or [Vulkan](https://www.vulkan.org/) for fine-grained control.
- **Data-Oriented Design**: Memory layouts (SoA, AoS) and caching strategies to minimize CPU stalls.
- **Minimal Dependencies**: Careful use of minimal libraries (e.g., [stb_image.h](https://github.com/nothings/stb/blob/master/stb_image.h)) for image loading, etc.
- **Profiling First**: Continuous profiling with CPU/GPU tools. We measure overhead before integrating anything.

## Goals

1. **Speed First**: Every line of code is written to preserve or enhance performance.
2. **Scalability**: Efficient for large-scale computations (physics, AI, etc.) across multiple threads or cores.
3. **Transparency**: Clear documentation on design choices and trade-offs, with benchmarks to back them up. -->

## Roadmap

1. **Core Loop**  
   - Establish a bare-bones game loop with fixed-step updates and variable rendering.
2. **Rendering Pipeline**  
   - Initial version of a custom rendering setup (Vulkan)
3. **Input & Audio**  
   - Minimal polling-based input system <!--(possibly raw OS-level)--> and minimal audio handling.
4. **Physics/Collision**  
   - Implement or integrate a lightweight, performance-focused collision detection system.
5. **Demo**  
   - Simple playable scene to showcase performance.
