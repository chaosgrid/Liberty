#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_554e90);

#define public_554e9e _public_554e9e

PROC_DECLARE(0x554e90, internal_554e90, public_554e90);
extern "C" NAKED register_t __cdecl internal_554e90()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_679954]
        test ecx, ecx
        je public_554e9e
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax]
        public_554e9e : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x554e90)
    }
}

#undef public_554e9e
