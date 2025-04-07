#include "Common-PCH.h"

PROC_DECLARE(0x6306260, internal_6306260, public_6306260);
extern "C" NAKED register_t __cdecl internal_6306260()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], offset public_63a2ffc
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 
        UNREACHABLE_TRAP(0x6306260)
    }
}
