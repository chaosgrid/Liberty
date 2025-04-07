#include "Freelancer-PCH.h"

PROC_DECLARE(0x44fcb0, internal_44fcb0, public_44fcb0);
extern "C" NAKED register_t __cdecl internal_44fcb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x44fcb0)
    }
}
