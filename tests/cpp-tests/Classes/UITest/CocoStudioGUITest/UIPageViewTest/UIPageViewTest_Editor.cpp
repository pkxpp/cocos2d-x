#include "UIPageViewTest_Editor.h"
#include "VisibleRect.h"

UIPageViewEditorTests::UIPageViewEditorTests()
{
    ADD_TEST_CASE(UIPageViewTest_Editor);
}

// UIPageViewTest_Editor

UIPageViewTest_Editor::UIPageViewTest_Editor()
: _displayValueLabel(nullptr)
{
    
}

UIPageViewTest_Editor::~UIPageViewTest_Editor()
{
    
}

bool UIPageViewTest_Editor::init()
{
    if (UIScene_Editor::init())
    {
        Node* node = CSLoader::createNode("cocosui/UIEditorTest/UIPageView/crossplatform_UIPageView_Editor_1.csb");
        Node* child = node->getChildByTag(5);
        child->removeFromParent();
        _layout = static_cast<Layout*>(child);
        _touchGroup->addChild(_layout);
        
        this->configureGUIScene();

        return true;
    }
    
    return false;
}
