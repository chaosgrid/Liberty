#include "THORN-PCH.h"


#define public_6f43d62 _public_6f43d62

PROC_DECLARE(0x6f43d50, internal_6f43d50, public_6f43d50);
extern "C" NAKED register_t __cdecl internal_6f43d50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        cmp dword ptr ss : [esp+4], eax
        jb public_6f43d62
        test eax, eax
        jl public_6f43d62
        xor eax, eax
        ret 8
        public_6f43d62 : nop
        mov eax, 1
        ret 8
        UNREACHABLE_TRAP(0x6f43d50)
    }
}

#undef public_6f43d62
