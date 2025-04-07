#include "Common-PCH.h"

PROC_DECLARE(0x6325f10, internal_6325f10, public_6325f10);
extern "C" NAKED register_t __cdecl internal_6325f10()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a4564
        ret 4
        UNREACHABLE_TRAP(0x6325f10)
    }
}
