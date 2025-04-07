#include "Common-PCH.h"

PROC_DECLARE(0x62da7a0, internal_62da7a0, public_62da7a0);
extern "C" NAKED register_t __cdecl internal_62da7a0()
{
    __asm
    {
        mov eax, ecx
        mov edx, 0x3F000000
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax], 0x40000000
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], 0x40400000
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x10], edx
        ret 
        UNREACHABLE_TRAP(0x62da7a0)
    }
}
