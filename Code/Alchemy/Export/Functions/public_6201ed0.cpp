#include "Alchemy-PCH.h"


#define public_6201eec _public_6201eec

PROC_DECLARE(0x6201ed0, internal_6201ed0, public_6201ed0);
extern "C" NAKED register_t __cdecl internal_6201ed0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6257910]
        xor eax, eax
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test ecx, ecx
        je public_6201eec
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push eax
        call ecx
        add esp, 8
        public_6201eec : nop
        mov ecx, dword ptr ss : [esp+8]
        push esi
        push eax
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x50]
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6201ed0)
    }
}

#undef public_6201eec
