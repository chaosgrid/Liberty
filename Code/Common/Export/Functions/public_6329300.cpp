#include "Common-PCH.h"

PROC_DECLARE(0x6329300, internal_6329300, public_6329300);
extern "C" NAKED register_t __cdecl internal_6329300()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], offset public_63a4074
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 
        UNREACHABLE_TRAP(0x6329300)
    }
}
