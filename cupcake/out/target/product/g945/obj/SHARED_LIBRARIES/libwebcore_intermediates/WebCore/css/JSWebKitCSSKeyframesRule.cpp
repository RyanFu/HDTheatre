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

#include "JSWebKitCSSKeyframesRule.h"

#include <wtf/GetPtr.h>

#include <runtime/PropertyNameArray.h>
#include "CSSRuleList.h"
#include "JSCSSRuleList.h"
#include "JSWebKitCSSKeyframeRule.h"
#include "KURL.h"
#include "WebKitCSSKeyframeRule.h"
#include "WebKitCSSKeyframesRule.h"

#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebKitCSSKeyframesRule)

/* Hash table */

static const HashTableValue JSWebKitCSSKeyframesRuleTableValues[4] =
{
    { "name", DontDelete, (intptr_t)jsWebKitCSSKeyframesRuleName, (intptr_t)setJSWebKitCSSKeyframesRuleName },
    { "cssRules", DontDelete|ReadOnly, (intptr_t)jsWebKitCSSKeyframesRuleCssRules, (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsWebKitCSSKeyframesRuleConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitCSSKeyframesRuleTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSWebKitCSSKeyframesRuleTableValues, 0 };
#else
    { 9, 7, JSWebKitCSSKeyframesRuleTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSWebKitCSSKeyframesRuleConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitCSSKeyframesRuleConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSWebKitCSSKeyframesRuleConstructorTableValues, 0 };
#else
    { 1, 0, JSWebKitCSSKeyframesRuleConstructorTableValues, 0 };
#endif

class JSWebKitCSSKeyframesRuleConstructor : public DOMObject {
public:
    JSWebKitCSSKeyframesRuleConstructor(ExecState* exec)
        : DOMObject(JSWebKitCSSKeyframesRuleConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSWebKitCSSKeyframesRulePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSWebKitCSSKeyframesRuleConstructor::s_info = { "WebKitCSSKeyframesRuleConstructor", 0, &JSWebKitCSSKeyframesRuleConstructorTable, 0 };

bool JSWebKitCSSKeyframesRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitCSSKeyframesRuleConstructor, DOMObject>(exec, &JSWebKitCSSKeyframesRuleConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSWebKitCSSKeyframesRulePrototypeTableValues[4] =
{
    { "insertRule", DontDelete|Function, (intptr_t)jsWebKitCSSKeyframesRulePrototypeFunctionInsertRule, (intptr_t)1 },
    { "deleteRule", DontDelete|Function, (intptr_t)jsWebKitCSSKeyframesRulePrototypeFunctionDeleteRule, (intptr_t)1 },
    { "findRule", DontDelete|Function, (intptr_t)jsWebKitCSSKeyframesRulePrototypeFunctionFindRule, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitCSSKeyframesRulePrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 7, JSWebKitCSSKeyframesRulePrototypeTableValues, 0 };
#else
    { 8, 7, JSWebKitCSSKeyframesRulePrototypeTableValues, 0 };
#endif

const ClassInfo JSWebKitCSSKeyframesRulePrototype::s_info = { "WebKitCSSKeyframesRulePrototype", 0, &JSWebKitCSSKeyframesRulePrototypeTable, 0 };

JSObject* JSWebKitCSSKeyframesRulePrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSWebKitCSSKeyframesRule>(exec);
}

bool JSWebKitCSSKeyframesRulePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSWebKitCSSKeyframesRulePrototypeTable, this, propertyName, slot);
}

const ClassInfo JSWebKitCSSKeyframesRule::s_info = { "WebKitCSSKeyframesRule", &JSCSSRule::s_info, &JSWebKitCSSKeyframesRuleTable, 0 };

JSWebKitCSSKeyframesRule::JSWebKitCSSKeyframesRule(PassRefPtr<Structure> structure, PassRefPtr<WebKitCSSKeyframesRule> impl)
    : JSCSSRule(structure, impl)
{
}

JSObject* JSWebKitCSSKeyframesRule::createPrototype(ExecState* exec)
{
    return new (exec) JSWebKitCSSKeyframesRulePrototype(JSWebKitCSSKeyframesRulePrototype::createStructure(JSCSSRulePrototype::self(exec)));
}

bool JSWebKitCSSKeyframesRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSWebKitCSSKeyframesRuleTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && index < static_cast<WebKitCSSKeyframesRule*>(impl())->length()) {
        slot.setCustomIndex(this, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSWebKitCSSKeyframesRule, Base>(exec, &JSWebKitCSSKeyframesRuleTable, this, propertyName, slot);
}

bool JSWebKitCSSKeyframesRule::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (propertyName < static_cast<WebKitCSSKeyframesRule*>(impl())->length()) {
        slot.setCustomIndex(this, propertyName, indexGetter);
        return true;
    }
    return getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

JSValuePtr jsWebKitCSSKeyframesRuleName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(static_cast<JSWebKitCSSKeyframesRule*>(asObject(slot.slotBase()))->impl());
    return jsStringOrNull(exec, imp->name());
}

JSValuePtr jsWebKitCSSKeyframesRuleCssRules(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(static_cast<JSWebKitCSSKeyframesRule*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->cssRules()));
}

JSValuePtr jsWebKitCSSKeyframesRuleConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSWebKitCSSKeyframesRule*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSWebKitCSSKeyframesRule::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSWebKitCSSKeyframesRule, Base>(exec, propertyName, value, &JSWebKitCSSKeyframesRuleTable, this, slot);
}

