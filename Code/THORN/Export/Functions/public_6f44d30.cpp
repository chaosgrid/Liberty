#include "THORN-PCH.h"


#define public_6f44d42 _public_6f44d42

PROC_DECLARE(0x6f44d30, internal_6f44d30, public_6f44d30);
extern "C" NAKED register_t __cdecl internal_6f44d30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        cmp dword ptr ss : [esp+4], eax
        jb public_6f44d42
        test eax, eax
        jl public_6f44d42
        xor eax, eax
        ret 8
        public_6f44d42 : nop
        mov eax, 1
        ret 8
        UNREACHABLE_TRAP(0x6f44d30)
    }
}

#undef public_6f44d42
