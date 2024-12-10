#include "Shader.h"

Shader::Shader(const std::string& filepath)
    : m_FilePath(filepath), m_RendererID(0)
{
    CompileShader();
}

Shader::~Shader()
{

}

bool Shader::CompileShader()
{

}

static unsigned int CreateShader(const std::string& vertexShader, const std::string fragmentShader)
{
    unsigned int program = glCreateProgram();
    unsigned int vs = CompileShader(GL_VERTEX_SHADER, vertexShader);
    unsigned int fs = CompileShader(GL_FRAGMENT_SHADER, fragmentShader);

    glAttachShader(program, vs);
    glAttachShader(program, fs);
    glLinkProgram(program);
    glValidateProgram(program);

    glDeleteShader(vs);
    glDeleteShader(fs);

    return program;
}

void Shader::Bind() const
{

}

void Shader::Unbind()
{

}

void Shader::SetUniform4F(const std::string& name, float f0, float f1, float f2, float f3)
{

}

unsigned int Shader::GetUniformLocation(const std::sting& name)
{
    return 0;
}