void setJSWebKitCSSKeyframesRuleName(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(static_cast<JSWebKitCSSKeyframesRule*>(thisObject)->impl());
    imp->setName(valueToStringWithNullCheck(exec, value));
}

void JSWebKitCSSKeyframesRule::getPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    for (unsigned i = 0; i < static_cast<WebKitCSSKeyframesRule*>(impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getPropertyNames(exec, propertyNames);
}

JSValuePtr JSWebKitCSSKeyframesRule::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSWebKitCSSKeyframesRuleConstructor>(exec);
}

JSValuePtr jsWebKitCSSKeyframesRulePrototypeFunctionInsertRule(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSWebKitCSSKeyframesRule::s_info))
        return throwError(exec, TypeError);
    JSWebKitCSSKeyframesRule* castedThisObj = static_cast<JSWebKitCSSKeyframesRule*>(asObject(thisValue));
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(castedThisObj->impl());
    const UString& rule = args.at(exec, 0).toString(exec);

    imp->insertRule(rule);
    return jsUndefined();
}

JSValuePtr jsWebKitCSSKeyframesRulePrototypeFunctionDeleteRule(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSWebKitCSSKeyframesRule::s_info))
        return throwError(exec, TypeError);
    JSWebKitCSSKeyframesRule* castedThisObj = static_cast<JSWebKitCSSKeyframesRule*>(asObject(thisValue));
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(castedThisObj->impl());
    const UString& key = args.at(exec, 0).toString(exec);

    imp->deleteRule(key);
    return jsUndefined();
}

JSValuePtr jsWebKitCSSKeyframesRulePrototypeFunctionFindRule(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.isObject(&JSWebKitCSSKeyframesRule::s_info))
        return throwError(exec, TypeError);
    JSWebKitCSSKeyframesRule* castedThisObj = static_cast<JSWebKitCSSKeyframesRule*>(asObject(thisValue));
    WebKitCSSKeyframesRule* imp = static_cast<WebKitCSSKeyframesRule*>(castedThisObj->impl());
    const UString& key = args.at(exec, 0).toString(exec);


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->findRule(key)));
    return result;
}


JSValuePtr JSWebKitCSSKeyframesRule::indexGetter(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    JSWebKitCSSKeyframesRule* thisObj = static_cast<JSWebKitCSSKeyframesRule*>(asObject(slot.slotBase()));
    return toJS(exec, static_cast<WebKitCSSKeyframesRule*>(thisObj->impl())->item(slot.index()));
}

}