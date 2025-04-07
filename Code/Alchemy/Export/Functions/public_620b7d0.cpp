#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b7d0);
CLANG_FORWARD_PROC_SYMBOL(public_620b850);
CLANG_FORWARD_PROC_SYMBOL(public_623ecf0);
CLANG_FORWARD_JUMP_SYMBOL(public_6247810);

#define public_620b823 _public_620b823

PROC_DECLARE(0x620b7d0, internal_620b7d0, public_620b7d0);
extern "C" NAKED register_t __cdecl internal_620b7d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247810 @0x620b7d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247810
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        mov dword ptr ss : [esp+8], 0
        mov edi, dword ptr ss : [esp+0x20]
        push ecx
        mov eax, esp
        mov dword ptr ss : [esp+0xC], esp
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ds : [eax], edi
        lea eax, ss:[esp+0xC]
        push eax
        call public_620b850
        mov eax, dword ptr ds : [edi+8]
        mov byte ptr ss : [esp+0x14], 1
        test eax, eax
        je public_620b823
        dec dword ptr ds : [eax+0xB4]
        public_620b823 : nop
        mov ecx, dword ptr ds : [esi+8]
        push edi
        call public_623ecf0
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x620b7d0)
    }
}

#undef public_620b823
