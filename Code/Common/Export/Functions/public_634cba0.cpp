#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bf50);
CLANG_FORWARD_PROC_SYMBOL(public_634cba0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6397f0b);

#define public_634cbff _public_634cbff

PROC_DECLARE(0x634cba0, internal_634cba0, public_634cba0);
extern "C" NAKED register_t __cdecl internal_634cba0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397f0b @0x634cba2*/
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
        push 0x148
        mov esi, ecx
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_634cbff
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push edx
        push ecx
        push esi
        mov ecx, eax
        call public_634bf50
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        public_634cbff : nop
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x634cba0)
    }
}

#undef public_634cbff
