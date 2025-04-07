#include "Common-PCH.h"

PROC_DECLARE(0x62dad60, internal_62dad60, public_62dad60);
extern "C" NAKED register_t __cdecl internal_62dad60()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e104
        mov dword ptr ds : [eax+0x10], 2
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        ret 
        UNREACHABLE_TRAP(0x62dad60)
    }
}
