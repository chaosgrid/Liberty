#include "Common-PCH.h"

PROC_DECLARE(0x6333160, internal_6333160, public_6333160);
extern "C" NAKED register_t __cdecl internal_6333160()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], 3
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_63a49f8
        ret 4
        UNREACHABLE_TRAP(0x6333160)
    }
}
