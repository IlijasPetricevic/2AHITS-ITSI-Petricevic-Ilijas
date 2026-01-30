# replit.md

## Overview

This repository contains educational exercises and work reports for the ITSI (IT Systems and Infrastructure) course at HTL Braunau, specifically for class 2AHITS. The project serves as a collection of Linux command-line exercises, shell scripting practice, and documentation of learning progress in Markdown format.

The repository is structured around weekly lab reports documenting various Linux/Unix fundamentals including:
- File system navigation and manipulation
- Standard input/output operations
- Text processing tools (head, tail, sed, grep, etc.)
- Basic C/C++ programming with stdin/stdout

## User Preferences

Preferred communication style: Simple, everyday language.

## System Architecture

### Repository Structure
The project follows a simple flat structure optimized for educational documentation:

1. **Root Directory**: Contains sample data files used for exercises
   - `zahlen.txt`, `zahlen2.txt`: Numeric sequence files for practicing text tools
   - `shopping.txt`: Tabular data for parsing exercises
   - `anfang.txt`: Output file from head command exercises

2. **Berichte/ Directory**: Weekly work reports in Markdown format
   - Named using date convention `YYMMDD.md` (e.g., `250917.md` for September 17, 2025)
   - Each report documents exercises, solutions, and learnings

### Documentation Pattern
Reports follow a consistent template structure:
- Header with date, name, class, group, subject, and topic
- Exercise descriptions quoted from course materials
- Solution code blocks with shell commands or C/C++ code
- Output examples and explanations

### Technology Stack
- **Primary Environment**: Linux shell (bash)
- **Documentation**: Markdown files
- **Programming**: C/C++ for basic exercises (compiled with g++)
- **Platform**: Replit for development environment

### Design Decisions

**Markdown for Documentation**
- Problem: Need structured, readable lab reports
- Solution: Markdown with code blocks for command examples
- Rationale: Easy to write, version control friendly, renders nicely on GitHub/Replit

**Date-based File Naming**
- Problem: Organizing weekly reports chronologically
- Solution: YYMMDD.md naming convention
- Rationale: Natural sorting, easy to locate specific sessions

**Sample Data Files in Root**
- Problem: Need test data for shell command exercises
- Solution: Plain text files with various formats (line-separated, delimited, tabular)
- Rationale: Simple, portable, works with standard Unix tools

## External Dependencies

### Development Platform
- **Replit**: Cloud-based IDE providing Linux shell environment
- **GitHub**: Version control and submission platform for course work

### System Tools (Linux Standard)
- Core utilities: `ls`, `cd`, `mkdir`, `touch`, `cat`, `head`, `tail`
- Text processing: `grep`, `sed`, `awk`, `nl`, `seq`
- Network tools: `wget`
- Compiler: `g++` for C/C++ exercises

### Course Resources
- Course homepage: franzmatejka.at (referenced in README)
- Man pages for command documentation (accessed via web when not available in Replit)

No external APIs, databases, or third-party libraries are used. This is a documentation-focused educational repository with no runtime dependencies beyond standard Linux utilities.