#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b3d0);

PROC_DECLARE(0x623b3d0, internal_623b3d0, public_623b3d0);
extern "C" NAKED register_t __cdecl internal_623b3d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xBC]
        dec ecx
        mov dword ptr ds : [eax+0xBC], ecx
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x623b3d0)
    }
}
