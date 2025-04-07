#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5cc70);

#define public_6d5cc7f _public_6d5cc7f

PROC_DECLARE(0x6d5cc70, internal_6d5cc70, public_6d5cc70);
extern "C" NAKED register_t __cdecl internal_6d5cc70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xE
        jle public_6d5cc7f
        mov eax, offset public_6d70000
        ret 
        public_6d5cc7f : nop
        lea ecx, ds:[eax+eax*8]
        lea edx, ds:[eax+ecx*2]
        lea eax, ds : [edx*4+public_6d70000]
        ret 
        UNREACHABLE_TRAP(0x6d5cc70)
    }
}

#undef public_6d5cc7f
