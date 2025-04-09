#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a860);

PROC_DECLARE(0x437b10, internal_437b10, public_437b10);
extern "C" NAKED register_t __cdecl internal_437b10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, offset public_668708
        call public_43a860
        ret 8
        UNREACHABLE_TRAP(0x437b10)
    }
}
