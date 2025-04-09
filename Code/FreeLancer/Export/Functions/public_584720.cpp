#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_584720);

#define public_584735 _public_584735

PROC_DECLARE(0x584720, internal_584720, public_584720);
extern "C" NAKED register_t __cdecl internal_584720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jl public_584735
        cmp eax, 0x3C
        jge public_584735
        mov eax, dword ptr ds : [eax*8+public_615240]
        ret 
        public_584735 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x584720)
    }
}

#undef public_584735
