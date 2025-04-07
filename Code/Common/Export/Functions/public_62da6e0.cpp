#include "Common-PCH.h"

PROC_DECLARE(0x62da6e0, internal_62da6e0, public_62da6e0);
extern "C" NAKED register_t __cdecl internal_62da6e0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], 0x42C80000
        mov dword ptr ds : [eax+0x10], 0x40400000
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], 0x3F800000
        mov dword ptr ds : [eax+0x30], ecx
        mov byte ptr ds : [eax+0x14], cl
        ret 
        UNREACHABLE_TRAP(0x62da6e0)
    }
}
