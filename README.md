# LOGIX

> A modern, high-performance, modular 3D physics engine written in C++20.

---

## Overview

LOGIX is a professional-grade physics engine being developed from scratch with a strong focus on:

- Modern C++20
- Clean architecture
- High performance
- Modular design
- Maintainability
- Editor-first workflow
- Unreal Engine integration

The long-term goal is to build not only a physics engine, but an entire physics development platform consisting of:

- LOGIX Engine
- LOGIX Editor
- Unreal Engine Plugin

---

# Project Goals

- Learn professional engine architecture
- Build a reusable physics engine
- Develop a standalone editor
- Integrate with Unreal Engine
- Follow commercial software engineering practices

---

# Features (Planned)

## Core

- Logger
- Version System
- Assertions
- Events
- Time System
- Memory Management

## Mathematics

- Vector2
- Vector3
- Vector4
- Matrix3
- Matrix4
- Quaternion
- Transform

## Physics

- Particle System
- Rigid Bodies
- Force Generators
- Integrators
- Constraints
- Physics World

## Collision

- Sphere
- Plane
- AABB
- OBB
- Capsule
- Ray Casting
- Broad Phase
- Narrow Phase

## Editor

- Scene Hierarchy
- Viewport
- Object Inspector
- Physics Visualization
- Debug Rendering
- Profiling

## Optimization

- SIMD
- Memory Pools
- Job System
- Multithreading

---

# Project Structure

```text
LOGIX/

├── Engine/
├── Sandbox/
├── Assets/
├── ThirdParty/
├── Plugins/
├── Tests/
└── CMakeLists.txt
```

---

# Technologies

| Component | Technology |
|-----------|------------|
| Language | C++20 |
| IDE | CLion |
| Compiler | MSVC |
| Build System | CMake |
| Version Control | Git |

---

# Current Version

0.1.0

---

# Current Development Phase

✅ Phase 1 — Foundation

Current milestone:

- Version System

---

# Build

```bash
git clone <repository>

mkdir build
cd build

cmake ..
cmake --build .
```

---

# Design Principles

- Modern C++20
- SOLID where appropriate
- Composition over inheritance
- RAII
- const correctness
- Minimal global state
- Clean architecture
- Platform independence

---

# Long-Term Roadmap

- Foundation
- Mathematics
- Physics
- Collision Detection
- Rigid Body Dynamics
- LOGIX Editor
- Optimization
- Unreal Engine Plugin

---

# License

This project is licensed under the MIT License.

---

# Author

Sudip Pan

Electrical & Electronics Engineer

Game Engine & Physics Engine Developer