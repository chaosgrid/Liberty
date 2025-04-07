#include "Server-PCH.h"


#define public_6d2960f _public_6d2960f

PROC_DECLARE(0x6d295f0, internal_6d295f0, public_6d295f0);
extern "C" NAKED register_t __cdecl internal_6d295f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [eax+0x18], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        cmp edx, ecx
        je public_6d2960f
        cmp word ptr ds : [ecx], 0xA
        je public_6d2960f
        xor eax, eax
        ret 4
        public_6d2960f : nop
        mov eax, 1
        ret 4
        UNREACHABLE_TRAP(0x6d295f0)
    }
}

#undef public_6d2960f
