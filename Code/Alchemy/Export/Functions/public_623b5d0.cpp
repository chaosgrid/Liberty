#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b5d0);

PROC_DECLARE(0x623b5d0, internal_623b5d0, public_623b5d0);
extern "C" NAKED register_t __cdecl internal_623b5d0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_624f1d8
        mov dword ptr ds : [eax+4], offset public_624f1c8
        inc dword ptr ds : [public_6257ba0]
        ret 
        UNREACHABLE_TRAP(0x623b5d0)
    }
}
