#include "Common-PCH.h"

PROC_DECLARE(0x62da830, internal_62da830, public_62da830);
extern "C" NAKED register_t __cdecl internal_62da830()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0x3EC90FDB
        mov dword ptr ds : [eax+8], 0x43C80000
        ret 
        UNREACHABLE_TRAP(0x62da830)
    }
}
