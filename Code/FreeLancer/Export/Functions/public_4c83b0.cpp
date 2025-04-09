#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c83b0);

PROC_DECLARE(0x4c83b0, internal_4c83b0, public_4c83b0);
extern "C" NAKED register_t __cdecl internal_4c83b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_67356c], eax
        ret 
        UNREACHABLE_TRAP(0x4c83b0)
    }
}
