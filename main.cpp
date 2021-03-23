#include <glad/glad.h>
#include <stdlib.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <math.h>
#include "points.cpp"

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

static unsigned int CompileShader(unsigned int type, const std::string& source){
  unsigned int id = glCreateShader(GL_VERTEX_SHADER);
  const char* src = source.c_str();
  glShaderSource(id, 1, &src, NULL);
  glCompileShader(id);

  return id;

}

static int CreateShader(const std::string& vertexShader, const std::string& fragmentShader){
  unsigned int program = glCreateProgram();
  unsigned int vs = CompileShader(GL_VERTEX_SHADER, vertexShader);


}

int main()
{
  // glfw: initialize and configure
  // ------------------------------
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  glfwWindowHint(GLFW_SAMPLES,8);

  
  // glfw window creation
  // --------------------
  GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Janela Temporizada", NULL,
					NULL);
 
  if (window == NULL){
      std::cout << "Failed to create GLFW window" << std::endl;
      glfwTerminate();
      return -1;
  }
  glfwMakeContextCurrent(window);
  glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
  
  // glad: load all OpenGL function pointers
  // ---------------------------------------
  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
      std::cout << "Failed to initialize GLAD" << std::endl;
      return -1;
  }


  unsigned int VBO, VAO, EBO; // declare variables 
  glGenBuffers(1, &VBO); // generate vertex buffer
  glGenBuffers(1, &EBO); //genetate indices buffer
  glGenVertexArrays(1, &VAO); // generate vertex array object
  /* bind the Vertex Array Object first, then bind and set vertex 
     buffer(s), and then configure vertex attributes(s)*/
  glBindVertexArray(VAO);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
  glBindBuffer(GL_ARRAY_BUFFER, VBO);
  // copy our vertex data into buffer
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  /* note that this is allowed, the call to glVertexAttribPointer 
     registered VBO as the vertex attribute's bound vertex buffer 
     object so afterwards we can safely unbind*/
  glBindBuffer(GL_ARRAY_BUFFER, 0); 
  /* You can unbind the VAO afterwards so other VAO calls won't 
     accidentally modify this VAO, but this rarely happens. Modifying 
     other VAOs requires a call to glBindVertexArray anyways so we 
     generally don't unbind VAOs (nor VBOs) when it's not directly 
     necessary.*/
  //glBindVertexArray(0); 
  // uncomment this call to draw in wireframe polygons.
  //glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

  //============================================

// declare and define vshader, position 4 in vector declaration
// is for "w" = perspective division 
const char *vertexShaderSource = "#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "void main()\n"
    "{\n"
    "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
    "}\0";
// declare and define fshader, position in color vector declaration
// are RGBA from [0,1] and where A = alpha (opacity)
const char *fragmentShaderSource = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
    "}\n\0";


//===========================================
    // build and compile our shader program
    // ------------------------------------
    // vertex shader
    unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
    glCompileShader(vertexShader);
    // check for vertex shader compile errors
    int success;
    char infoLog[512];
    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
    }
    // fragment shader
    unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
    glCompileShader(fragmentShader);
    // check for fragment shader compile errors
    glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << std::endl;
    }

    // link shaders : puts together the vertex and the fragment shaders
    // into a "shader program object"
    unsigned int shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);
    // check for shader linking errors
    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
    if (!success) {
        glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
    }
    // delete shaders, we don't need them anymore
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);
  // render loop
  // -----------
  while (!glfwWindowShouldClose(window)){
      // render
      // ------
      //glClearColor(0.5f, 0.5f, 0.5f, 1.0f); //grey rendering
      glClearColor(0.2f, 0.3f, 0.3f, 1.0f);   //green? rendering
      glClear(GL_COLOR_BUFFER_BIT);

      // draw our first triangle: using shader program
      glUseProgram(shaderProgram);
      
      //glBindVertexArray(VAO);
      // seeing as we only have a single VAO there's no need to bind
      // it every time, but we'll do so to keep things a bit more organized
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
      glDrawElements(GL_TRIANGLES, number_of_elements, GL_UNSIGNED_INT, 0);
      // glBindVertexArray(0); // no need to unbind it every time 
     
      /* glfw: swap buffers and poll IO events (keys pressed/released, 
	 mouse moved etc.)
	 --------------------------------------------------------------*/
      glfwSwapBuffers(window);
      glfwPollEvents();   
  }
  
  // optional: de-allocate all resources once they've outlived their purpose:
  // ------------------------------------------------------------------------
  glDeleteVertexArrays(1, &VAO);
  glDeleteBuffers(1, &VBO);
  glDeleteProgram(shaderProgram);
  
  // glfw: terminate, clearing all previously allocated GLFW resources.
  // ------------------------------------------------------------------
  glfwTerminate();
  return 0;
}


/* process all input: query GLFW whether relevant keys are pressed/released 
this frame and react accordingly 
-----------------------------------------------------------------------*/

void processInput(GLFWwindow *window){
  if(glfwGetKey(window, GLFW_KEY_ENTER) == GLFW_PRESS) glfwSetWindowShouldClose(window, true);
  if(glfwGetKey(window, GLFW_KEY_R) == GLFW_PRESS){
    glClearColor(1,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT);
  }   
  if(glfwGetKey(window, GLFW_KEY_G) == GLFW_PRESS){
    glClearColor(0,1,0,1);
    glClear(GL_COLOR_BUFFER_BIT);
  } 
  if(glfwGetKey(window, GLFW_KEY_B) == GLFW_PRESS){
    glClearColor(0,0,1,1);
    glClear(GL_COLOR_BUFFER_BIT);
  } 
}

/* glfw: whenever the window size changed (by OS or user resize) this
   callback function executes
   -------------------------------------------------------------------*/
void framebuffer_size_callback(GLFWwindow* window, int width, int height){
  // make sure the viewport matches the new window dimensions; note that
  // width and height will be significantly larger than specified on
  // retina displays.
  glViewport(0, 0, width, height);
}

 
