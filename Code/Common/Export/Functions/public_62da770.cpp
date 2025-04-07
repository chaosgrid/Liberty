#include "Common-PCH.h"

PROC_DECLARE(0x62da770, internal_62da770, public_62da770);
extern "C" NAKED register_t __cdecl internal_62da770()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], 0x40C00000
        mov dword ptr ds : [eax+4], 0x40400000
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax+0xC], 0x3F000000
        mov dword ptr ds : [eax+0x10], 0x442F0000
        ret 
        UNREACHABLE_TRAP(0x62da770)
    }
}
