#pragma once
#include <afxwin.h>
#include <gl/gl.h>
#include <gl/glu.h>

class COpenGLControl : public CWnd
{
public:
	COpenGLControl();

	void oglCreate(CRect rect, CWnd *parent);
	void oglInitialize(void);
	afx_msg void OnDraw(CDC *pDC);
	void oglDrawScene(void);

	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnPaint();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);

public:
	/******************/
	/* PUBLIC MEMBERS */
	/******************/
	// Timer
	UINT_PTR m_unpTimer;

	float m_fLastX;
	float m_fLastY;
	float m_fRotX;
	float m_fRotY;
	float m_fZoom;
	float m_fPosX;
	float m_fPosY;

private:
	/*******************/
	/* PRIVATE MEMBERS */
	/*******************/
	// Window information
	CWnd    *hWnd;
	HDC     hdc;
	HGLRC   hrc;
	int     m_nPixelFormat;
	CRect   m_rect;
	CRect   m_oldWindow;
	CRect   m_originalRect;

};

