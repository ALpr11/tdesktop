/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "ui/rp_widget.h"

#include "editor/photo_editor_common.h"

#include "base/unique_qptr.h"

namespace Editor {

class PhotoEditorContent;
class PhotoEditorControls;

class PhotoEditor final : public Ui::RpWidget {
public:
	PhotoEditor(
		not_null<Ui::RpWidget*> parent,
		std::shared_ptr<QPixmap> photo);

private:

	PhotoModifications _modifications;

	base::unique_qptr<PhotoEditorContent> _content;
	base::unique_qptr<PhotoEditorControls> _controls;

};

} // namespace Editor