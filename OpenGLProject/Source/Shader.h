#pragma once
#include <string>
#include <unordered_map>

struct ShaderProgramSource
{
	std::string VertexSource;
	std::string FragmentSource;
};

class Shader
{
private:
	unsigned int GetUniformLocation(const std::string& name);
	bool CompileShader();

	unsigned int m_RendererID;
	std::string m_FilePath;
	std::unordered_map<std::string, int> m_UniformLocationCache;
public:
	Shader(const std::string& filepath);
	~Shader();

	ShaderProgramSource ParseShader(const std::string& filepath);

	unsigned int CompileShader(unsigned int type, const std::string& source);

	unsigned int CreateShader(const std::string& vertexShader, const std::string fragmentShader);

	void Bind() const;
	void Unbind();

	// Set Uniforms
	void SetUniform4F(const std::string& name, float f0, float f1, float f2, float f3);
};