#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_451380);

#define public_451388 _public_451388

PROC_DECLARE(0x451380, internal_451380, public_451380);
extern "C" NAKED register_t __cdecl internal_451380()
{
    __asm
    {
        xor eax, eax
        lea edx, ds:[ecx+0x120]
        public_451388 : nop
        mov dword ptr ds : [edx-0x40], 0xFFFFFFFF
        mov dword ptr ds : [edx], 0xFFFFFFFF
        mov byte ptr ds : [ecx+eax+0x160], 0
        inc eax
        add edx, 4
        cmp eax, 0x10
        jl public_451388
        ret 
        UNREACHABLE_TRAP(0x451380)
    }
}

#undef public_451388
