#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee31d0);

#define public_6ee561f _public_6ee561f

PROC_DECLARE(0x6ee55f0, internal_6ee55f0, public_6ee55f0);
extern "C" NAKED register_t __cdecl internal_6ee55f0()
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
        je public_6ee561f
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0xC], edx
        call dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+8]
        ret 8
        public_6ee561f : nop
        fld dword ptr ds : [public_6ee9230]
        ret 8
        UNREACHABLE_TRAP(0x6ee55f0)
    }
}

#undef public_6ee561f
