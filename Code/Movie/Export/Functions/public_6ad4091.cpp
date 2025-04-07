#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad4091);

#define public_6ad40ae _public_6ad40ae

PROC_DECLARE(0x6ad4091, internal_6ad4091, public_6ad4091);
extern "C" NAKED register_t __cdecl internal_6ad4091()
{
    __asm
    {
        push 0x140
        push 0
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada130]
        test eax, eax
        mov dword ptr ds : [public_6ae2458], eax
        jne public_6ad40ae
        ret 
        public_6ad40ae : nop
        mov ecx, dword ptr ss : [esp+4]
        and dword ptr ds : [public_6ae2450], 0
        and dword ptr ds : [public_6ae2454], 0
        push 1
        mov dword ptr ds : [public_6ae244c], eax
        mov dword ptr ds : [public_6ae245c], ecx
        mov dword ptr ds : [public_6ae2444], 0x10
        pop eax
        ret 
        UNREACHABLE_TRAP(0x6ad4091)
    }
}

#undef public_6ad40ae
