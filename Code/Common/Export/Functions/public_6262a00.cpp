#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262a00);

#define public_6262a0b _public_6262a0b

PROC_DECLARE(0x6262a00, internal_6262a00, public_6262a00);
extern "C" NAKED register_t __cdecl internal_6262a00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_6262a0b
        mov eax, dword ptr ds : [ecx+0x20]
        ret 
        public_6262a0b : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6262a00)
    }
}

#undef public_6262a0b
