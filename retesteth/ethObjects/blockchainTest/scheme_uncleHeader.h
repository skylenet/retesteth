#pragma once
#include "../object.h"
#include "../stateTest/scheme_state.h"
#include <retesteth/Options.h>
#include <retesteth/TestHelper.h>

using namespace test;

namespace test
{
class scheme_uncleHeader : public object
{
public:
    enum class typeOfUncleSection
    {
        SameAsBlock,
        PopulateFromBlock,
        SameAsPreviousBlockUncle,
        SameAsPreviousSibling
    };
    scheme_uncleHeader(DataObject const& _test);
    size_t getPopulateFrom() const;
    size_t getSameAsBlock() const;
    std::string const& getChainName() const;
    std::vector<std::string> const& getOverwrite() const { return m_overwriteAndRedoPow; }
    std::string const& getRelTimestampFromPopulateBlock() const;
    size_t getSameAsPreviousBlockUncle() const;
    size_t getSameAsPreviousSibling() const;
    typeOfUncleSection getTypeOfUncleSection() const { return m_typeOfUncleSection; }

private:
    typeOfUncleSection m_typeOfUncleSection;
    std::vector<std::string> m_overwriteAndRedoPow;
};
}  // namespace test
