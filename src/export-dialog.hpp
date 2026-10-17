/*
Scene Suitcase
Copyright (C) 2026 Tsuzuri Naoto 332597240+tsuzuri-naoto@users.noreply.github.com

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program. If not, see <https://www.gnu.org/licenses/>
*/

#pragma once

class QWidget;

// メニューから呼ぶ。出力先ダイアログ〜結果表示まで。
void run_export(QWidget *parent);

// OBS_FRONTEND_EVENT_EXIT から、export_shutdown() の前に呼ぶ。書き出し中なら
// 「終わるまで待っています」の窓を出して、描画を回しながら完了を待つ。
void export_wait_on_exit();

// OBS_FRONTEND_EVENT_EXIT と obs_module_unload から呼ぶ。書き出し中なら終わるまで待つ。
void export_shutdown();
