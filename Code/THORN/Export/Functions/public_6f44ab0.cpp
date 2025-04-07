#include "THORN-PCH.h"


#define public_6f44ac2 _public_6f44ac2

PROC_DECLARE(0x6f44ab0, internal_6f44ab0, public_6f44ab0);
extern "C" NAKED register_t __cdecl internal_6f44ab0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        cmp dword ptr ss : [esp+4], eax
        jb public_6f44ac2
        test eax, eax
        jl public_6f44ac2
        xor eax, eax
        ret 8
        public_6f44ac2 : nop
        mov eax, 1
        ret 8
        UNREACHABLE_TRAP(0x6f44ab0)
    }
}

#undef public_6f44ac2
