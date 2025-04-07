#include "Common-PCH.h"

PROC_DECLARE(0x62dadf0, internal_62dadf0, public_62dadf0);
extern "C" NAKED register_t __cdecl internal_62dadf0()
{
    __asm
    {
        mov eax, ecx
        mov edx, 2
        xor ecx, ecx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e10c
        mov dword ptr ds : [eax+0xC], edx
        mov byte ptr ds : [eax+0x10], cl
        ret 
        UNREACHABLE_TRAP(0x62dadf0)
    }
}
