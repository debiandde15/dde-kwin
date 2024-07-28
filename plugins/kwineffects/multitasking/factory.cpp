/*
 * Copyright (C) 2019 Deepin Technology Co., Ltd.
 *
 * Author:     Sian Cao <yinshuiboy@gmail.com>
 *
 * Maintainer: Sian Cao <yinshuiboy@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "../../../accessible.h"
#include "multitasking.h"

//KWIN_EFFECT_FACTORY(MultitaskingPluginFactory, MultitaskingEffect, "multitasking.json")

class MultitaskingPluginFactory : public KWin::EffectPluginFactory
{
    Q_OBJECT
    Q_INTERFACES(KPluginFactory)
    Q_PLUGIN_METADATA(IID KPluginFactory_iid FILE "multitasking.json")

public:
    explicit MultitaskingPluginFactory() {}
    ~MultitaskingPluginFactory() {}

    KWin::Effect *createEffect() const override {
        KWin::Effect *e = new  MultitaskingEffect();
        QAccessible::installFactory(accessibleFactory);
        return e;
    }
};

K_EXPORT_PLUGIN_VERSION(KWIN_EFFECT_API_VERSION)

#include "factory.moc"
