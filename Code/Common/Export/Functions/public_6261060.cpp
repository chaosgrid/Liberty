#include "Common-PCH.h"

PROC_DECLARE(0x6261060, internal_6261060, public_6261060);
extern "C" NAKED register_t __cdecl internal_6261060()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+8], cl
        mov dword ptr ds : [eax], offset public_63993e8
        ret 
        UNREACHABLE_TRAP(0x6261060)
    }
}
