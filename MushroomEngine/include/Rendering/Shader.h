
#include <string>

namespace mr
{
    class Shader
    {
    public:
        Shader(const std::string& vertexShaderName, const std::string& fragmentShaderName);
        void UseShaderProgram();

    private:
        unsigned int mShaderProgramId;
        unsigned int CompileShader(const std::string& shaderName, unsigned int shaderType);

        std::string ReadShader(const std::string& shaderName) const;

        unsigned int BuildShaderProgram(unsigned int vertexShaderId, unsigned int fragementShaderId);
    };
}