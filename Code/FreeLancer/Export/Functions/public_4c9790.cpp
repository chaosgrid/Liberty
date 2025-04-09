#include "Freelancer-PCH.h"

PROC_DECLARE(0x4c9790, internal_4c9790, public_4c9790);
extern "C" NAKED register_t __cdecl internal_4c9790()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_5d711c
        ret 4
        UNREACHABLE_TRAP(0x4c9790)
    }
}
