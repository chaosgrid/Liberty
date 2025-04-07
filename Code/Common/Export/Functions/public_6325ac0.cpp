#include "Common-PCH.h"

PROC_DECLARE(0x6325ac0, internal_6325ac0, public_6325ac0);
extern "C" NAKED register_t __cdecl internal_6325ac0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a4294
        ret 4
        UNREACHABLE_TRAP(0x6325ac0)
    }
}
