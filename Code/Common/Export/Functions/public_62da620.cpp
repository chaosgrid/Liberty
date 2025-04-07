#include "Common-PCH.h"

PROC_DECLARE(0x62da620, internal_62da620, public_62da620);
extern "C" NAKED register_t __cdecl internal_62da620()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], 0x40400000
        mov dword ptr ds : [eax+4], 0x47C35000
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], 0x3F800000
        mov dword ptr ds : [eax+0x34], 0x40800000
        mov dword ptr ds : [eax+0x38], 0x43160000
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x30], ecx
        ret 
        UNREACHABLE_TRAP(0x62da620)
    }
}
