#include "Server-PCH.h"


#define public_6d2947b _public_6d2947b

PROC_DECLARE(0x6d29460, internal_6d29460, public_6d29460);
extern "C" NAKED register_t __cdecl internal_6d29460()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [ecx+4], eax
        je public_6d2947b
        cmp word ptr ds : [eax-2], 0xA
        je public_6d2947b
        xor eax, eax
        ret 8
        public_6d2947b : nop
        mov eax, 1
        ret 8
        UNREACHABLE_TRAP(0x6d29460)
    }
}

#undef public_6d2947b
