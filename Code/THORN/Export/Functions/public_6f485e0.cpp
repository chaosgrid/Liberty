#include "THORN-PCH.h"


#define public_6f485f2 _public_6f485f2

PROC_DECLARE(0x6f485e0, internal_6f485e0, public_6f485e0);
extern "C" NAKED register_t __cdecl internal_6f485e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        cmp dword ptr ss : [esp+4], eax
        jb public_6f485f2
        test eax, eax
        jl public_6f485f2
        xor eax, eax
        ret 8
        public_6f485f2 : nop
        mov eax, 1
        ret 8
        UNREACHABLE_TRAP(0x6f485e0)
    }
}

#undef public_6f485f2
