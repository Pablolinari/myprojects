
# Definir el compilador y las opciones
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iincludes

# Directorios
SRCDIR = src
INCLUDEDIR = includes
BINDIR = bin

# Archivos fuente y objetos
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(BINDIR)/%.o)
EXEC = $(BINDIR)/mi_programa

# Regla por defecto: compilar el ejecutable
all: $(EXEC)

# Regla para generar el ejecutable
$(EXEC): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

# Regla para compilar los archivos .cpp a archivos .o
$(BINDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar los archivos generados
clean:
	rm -rf $(BINDIR)

# Regla para eliminar los archivos generados y empezar de nuevo
fclean: clean
	rm -f $(EXEC)

# Regla para recompilar todo
re: fclean all
