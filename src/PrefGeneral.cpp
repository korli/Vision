/*
 * The contents of this file are subject to the Mozilla Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The Original Code is Vision.
 *
 * The Initial Developer of the Original Code is The Vision Team.
 * Portions created by The Vision Team are
 * Copyright (C) 1999, 2000, 2001 The Vision Team.  All Rights
 * Reserved.
 *
 * Contributor(s): Rene Gollent
				   Alan Ellis
 */

#include "PrefGeneral.h"
#include "PrefAliases.h"
#include "PrefApp.h"
#include "PrefColor.h"
#include "PrefDCC.h"
#include "PrefFont.h"
#include "PrefCommand.h"
#include "PrefEvent.h"
#include "PrefLog.h"

#include <stdio.h>

#include <Box.h>
#include <ListView.h>
#include <ScrollView.h>

GeneralPrefsView::GeneralPrefsView(BRect frame, const char* title, uint32 redraw, uint32 flags)
	: BView(frame, title, redraw, flags), fLastindex(0)
{
	AdoptSystemColors();
	fPrefsItems[piWindow] = new AppWindowPrefsView(BRect(0, 0, 0, 0));
	fPrefsItems[piColor] = new ColorPrefsView(BRect(0, 0, 0, 0));
	fPrefsBox = new BBox(
		BRect(0.0, 0.0, fPrefsItems[piColor]->Bounds().right + 10 + be_plain_font->StringWidth("W"),
			  fPrefsItems[piWindow]->Bounds().bottom + be_plain_font->Size() / 2),
		"Bleat", B_FOLLOW_ALL_SIDES);
	fPrefsBox->AddChild(fPrefsItems[piWindow]);
	fPrefsBox->AddChild(fPrefsItems[piColor]);
	fPrefsList =
		new BListView(BRect(0.0, 0.0, fPrefsItems[piWindow]->Bounds().right / 2,
							fPrefsItems[piWindow]->Bounds().bottom),
					  "PrefsList", B_SINGLE_SELECTION_LIST, B_FOLLOW_LEFT | B_FOLLOW_TOP_BOTTOM);
	fPrefsList->MoveTo(5, 5);
	fPrefsList->AddItem(new BStringItem(S_PREFGEN_ALIAS_ITEM));
	fPrefsList->AddItem(new BStringItem(S_PREFGEN_APP_ITEM));
	fPrefsList->AddItem(new BStringItem(S_PREFGEN_COLOR_ITEM));
	fPrefsList->AddItem(new BStringItem(S_PREFGEN_FONT_ITEM));
	fPrefsList->AddItem(new BStringItem(S_PREFGEN_COMMAND_ITEM));
	fPrefsList->AddItem(new BStringItem(S_PREFGEN_EVENT_ITEM));
	fPrefsList->AddItem(new BStringItem(S_PREFGEN_DCC_ITEM));
	fPrefsList->AddItem(new BStringItem(S_PREFGEN_LOG_ITEM));
	fPrefsList->SetSelectionMessage(new BMessage(M_GENERALPREFS_SELECTION_CHANGED));
	BScrollView* scroller(new BScrollView("list scroller", fPrefsList,
										  B_FOLLOW_LEFT | B_FOLLOW_TOP_BOTTOM, 0, false, true));
	AddChild(scroller);
	ResizeTo(scroller->Frame().right + fPrefsBox->Bounds().Width() + 10,
			 fPrefsBox->Bounds().Height() + 5);
	fPrefsBox->MoveTo(scroller->Frame().right + 5, 5);
	AddChild(fPrefsBox);
	BRect bounds(fPrefsBox->InnerFrame());
	bounds.left += 3;
	bounds.right -= 3;
	bounds.top += be_plain_font->Size() + 5;
	bounds.bottom -= 5;

	fPrefsItems[piAlias] = new AliasesPrefsView(bounds);
	fPrefsBox->AddChild(fPrefsItems[piAlias]);

	fPrefsItems[piWindow]->MoveTo(be_plain_font->StringWidth("i"), be_plain_font->Size() * 1.5);
	fPrefsItems[piWindow]->ResizeBy(be_plain_font->StringWidth("i") * 3,
									-1.2 * (be_plain_font->Size()));
	fPrefsItems[piWindow]->Hide();
	fPrefsItems[piColor]->MoveTo(be_plain_font->StringWidth("i"), be_plain_font->Size() * 1.5);
	fPrefsItems[piColor]->ResizeTo(bounds.Width() - 3, bounds.Height() - 3);

	fPrefsItems[piColor]->Hide();
	fPrefsItems[piFonts] = new FontPrefsView(bounds);
	fPrefsBox->AddChild(fPrefsItems[piFonts]);
	fPrefsItems[piFonts]->Hide();
	fPrefsItems[piCommands] = new CommandPrefsView(bounds);
	fPrefsBox->AddChild(fPrefsItems[piCommands]);
	fPrefsItems[piCommands]->Hide();
	fPrefsItems[piEvents] = new EventPrefsView(bounds);
	fPrefsBox->AddChild(fPrefsItems[piEvents]);
	fPrefsItems[piEvents]->Hide();

	fPrefsItems[piDCC] = new DCCPrefsView(bounds);
	fPrefsBox->AddChild(fPrefsItems[piDCC]);
	fPrefsItems[piDCC]->Hide();

	fPrefsItems[piLog] = new LogPrefsView(bounds);
	fPrefsBox->AddChild(fPrefsItems[piLog]);
	fPrefsItems[piLog]->Hide();
}

GeneralPrefsView::~GeneralPrefsView(void)
{
	while (fPrefsList->CountItems() != 0) delete fPrefsList->RemoveItem((int32)0);
}

void GeneralPrefsView::AttachedToWindow(void)
{
	BView::AttachedToWindow();
}

void GeneralPrefsView::AllAttached(void)
{
	BView::AllAttached();
	fPrefsList->SetTarget(this);
	fPrefsList->Select(0);
	fPrefsList->MakeFocus();
}

void GeneralPrefsView::Show(void)
{
	BView::Show();
}

void GeneralPrefsView::MessageReceived(BMessage* msg)
{
	switch (msg->what) {
	case M_GENERALPREFS_SELECTION_CHANGED: {
		int32 index(msg->FindInt32("index"));
		if (index < 0) return;
		fPrefsItems[fLastindex]->Hide();
		BStringItem* item((BStringItem*)fPrefsList->ItemAt(index));
		fPrefsBox->SetLabel(item->Text());
		fPrefsItems[index]->Show();
		fLastindex = index;
		Invalidate();
	} break;

	default:
		BView::MessageReceived(msg);
	}
}
