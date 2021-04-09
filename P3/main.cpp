#include <glad/glad.h>
#include <stdlib.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <math.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "points.cpp"

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;


glm::mat4 View;
glm::mat4 Model = glm::rotate(glm::mat4(1.0f), glm::radians(30.0f), glm::vec3(0.0f, 1.0f, 0.0f));
glm::mat4 Projection = glm::ortho(-1.0f,1.0f,-1.0f,1.0f,0.0f,100.0f);
glm::mat4 MVP;


static unsigned int CompileShader(unsigned int type, const std::string& source){
 	unsigned int id = glCreateShader(type);
 	const char* src = source.c_str();
 	glShaderSource(id, 1, &src, NULL);
 	glCompileShader(id);

 	int success;
	glGetShaderiv(id, GL_COMPILE_STATUS, &success);

  	if (!success){
		int length;
		glGetShaderiv(id, GL_INFO_LOG_LENGTH, &length);
		char *message = (char*)alloca(length * sizeof(char));	  
  		glGetShaderInfoLog(id, length, &length, message);
  		std::cout << "ERROR::SHADER::"<< (type == GL_VERTEX_SHADER ? "VERTEX" : "FRAGMENT") << "::COMPILATION_FAILED\n" << std::endl;
		std::cout << message << std::endl;
		glDeleteShader(id);
		return 0;
  	}

  	return id;
}

static unsigned int CreateShader(const std::string& vertexShader, const std::string& fragmentShader){
  	unsigned int shaderProgram = glCreateProgram();
  	unsigned int vs = CompileShader(GL_VERTEX_SHADER,vertexShader);
  	unsigned int fs = CompileShader(GL_FRAGMENT_SHADER,fragmentShader);

  	glAttachShader(shaderProgram, vs);
  	glAttachShader(shaderProgram, fs);
  	glLinkProgram(shaderProgram);
  	glValidateProgram(shaderProgram);

  	glDeleteShader(vs);
  	glDeleteShader(fs);

  	return shaderProgram;
}

void CameraRotation(glm::vec3 eye = glm::vec3(0,0,3),glm::vec3 up = glm::vec3(0,1,0)){
	View = glm::lookAt(eye,glm::vec3(0,0,0), up);
    
    MVP   = Projection * View * Model; 
}

int main()
{
  	glfwInit();
  	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  	GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "PI", NULL,NULL);
	
  	if (window == NULL){
  	    std::cout << "Failed to create GLFW window" << std::endl;
  	    glfwTerminate();
  	    return -1;
  	}
  	glfwMakeContextCurrent(window);
  	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

  	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
  	    std::cout << "Failed to initialize GLAD" << std::endl;
  	    return -1;
  	}


  	unsigned int VBO, VAO, EBO, shaderColors; 
	
	glGenVertexArrays(1, &VAO); 
	glBindVertexArray(VAO);

  	glGenBuffers(1, &VBO); 
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	

  	glGenBuffers(1, &EBO); 
	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW); 
	

	glGenBuffers(1, &shaderColors);
	glEnableVertexAttribArray(1);
    glBindBuffer(GL_ARRAY_BUFFER, shaderColors);
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, (void*)0);
	glBufferData(GL_ARRAY_BUFFER, sizeof(colors), colors, GL_STATIC_DRAW);
	
	glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
	
  	std::string vertexShaderSource = "#version 330 core\n"
    	"layout (location = 0) in vec3 aPos;\n"
    	"layout (location = 1) in vec3 vertexColor;\n"
    	"out vec3 fragmentColor;\n"
		"uniform mat4 MVP;\n"
    	"void main()\n"
    	"{\n"
    	"   gl_Position = MVP * vec4(aPos, 1.0);\n"
    	"   fragmentColor = vertexColor;\n"
    	"}\0";

  	std::string fragmentShaderSource = "#version 330 core\n"
    	"in vec3 fragmentColor;\n;"
    	"out vec3 FragColor;\n"
    	"void main()\n"
    	"{\n"
    	"   FragColor = fragmentColor;\n"
    	"}\n\0";


  	unsigned int shader = CreateShader(vertexShaderSource,fragmentShaderSource);
  		
    unsigned int MatrixID = glGetUniformLocation(shader, "MVP");
    
    CameraRotation();

  	while (!glfwWindowShouldClose(window)){
		glUseProgram(shader);
  	    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);  
  	    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		processInput(window);
		glUniformMatrix4fv(MatrixID, 1, GL_FALSE, &MVP[0][0]);
  	    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
  	    glDrawElements(GL_TRIANGLES, number_of_elements, GL_UNSIGNED_INT, 0);
  	    glfwSwapBuffers(window);
  	    glfwPollEvents();   
  	}
	
  	glDeleteVertexArrays(1, &VAO);
  	glDeleteBuffers(1, &VBO);
  	glDeleteProgram(shader);
	
  	glfwTerminate();
  	return 0;
}

void processInput(GLFWwindow *window){
  	if(glfwGetKey(window, GLFW_KEY_E) == GLFW_PRESS) CameraRotation(glm::vec3(-3,0,0));
  	if(glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) CameraRotation(glm::vec3(3,0,0)); 
  	if(glfwGetKey(window, GLFW_KEY_F) == GLFW_PRESS) CameraRotation();
	if(glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) CameraRotation(glm::vec3(0,0,-3));
	if(glfwGetKey(window, GLFW_KEY_C) == GLFW_PRESS) CameraRotation(glm::vec3(0,3,0),glm::vec3(0,0,1));
	if(glfwGetKey(window, GLFW_KEY_B) == GLFW_PRESS) CameraRotation(glm::vec3(0,-3,0),glm::vec3(0,0,1));
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height){
  	glViewport(0, 0, width, height);
}

 
