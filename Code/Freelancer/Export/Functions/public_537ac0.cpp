#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537ac0);

PROC_DECLARE(0x537ac0, internal_537ac0, public_537ac0);
extern "C" NAKED register_t __cdecl internal_537ac0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xD0]
        inc eax
        mov dword ptr ds : [ecx+0xD0], eax
        ret 
        UNREACHABLE_TRAP(0x537ac0)
    }
}
