#include <Geode/Geode.hpp>
#include <Geode/modify/EditorUI.hpp>

using namespace geode::prelude;

extern void applyDecor(std::string prompt);

class $modify(MyEditorUI, EditorUI) {

    bool init(LevelEditorLayer* editorLayer) {
            if (!EditorUI::init(editorLayer)) return false;

                    auto btn = CCMenuItemSpriteExtra::create(
                                CCSprite::createWithSpriteFrameName("GJ_plusBtn_001.png"),
                                            this,
                                                        menu_selector(MyEditorUI::onDecor)
                                                                );

                                                                        btn->setPosition({200, 100});
                                                                                this->addChild(btn);

                                                                                        return true;
                                                                                            }

                                                                                                void onDecor(CCObject*) {
                                                                                                        applyDecor("glow decorate");
                                                                                                            }
                                                                                                            };