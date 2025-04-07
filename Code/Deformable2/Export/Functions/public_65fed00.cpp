#include "Deformable2-PCH.h"

PROC_DECLARE(0x65fed00, internal_65fed00, public_65fed00);
extern "C" NAKED register_t __cdecl internal_65fed00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 1
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x65fed00)
    }
}
