#include "EngBase-PCH.h"


#define public_661479b _public_661479b

PROC_DECLARE(0x6614780, internal_6614780, public_6614780);
extern "C" NAKED register_t __cdecl internal_6614780()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        or eax, 0xFFFFFFFF
        cmp ecx, 0xFFFFFFFF
        je public_661479b
        test ecx, ecx
        je public_661479b
        mov eax, dword ptr ds : [ecx+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        public_661479b : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6614780)
    }
}

#undef public_661479b
