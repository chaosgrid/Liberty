#include "Shading-PCH.h"


#define public_6eb3dae _public_6eb3dae

PROC_DECLARE(0x6eb3da0, internal_6eb3da0, public_6eb3da0);
extern "C" NAKED register_t __cdecl internal_6eb3da0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6eb3dae
        mov dword ptr ds : [eax], 0
        public_6eb3dae : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6eb3da0)
    }
}

#undef public_6eb3dae
