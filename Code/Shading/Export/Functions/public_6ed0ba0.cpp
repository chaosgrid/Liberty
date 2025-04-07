#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0ba0);

#define public_6ed0baf _public_6ed0baf

PROC_DECLARE(0x6ed0ba0, internal_6ed0ba0, public_6ed0ba0);
extern "C" NAKED register_t __cdecl internal_6ed0ba0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xE
        jle public_6ed0baf
        mov eax, offset public_6ed5230
        ret 
        public_6ed0baf : nop
        lea ecx, ds:[eax+eax*8]
        lea edx, ds:[eax+ecx*2]
        lea eax, ds : [edx*4+public_6ed5230]
        ret 
        UNREACHABLE_TRAP(0x6ed0ba0)
    }
}

#undef public_6ed0baf
