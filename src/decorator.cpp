#include <Geode/Geode.hpp>
#include <Geode/modify/LevelEditorLayer.hpp>

using namespace geode::prelude;

void applyDecor(std::string prompt) {
    auto editor = LevelEditorLayer::get();
        if (!editor) return;

            auto objects = editor->getAllObjects();

                for (auto obj : objects) {

                        // Glow
                                if (prompt.find("glow") != std::string::npos) {
                                            obj->setColor(ccColor3B{0, 255, 255});
                                                    }

                                                            // Add glow object
                                                                    if (prompt.find("decorate") != std::string::npos) {
                                                                                auto glow = GameObject::createWithKey(1755);
                                                                                            glow->setPosition(obj->getPosition());
                                                                                                        editor->addObject(glow, false);
                                                                                                                }
                                                                                                                    }
                                                                                                                    }