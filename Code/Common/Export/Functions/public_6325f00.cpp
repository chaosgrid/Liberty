#include "Common-PCH.h"

PROC_DECLARE(0x6325f00, internal_6325f00, public_6325f00);
extern "C" NAKED register_t __cdecl internal_6325f00()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a4564
        ret 
        UNREACHABLE_TRAP(0x6325f00)
    }
}
