#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4680);

PROC_DECLARE(0x4c4680, internal_4c4680, public_4c4680);
extern "C" NAKED register_t __cdecl internal_4c4680()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_61226c], eax
        ret 
        UNREACHABLE_TRAP(0x4c4680)
    }
}
