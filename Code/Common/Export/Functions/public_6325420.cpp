#include "Common-PCH.h"

PROC_DECLARE(0x6325420, internal_6325420, public_6325420);
extern "C" NAKED register_t __cdecl internal_6325420()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a3edc
        ret 4
        UNREACHABLE_TRAP(0x6325420)
    }
}
