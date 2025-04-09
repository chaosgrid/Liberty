#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4220a0);

PROC_DECLARE(0x4220a0, internal_4220a0, public_4220a0);
extern "C" NAKED register_t __cdecl internal_4220a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_6648d4], eax
        mov byte ptr ds : [public_6648d0], 1
        ret 
        UNREACHABLE_TRAP(0x4220a0)
    }
}
