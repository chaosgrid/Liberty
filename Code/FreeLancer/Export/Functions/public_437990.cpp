#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43aaf0);

PROC_DECLARE(0x437990, internal_437990, public_437990);
extern "C" NAKED register_t __cdecl internal_437990()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov ecx, offset public_668708
        call public_43aaf0
        ret 8
        UNREACHABLE_TRAP(0x437990)
    }
}
