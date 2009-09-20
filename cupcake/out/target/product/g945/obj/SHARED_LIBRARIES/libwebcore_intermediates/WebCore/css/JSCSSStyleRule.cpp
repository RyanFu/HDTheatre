/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#include "JSCSSStyleRule.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSStyleRule.h"
#include "JSCSSStyleDeclaration.h"
#include "KURL.h"

#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCSSStyleRule)

/* Hash table */

static const HashTableValue JSCSSStyleRuleTableValues[4] =
{
    { "selectorText", DontDelete, (intptr_t)jsCSSStyleRuleSelectorText, (intptr_t)setJSCSSStyleRuleSelectorText },
    { "style", DontDelete|ReadOnly, (intptr_t)jsCSSStyleRuleStyle, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsCSSStyleRuleConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSStyleRuleTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 7, JSCSSStyleRuleTableValues, 0 };
#else
    { 8, 7, JSCSSStyleRuleTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSCSSStyleRuleConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSStyleRuleConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSCSSStyleRuleConstructorTableValues, 0 };
#else
    { 1, 0, JSCSSStyleRuleConstructorTableValues, 0 };
#endif

class JSCSSStyleRuleConstructor : public DOMObject {
public:
    JSCSSStyleRuleConstructor(ExecState* exec)
        : DOMObject(JSCSSStyleRuleConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSCSSStyleRulePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSCSSStyleRuleConstructor::s_info = { "CSSStyleRuleConstructor", 0, &JSCSSStyleRuleConstructorTable, 0 };

bool JSCSSStyleRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSStyleRuleConstructor, DOMObject>(exec, &JSCSSStyleRuleConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSCSSStyleRulePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSStyleRulePrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSCSSStyleRulePrototypeTableValues, 0 };
#else
    { 1, 0, JSCSSStyleRulePrototypeTableValues, 0 };
#endif

const ClassInfo JSCSSStyleRulePrototype::s_info = { "CSSStyleRulePrototype", 0, &JSCSSStyleRulePrototypeTable, 0 };

JSObject* JSCSSStyleRulePrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSCSSStyleRule>(exec);
}

const ClassInfo JSCSSStyleRule::s_info = { "CSSStyleRule", &JSCSSRule::s_info, &JSCSSStyleRuleTable, 0 };

JSCSSStyleRule::JSCSSStyleRule(PassRefPtr<Structure> structure, PassRefPtr<CSSStyleRule> impl)
    : JSCSSRule(structure, impl)
{
}

JSObject* JSCSSStyleRule::createPrototype(ExecState* exec)
{
    return new (exec) JSCSSStyleRulePrototype(JSCSSStyleRulePrototype::createStructure(JSCSSRulePrototype::self(exec)));
}

bool JSCSSStyleRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSStyleRule, Base>(exec, &JSCSSStyleRuleTable, this, propertyName, slot);
}

JSValuePtr jsCSSStyleRuleSelectorText(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    CSSStyleRule* imp = static_cast<CSSStyleRule*>(static_cast<JSCSSStyleRule*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->selectorText());
}

JSValuePtr jsCSSStyleRuleStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    CSSStyleRule* imp = static_cast<CSSStyleRule*>(static_cast<JSCSSStyleRule*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->style()));
}

JSValuePtr jsCSSStyleRuleConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSCSSStyleRule*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSCSSStyleRule::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSCSSStyleRule, Base>(exec, propertyName, value, &JSCSSStyleRuleTable, this, slot);
}

void setJSCSSStyleRuleSelectorText(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    CSSStyleRule* imp = static_cast<CSSStyleRule*>(static_cast<JSCSSStyleRule*>(thisObject)->impl());
    ExceptionCode ec = 0;
    imp->setSelectorText(valueToStringWithNullCheck(exec, value), ec);
    setDOMException(exec, ec);
}

JSValuePtr JSCSSStyleRule::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSCSSStyleRuleConstructor>(exec);
}


}