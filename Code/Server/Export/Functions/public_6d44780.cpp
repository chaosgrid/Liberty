#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d44780);

#define public_6d44797 _public_6d44797

PROC_DECLARE(0x6d44780, internal_6d44780, public_6d44780);
extern "C" NAKED register_t __cdecl internal_6d44780()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        jne public_6d44797
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov dword ptr ds : [public_6d8fb1c], eax
        call dword ptr ds : [public_6d64a98]
        public_6d44797 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6d44780)
    }
}

#undef public_6d44797
