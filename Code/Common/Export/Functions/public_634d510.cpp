#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d510);

#define public_634d523 _public_634d523

PROC_DECLARE(0x634d510, internal_634d510, public_634d510);
extern "C" NAKED register_t __cdecl internal_634d510()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x40]
        xor edx, edx
        cmp eax, edx
        je public_634d523
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [ecx+0x40], edx
        public_634d523 : nop
        ret 
        UNREACHABLE_TRAP(0x634d510)
    }
}

#undef public_634d523
