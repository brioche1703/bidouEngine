#pragma once

#include "buffers/buffer.h"
#include "buffers/indexbuffer.h"
#include "buffers/vertexarray.h"

#include "../maths/maths.h"

namespace bidou { namespace graphics {

	class Renderable2D {
	protected:
		maths::vec3 m_Position;
		maths::vec2 m_Size;
		maths::vec4 m_Color;

		VertexArray* m_VertexArray;
		IndexBuffer* m_IndexBuffer;

	public:
	};

} }

