#include "Common-PCH.h"


#define public_634bdb2 _public_634bdb2

PROC_DECLARE(0x634bda0, internal_634bda0, public_634bda0);
extern "C" NAKED register_t __cdecl internal_634bda0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_634bdb2
        test ecx, ecx
        je public_634bdb2
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x10]
        public_634bdb2 : nop
        ret 4
        UNREACHABLE_TRAP(0x634bda0)
    }
}

#undef public_634bdb2
