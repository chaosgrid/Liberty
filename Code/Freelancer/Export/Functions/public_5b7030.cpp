#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7030);

#define public_5b703f _public_5b703f

PROC_DECLARE(0x5b7030, internal_5b7030, public_5b7030);
extern "C" NAKED register_t __cdecl internal_5b7030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xE
        jle public_5b703f
        mov eax, offset public_615ec8
        ret 
        public_5b703f : nop
        lea ecx, ds:[eax+eax*8]
        lea edx, ds:[eax+ecx*2]
        lea eax, ds : [edx*4+public_615ec8]
        ret 
        UNREACHABLE_TRAP(0x5b7030)
    }
}

#undef public_5b703f
