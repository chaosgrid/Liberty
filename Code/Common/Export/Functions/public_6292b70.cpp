#include "Common-PCH.h"

PROC_DECLARE(0x6292b70, internal_6292b70, public_6292b70);
extern "C" NAKED register_t __cdecl internal_6292b70()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_639c6b0
        ret 
        UNREACHABLE_TRAP(0x6292b70)
    }
}
