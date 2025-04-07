#include "Common-PCH.h"

PROC_DECLARE(0x62db080, internal_62db080, public_62db080);
extern "C" NAKED register_t __cdecl internal_62db080()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 0xB
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e15c
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x1C], 0x3F800000
        ret 
        UNREACHABLE_TRAP(0x62db080)
    }
}
