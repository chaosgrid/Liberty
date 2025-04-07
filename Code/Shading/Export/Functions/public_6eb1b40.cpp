#include "Shading-PCH.h"

PROC_DECLARE(0x6eb1b40, internal_6eb1b40, public_6eb1b40);
extern "C" NAKED register_t __cdecl internal_6eb1b40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 1
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6eb1b40)
    }
}
