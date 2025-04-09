#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43bbc0);
CLANG_FORWARD_PROC_SYMBOL(public_44b570);

#define public_43bbd5 _public_43bbd5

PROC_DECLARE(0x43bbc0, internal_43bbc0, public_43bbc0);
extern "C" NAKED register_t __cdecl internal_43bbc0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x40]
        test eax, eax
        je public_43bbd5
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_43bbd5
        mov ecx, eax
        jmp public_44b570
        public_43bbd5 : nop
        ret 
        UNREACHABLE_TRAP(0x43bbc0)
    }
}

#undef public_43bbd5
