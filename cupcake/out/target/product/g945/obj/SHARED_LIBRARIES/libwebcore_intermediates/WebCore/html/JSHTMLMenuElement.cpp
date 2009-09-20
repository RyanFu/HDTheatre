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

#include "JSHTMLMenuElement.h"

#include <wtf/GetPtr.h>

#include "HTMLMenuElement.h"

#include <runtime/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLMenuElement)

/* Hash table */

static const HashTableValue JSHTMLMenuElementTableValues[3] =
{
    { "compact", DontDelete, (intptr_t)jsHTMLMenuElementCompact, (intptr_t)setJSHTMLMenuElementCompact },
    { "constructor", DontEnum|ReadOnly, (intptr_t)jsHTMLMenuElementConstructor, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLMenuElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSHTMLMenuElementTableValues, 0 };
#else
    { 4, 3, JSHTMLMenuElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLMenuElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLMenuElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLMenuElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLMenuElementConstructorTableValues, 0 };
#endif

class JSHTMLMenuElementConstructor : public DOMObject {
public:
    JSHTMLMenuElementConstructor(ExecState* exec)
        : DOMObject(JSHTMLMenuElementConstructor::createStructure(exec->lexicalGlobalObject()->objectPrototype()))
    {
        putDirect(exec->propertyNames().prototype, JSHTMLMenuElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValuePtr proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, ImplementsHasInstance)); 
    }
};

const ClassInfo JSHTMLMenuElementConstructor::s_info = { "HTMLMenuElementConstructor", 0, &JSHTMLMenuElementConstructorTable, 0 };

bool JSHTMLMenuElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMenuElementConstructor, DOMObject>(exec, &JSHTMLMenuElementConstructorTable, this, propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLMenuElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLMenuElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLMenuElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSHTMLMenuElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLMenuElementPrototype::s_info = { "HTMLMenuElementPrototype", 0, &JSHTMLMenuElementPrototypeTable, 0 };

JSObject* JSHTMLMenuElementPrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSHTMLMenuElement>(exec);
}

const ClassInfo JSHTMLMenuElement::s_info = { "HTMLMenuElement", &JSHTMLElement::s_info, &JSHTMLMenuElementTable, 0 };

JSHTMLMenuElement::JSHTMLMenuElement(PassRefPtr<Structure> structure, PassRefPtr<HTMLMenuElement> impl)
    : JSHTMLElement(structure, impl)
{
}

JSObject* JSHTMLMenuElement::createPrototype(ExecState* exec)
{
    return new (exec) JSHTMLMenuElementPrototype(JSHTMLMenuElementPrototype::createStructure(JSHTMLElementPrototype::self(exec)));
}

bool JSHTMLMenuElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLMenuElement, Base>(exec, &JSHTMLMenuElementTable, this, propertyName, slot);
}

JSValuePtr jsHTMLMenuElementCompact(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    UNUSED_PARAM(exec);
    HTMLMenuElement* imp = static_cast<HTMLMenuElement*>(static_cast<JSHTMLMenuElement*>(asObject(slot.slotBase()))->impl());
    return jsBoolean(imp->compact());
}

JSValuePtr jsHTMLMenuElementConstructor(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    return static_cast<JSHTMLMenuElement*>(asObject(slot.slotBase()))->getConstructor(exec);
}
void JSHTMLMenuElement::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLMenuElement, Base>(exec, propertyName, value, &JSHTMLMenuElementTable, this, slot);
}

void setJSHTMLMenuElementCompact(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    HTMLMenuElement* imp = static_cast<HTMLMenuElement*>(static_cast<JSHTMLMenuElement*>(thisObject)->impl());
    imp->setCompact(value.toBoolean(exec));
}

JSValuePtr JSHTMLMenuElement::getConstructor(ExecState* exec)
{
    return getDOMConstructor<JSHTMLMenuElementConstructor>(exec);
}


}