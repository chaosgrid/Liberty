#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d470);
CLANG_FORWARD_PROC_SYMBOL(public_634d4f0);

#define public_634d507 _public_634d507

PROC_DECLARE(0x634d4f0, internal_634d4f0, public_634d4f0);
extern "C" NAKED register_t __cdecl internal_634d4f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_634d507
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_634d507
        push eax
        call public_634d470
        public_634d507 : nop
        ret 
        UNREACHABLE_TRAP(0x634d4f0)
    }
}

#undef public_634d507
