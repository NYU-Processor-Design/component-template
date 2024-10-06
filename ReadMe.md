# NYU ProcDesign Development Template

A template for doing SystemVerilog development for the NYU Processor Design
team.

All instances of the "project" should be changed to the project name. For
example, if the project is named "AMBA" then `cmake/project-config.cmake` should
be renamed to `AMBA-config.cmake` and:
```
project(project VERSION 1.0.0)
```
Should be changed to
```
project(AMBA VERSION 1.0.0)
```
And so on for all appearances of "project" throughout the configuration files.

Similarly, the contents of `vcpkg.json` should be updated appropriately.

Finally, a coverage secret needs to be setup in the Github CI environment for
uploading coverage reports to CodeCov.
