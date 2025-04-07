#include "THORN-PCH.h"


#define public_6f49f52 _public_6f49f52

PROC_DECLARE(0x6f49f40, internal_6f49f40, public_6f49f40);
extern "C" NAKED register_t __cdecl internal_6f49f40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        cmp dword ptr ss : [esp+4], eax
        jb public_6f49f52
        test eax, eax
        jl public_6f49f52
        xor eax, eax
        ret 8
        public_6f49f52 : nop
        mov eax, 1
        ret 8
        UNREACHABLE_TRAP(0x6f49f40)
    }
}

#undef public_6f49f52
