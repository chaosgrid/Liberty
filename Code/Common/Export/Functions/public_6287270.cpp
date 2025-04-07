#include "Common-PCH.h"

PROC_DECLARE(0x6287270, internal_6287270, public_6287270);
extern "C" NAKED register_t __cdecl internal_6287270()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x6287270)
    }
}
