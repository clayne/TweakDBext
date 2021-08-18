#pragma once

#include "BaseSection.hpp"
#include "ReversedStructs.hpp"

class Flats : public BaseSection
{
public:
    using BaseSection::BaseSection;

    bool Load();

private:
    std::vector<RED4ext::IRTTIType*> ReadTypes();
    std::vector<std::unique_ptr<Unk01>> ReadValues(RED4ext::IRTTIType* aType);
    bool LoadFlats(const std::vector<std::unique_ptr<Unk01>>& aValues);
};