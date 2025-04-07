#include "Common-PCH.h"

PROC_DECLARE(0x6262e50, internal_6262e50, public_6262e50);
extern "C" NAKED register_t __cdecl internal_6262e50()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [eax+0x404], ecx
        mov dword ptr ds : [eax+0x400], ecx
        ret 
        UNREACHABLE_TRAP(0x6262e50)
    }
}
