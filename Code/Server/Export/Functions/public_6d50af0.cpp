#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf1990);
CLANG_FORWARD_PROC_SYMBOL(public_6d50af0);

#define public_6d50b0d _public_6d50b0d

PROC_DECLARE(0x6d50af0, internal_6d50af0, public_6d50af0);
extern "C" NAKED register_t __cdecl internal_6d50af0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x3CC]
        test eax, eax
        je public_6d50b0d
        mov eax, dword ptr ds : [ecx+0x348]
        push 0
        push eax
        mov ecx, offset public_6d8facc
        call public_6cf1990
        public_6d50b0d : nop
        ret 
        UNREACHABLE_TRAP(0x6d50af0)
    }
}

#undef public_6d50b0d
