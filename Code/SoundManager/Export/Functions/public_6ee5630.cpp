#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee31d0);

#define public_6ee565c _public_6ee565c

PROC_DECLARE(0x6ee5630, internal_6ee5630, public_6ee5630);
extern "C" NAKED register_t __cdecl internal_6ee5630()
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
        je public_6ee565c
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push esi
        movzx esi, word ptr ds : [eax+4]
        push eax
        call dword ptr ds : [edx+8]
        mov eax, esi
        pop esi
        ret 8
        public_6ee565c : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ee5630)
    }
}

#undef public_6ee565c
