#include "Common-PCH.h"

PROC_DECLARE(0x6328610, internal_6328610, public_6328610);
extern "C" NAKED register_t __cdecl internal_6328610()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a3edc
        ret 
        UNREACHABLE_TRAP(0x6328610)
    }
}
