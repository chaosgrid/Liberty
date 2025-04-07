#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58a5e0);

PROC_DECLARE(0x58a5e0, internal_58a5e0, public_58a5e0);
extern "C" NAKED register_t __cdecl internal_58a5e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x334], eax
        ret 4
        UNREACHABLE_TRAP(0x58a5e0)
    }
}
