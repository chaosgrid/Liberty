#include "Common-PCH.h"

PROC_DECLARE(0x62da750, internal_62da750, public_62da750);
extern "C" NAKED register_t __cdecl internal_62da750()
{
    __asm
    {
        mov eax, ecx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax], 0x43960000
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 
        UNREACHABLE_TRAP(0x62da750)
    }
}
