#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee31d0);

#define public_6ee555e _public_6ee555e

PROC_DECLARE(0x6ee5530, internal_6ee5530, public_6ee5530);
extern "C" NAKED register_t __cdecl internal_6ee5530()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        call public_6ee31d0
        test al, al
        je public_6ee555e
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push esi
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        pop esi
        public_6ee555e : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ee5530)
    }
}

#undef public_6ee555e
