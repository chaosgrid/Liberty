#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4112f0);

PROC_DECLARE(0x4112f0, internal_4112f0, public_4112f0);
extern "C" NAKED register_t __cdecl internal_4112f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x58], eax
        ret 4
        UNREACHABLE_TRAP(0x4112f0)
    }
}
