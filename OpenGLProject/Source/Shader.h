#pragma once
#include <string>

class Shader
{
private:
	unsigned int GetUniformLocation(const std::sting& name);
	bool CompileShader();

	unsigned int m_RendererID;
	std::string m_FilePath;
	// Caching for Uniforms
public:
	Shader(const std::string& filepath);
	~Shader();

	void Bind() const;
	void Unbind();

	// Set Uniforms
	void SetUniform4F(const std::string& name, float f0, float f1, float f2, float f3);
};