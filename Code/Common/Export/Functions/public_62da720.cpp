#include "Common-PCH.h"

PROC_DECLARE(0x62da720, internal_62da720, public_62da720);
extern "C" NAKED register_t __cdecl internal_62da720()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], 0x3F060A92
        mov dword ptr ds : [eax+4], 0x40200000
        mov dword ptr ds : [eax+8], 0x40800000
        mov dword ptr ds : [eax+0xC], ecx
        mov byte ptr ds : [eax+0x10], cl
        mov dword ptr ds : [eax+0x14], 0x3F800000
        mov dword ptr ds : [eax+0x18], 0x43160000
        ret 
        UNREACHABLE_TRAP(0x62da720)
    }
}
