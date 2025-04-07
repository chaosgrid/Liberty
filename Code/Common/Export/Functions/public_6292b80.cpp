#include "Common-PCH.h"

PROC_DECLARE(0x6292b80, internal_6292b80, public_6292b80);
extern "C" NAKED register_t __cdecl internal_6292b80()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_639c6b0
        ret 4
        UNREACHABLE_TRAP(0x6292b80)
    }
}
