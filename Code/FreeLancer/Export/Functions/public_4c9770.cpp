#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c9770, internal_4c9770, public_4c9770);
extern "C" NAKED register_t __cdecl internal_4c9770()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0xC], cl
        mov dword ptr ds : [eax], offset public_5d711c
        ret 
        UNREACHABLE_TRAP(0x4c9770)
    }
}
