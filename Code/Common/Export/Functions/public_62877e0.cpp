#include "Common-PCH.h"

PROC_DECLARE(0x62877e0, internal_62877e0, public_62877e0);
extern "C" NAKED register_t __cdecl internal_62877e0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0
        ret 
        UNREACHABLE_TRAP(0x62877e0)
    }
}
