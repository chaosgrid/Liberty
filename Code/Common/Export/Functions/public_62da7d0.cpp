#include "Common-PCH.h"

PROC_DECLARE(0x62da7d0, internal_62da7d0, public_62da7d0);
extern "C" NAKED register_t __cdecl internal_62da7d0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov edx, 0x3F800000
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], 0x3F000000
        mov dword ptr ds : [eax+0xC], 0x3FC00000
        mov dword ptr ds : [eax+0x10], 0x3DCCCCCD
        mov dword ptr ds : [eax+0x14], 0x3DCCCCCD
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], edx
        mov dword ptr ds : [eax+0x20], 0x40C00000
        mov dword ptr ds : [eax+0x24], edx
        mov dword ptr ds : [eax+0x28], 0x3E4CCCCD
        mov dword ptr ds : [eax+0x2C], 0x3FC00000
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x34], edx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], 0x3DCCCCCD
        ret 
        UNREACHABLE_TRAP(0x62da7d0)
    }
}
