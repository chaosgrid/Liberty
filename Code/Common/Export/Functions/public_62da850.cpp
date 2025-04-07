#include "Common-PCH.h"

PROC_DECLARE(0x62da850, internal_62da850, public_62da850);
extern "C" NAKED register_t __cdecl internal_62da850()
{
    __asm
    {
        mov eax, ecx
        mov ecx, 0x40A00000
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], 0x3ECCCCCD
        mov dword ptr ds : [eax+0x10], 0x3EC90FDB
        mov dword ptr ds : [eax], 0xBF800000
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+0x14], 0x43960000
        mov dword ptr ds : [eax+0x18], 0x451C4000
        mov dword ptr ds : [eax+0x1C], 0x40000000
        mov dword ptr ds : [eax+0x20], ecx
        ret 
        UNREACHABLE_TRAP(0x62da850)
    }
}
