#include "Common-PCH.h"

PROC_DECLARE(0x62da5b0, internal_62da5b0, public_62da5b0);
extern "C" NAKED register_t __cdecl internal_62da5b0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov edx, 0x3F19999A
        mov dword ptr ds : [eax], 0x43FA0000
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], 0x3F490FDB
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], 0x3F800000
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], 0x42C80000
        mov dword ptr ds : [eax+0x30], 0x41200000
        mov dword ptr ds : [eax+0x34], edx
        mov dword ptr ds : [eax+0x38], edx
        mov dword ptr ds : [eax+0x3C], 0x3E19999A
        mov dword ptr ds : [eax+0x40], 0x3F800000
        mov byte ptr ds : [eax+0x44], cl
        mov dword ptr ds : [eax+0x48], ecx
        mov dword ptr ds : [eax+0x4C], ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov dword ptr ds : [eax+0x54], ecx
        ret 
        UNREACHABLE_TRAP(0x62da5b0)
    }
}
