#include "Shading-PCH.h"

PROC_DECLARE(0x6ebb3e0, internal_6ebb3e0, public_6ebb3e0);
extern "C" NAKED register_t __cdecl internal_6ebb3e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0x48
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ebb3e0)
    }
}
