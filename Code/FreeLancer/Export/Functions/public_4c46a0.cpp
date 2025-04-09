#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c46a0);

#define public_4c46bb _public_4c46bb

PROC_DECLARE(0x4c46a0, internal_4c46a0, public_4c46a0);
extern "C" NAKED register_t __cdecl internal_4c46a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jl public_4c46bb
        cmp eax, dword ptr ds : [public_673374]
        jge public_4c46bb
        lea eax, ds:[eax+eax*2]
        lea eax, ds : [eax*8+public_672978]
        ret 
        public_4c46bb : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x4c46a0)
    }
}

#undef public_4c46bb
