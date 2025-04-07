#include "Common-PCH.h"

PROC_DECLARE(0x6311370, internal_6311370, public_6311370);
extern "C" NAKED register_t __cdecl internal_6311370()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax], offset public_63a3714
        mov dword ptr ds : [eax+4], 1
        ret 
        UNREACHABLE_TRAP(0x6311370)
    }
}
