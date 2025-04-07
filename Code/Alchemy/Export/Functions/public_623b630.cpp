#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b630);

PROC_DECLARE(0x623b630, internal_623b630, public_623b630);
extern "C" NAKED register_t __cdecl internal_623b630()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_624f1d8
        mov dword ptr ds : [ecx+4], offset public_624f1c8
        dec dword ptr ds : [public_6257ba0]
        ret 
        UNREACHABLE_TRAP(0x623b630)
    }
}
