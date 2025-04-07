#include "Common-PCH.h"

PROC_DECLARE(0x6274130, internal_6274130, public_6274130);
extern "C" NAKED register_t __cdecl internal_6274130()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 
        UNREACHABLE_TRAP(0x6274130)
    }
}
