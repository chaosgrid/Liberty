#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b6630);

#define public_5b663a _public_5b663a

PROC_DECLARE(0x5b6630, internal_5b6630, public_5b6630);
extern "C" NAKED register_t __cdecl internal_5b6630()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        jle public_5b663a
        mov eax, dword ptr ds : [ecx+eax*4]
        ret 
        public_5b663a : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x5b6630)
    }
}

#undef public_5b663a
