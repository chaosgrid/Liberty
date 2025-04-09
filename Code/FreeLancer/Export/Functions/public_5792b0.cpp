#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_5792c1 _public_5792c1

PROC_DECLARE(0x5792b0, internal_5792b0, public_5792b0);
extern "C" NAKED register_t __cdecl internal_5792b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x46
        jge public_5792c1
        mov eax, dword ptr ds : [eax*4+public_679be8]
        ret 
        public_5792c1 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x5792b0)
    }
}

#undef public_5792c1
