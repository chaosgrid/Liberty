#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634cb90);
CLANG_FORWARD_PROC_SYMBOL(public_634cd80);
CLANG_FORWARD_PROC_SYMBOL(public_6362280);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397f0b);

#define public_634cdda _public_634cdda

PROC_DECLARE(0x634cd80, internal_634cd80, public_634cd80);
extern "C" NAKED register_t __cdecl internal_634cd80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397f0b @0x634cd82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397f0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0xA8
        mov edi, ecx
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], esi
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x14], eax
        je public_634cdda
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push ecx
        push edx
        push eax
        mov ecx, edi
        call public_634cb90
        push eax
        mov ecx, esi
        call public_6362280
        public_634cdda : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x634cd80)
    }
}

#undef public_634cdda
