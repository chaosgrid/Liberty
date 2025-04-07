#include "Common-PCH.h"

PROC_DECLARE(0x62a3a80, internal_62a3a80, public_62a3a80);
extern "C" NAKED register_t __cdecl internal_62a3a80()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 1
        ret 
        UNREACHABLE_TRAP(0x62a3a80)
    }
}
