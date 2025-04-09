#include "Freelancer-PCH.h"


#define public_591cbc _public_591cbc

PROC_DECLARE(0x591cb0, internal_591cb0, public_591cb0);
extern "C" NAKED register_t __cdecl internal_591cb0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, ecx
        je public_591cbc
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x10]
        public_591cbc : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x591cb0)
    }
}

#undef public_591cbc
