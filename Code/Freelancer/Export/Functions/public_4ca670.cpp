#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ca670);

#define public_4ca683 _public_4ca683

PROC_DECLARE(0x4ca670, internal_4ca670, public_4ca670);
extern "C" NAKED register_t __cdecl internal_4ca670()
{
    __asm
    {
        dec dword ptr ds : [ecx+0xC]
        jne public_4ca683
        mov dword ptr ds : [ecx], 0
        mov eax, dword ptr ds : [public_6108f8]
        mov dword ptr ds : [ecx+8], eax
        public_4ca683 : nop
        ret 
        UNREACHABLE_TRAP(0x4ca670)
    }
}

#undef public_4ca683
