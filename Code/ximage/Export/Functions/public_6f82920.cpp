#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f82920);

#define public_6f8292f _public_6f8292f

PROC_DECLARE(0x6f82920, internal_6f82920, public_6f82920);
extern "C" NAKED register_t __cdecl internal_6f82920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xE
        jle public_6f8292f
        mov eax, offset public_6f841a8
        ret 
        public_6f8292f : nop
        lea ecx, ds:[eax+eax*8]
        lea edx, ds:[eax+ecx*2]
        lea eax, ds : [edx*4+public_6f841a8]
        ret 
        UNREACHABLE_TRAP(0x6f82920)
    }
}

#undef public_6f8292f
