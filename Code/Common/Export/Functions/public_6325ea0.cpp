#include "Common-PCH.h"

PROC_DECLARE(0x6325ea0, internal_6325ea0, public_6325ea0);
extern "C" NAKED register_t __cdecl internal_6325ea0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a4538
        ret 
        UNREACHABLE_TRAP(0x6325ea0)
    }
}
