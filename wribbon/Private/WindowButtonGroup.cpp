#include "Private/WindowButtonGroup.h"

namespace WRibbon {
namespace Private {

///////////////////////////////////////////////////////////////////////////////
// PUBLIC SECTION                                                            //
///////////////////////////////////////////////////////////////////////////////

WindowButtonGroup::WindowButtonGroup(QWidget* parent) :
  QWidget(parent) {
  createElements();
  createLayout();
}

///////////////////////////////////////////////////////////////////////////////
// PRIVATE SECTION                                                           //
///////////////////////////////////////////////////////////////////////////////

void WindowButtonGroup::createElements() {
  setSizePolicy(QSizePolicy());
  m_maximizeButton = new MaximizeButton(this);
  m_minimizeButton = new MinimizeButton(this);
  m_closeButton = new CloseButton(this);
  m_layout = new QHBoxLayout(this);
}

void WindowButtonGroup::createLayout() {
  m_layout->setSpacing(0);
  m_layout->setMargin(0);
  m_layout->addWidget(m_minimizeButton);
  m_layout->addWidget(m_maximizeButton);
  m_layout->addWidget(m_closeButton);
  setLayout(m_layout);
}

} // namespace Private
} // namespace WRibbon
