#include "Common-PCH.h"

PROC_DECLARE(0x6325ab0, internal_6325ab0, public_6325ab0);
extern "C" NAKED register_t __cdecl internal_6325ab0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a4294
        ret 
        UNREACHABLE_TRAP(0x6325ab0)
    }
}
