#include "Server-PCH.h"


#define public_6d294b0 _public_6d294b0

PROC_DECLARE(0x6d29490, internal_6d29490, public_6d29490);
extern "C" NAKED register_t __cdecl internal_6d29490()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+0x18], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        cmp edx, ecx
        je public_6d294b0
        cmp word ptr ds : [ecx-2], 0xA
        je public_6d294b0
        xor eax, eax
        ret 4
        public_6d294b0 : nop
        mov eax, 1
        ret 4
        UNREACHABLE_TRAP(0x6d29490)
    }
}

#undef public_6d294b0
