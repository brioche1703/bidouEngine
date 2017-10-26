#include "buffer.h"

namespace bidou { namespace graphics {

	Buffer::Buffer(GLfloat* data, GLsizei count, GLuint componentCount)
	{
		m_ComponentCount = componentCount;

		glGenBuffers(1, &m_BufferID);
		glBindBuffer(GL_ARRAY_BUFFER, m_BufferID);
	}


} }
