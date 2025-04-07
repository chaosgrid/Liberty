#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600dc0);

#define public_6600dcf _public_6600dcf

PROC_DECLARE(0x6600dc0, internal_6600dc0, public_6600dc0);
extern "C" NAKED register_t __cdecl internal_6600dc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xE
        jle public_6600dcf
        mov eax, offset public_6602c88
        ret 
        public_6600dcf : nop
        lea ecx, ds:[eax+eax*8]
        lea edx, ds:[eax+ecx*2]
        lea eax, ds : [edx*4+public_6602c88]
        ret 
        UNREACHABLE_TRAP(0x6600dc0)
    }
}

#undef public_6600dcf
