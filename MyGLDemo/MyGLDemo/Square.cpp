#include "StdAfx.h"
#include "Square.h"

extern unsigned int g_PixelShader;
CSquare::CSquare(void)
{
}

CSquare::~CSquare(void)
{
}

void CSquare::Render()
{
	glLoadIdentity();	
	glTranslatef(-m_pos.X,-m_pos.Y,-m_pos.Z);
	glRotatef(m_fRotSpeed,1.f,1.f,0.f);

	glUseProgram(g_PixelShader);
	glBegin(GL_QUADS);

	glColor3f(0.0f,1.0f,0.0f);			// ��ɫ��Ϊ��ɫ
	glVertex3f( 1.0f, 1.0f,-1.0f);			// �ı��ε����϶��� (����)
	glVertex3f(-1.0f, 1.0f,-1.0f);			// �ı��ε����϶��� (����)
	glVertex3f(-1.0f, 1.0f, 1.0f);			// �ı��ε����¶��� (����)
	glVertex3f( 1.0f, 1.0f, 1.0f);			// �ı��ε����¶��� (����)
	glColor3f(1.0f,0.5f,0.0f);			// ��ɫ�ĳɳ�ɫ
	glVertex3f( 1.0f,-1.0f, 1.0f);			// �ı��ε����϶���(����)
	glVertex3f(-1.0f,-1.0f, 1.0f);			// �ı��ε����϶���(����)
	glVertex3f(-1.0f,-1.0f,-1.0f);			// �ı��ε����¶���(����)
	glVertex3f( 1.0f,-1.0f,-1.0f);			// �ı��ε����¶���(����)
	glColor3f(1.0f,0.0f,0.0f);			// ��ɫ�ĳɺ�ɫ
	glVertex3f( 1.0f, 1.0f, 1.0f);			// �ı��ε����϶���(ǰ��)
	glVertex3f(-1.0f, 1.0f, 1.0f);			// �ı��ε����϶���(ǰ��)
	glVertex3f(-1.0f,-1.0f, 1.0f);			// �ı��ε����¶���(ǰ��)
	glVertex3f( 1.0f,-1.0f, 1.0f);			// �ı��ε����¶���(ǰ��)
	glColor3f(1.0f,1.0f,0.0f);			// ��ɫ�ĳɻ�ɫ
	glVertex3f( 1.0f,-1.0f,-1.0f);			// �ı��ε����϶���(����)
	glVertex3f(-1.0f,-1.0f,-1.0f);			// �ı��ε����϶���(����)
	glVertex3f(-1.0f, 1.0f,-1.0f);			// �ı��ε����¶���(����)
	glVertex3f( 1.0f, 1.0f,-1.0f);			// �ı��ε����¶���(����)
	glColor3f(0.0f,0.0f,1.0f);			// ��ɫ�ĳ���ɫ
	glVertex3f(-1.0f, 1.0f, 1.0f);			// �ı��ε����϶���(����)
	glVertex3f(-1.0f, 1.0f,-1.0f);			// �ı��ε����϶���(����)
	glVertex3f(-1.0f,-1.0f,-1.0f);			// �ı��ε����¶���(����)
	glVertex3f(-1.0f,-1.0f, 1.0f);			// �ı��ε����¶���(����)
	glColor3f(1.0f,0.0f,1.0f);			// ��ɫ�ĳ�������ɫ
	glVertex3f( 1.0f, 1.0f,-1.0f);			// �ı��ε����϶���(����)
	glVertex3f( 1.0f, 1.0f, 1.0f);			// �ı��ε����϶���(����)
	glVertex3f( 1.0f,-1.0f, 1.0f);			// �ı��ε����¶���(����)
	glVertex3f( 1.0f,-1.0f,-1.0f);			// �ı��ε����¶���(����)


	glEnd();						// ��������ƽ���

	glUseProgram(NULL);

	glTranslatef(1.5f,0.0f,6.0f);
	glRotatef(-m_fRotSpeed,1.f,1.f,0.f);
	glTranslatef(m_pos.X,m_pos.Y,m_pos.Z);

}


void CSquare::FrameMove( DWORD dwEslapeTime /*= 0*/ )
{
	m_fRotSpeed -= 2.f * dwEslapeTime * 0.001f;
}

void CSquare::HandleMouse( UINT e )
{

}

void CSquare::SetFocus( BOOL )
{

}
