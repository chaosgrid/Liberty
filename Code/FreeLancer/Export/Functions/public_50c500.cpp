#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4299e0);
CLANG_FORWARD_PROC_SYMBOL(public_54bc80);

#define public_50c50e _public_50c50e

PROC_DECLARE(0x50c500, internal_50c500, public_50c500);
extern "C" NAKED register_t __cdecl internal_50c500()
{
    __asm
    {
        call public_54bc80
        test al, al
        jne public_50c50e
        jmp public_4299e0
        public_50c50e : nop
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], 0xC2C00000
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x50c500)
    }
}

#undef public_50c50e
