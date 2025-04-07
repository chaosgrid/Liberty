#include "Common-PCH.h"

PROC_DECLARE(0x6325ed0, internal_6325ed0, public_6325ed0);
extern "C" NAKED register_t __cdecl internal_6325ed0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a4548
        ret 4
        UNREACHABLE_TRAP(0x6325ed0)
    }
}
