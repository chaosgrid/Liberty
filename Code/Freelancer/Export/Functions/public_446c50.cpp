#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446c50);

PROC_DECLARE(0x446c50, internal_446c50, public_446c50);
extern "C" NAKED register_t __cdecl internal_446c50()
{
    __asm
    {
        add ecx, 0x34
        push ecx
        call dword ptr ds : [public_5c60c8]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x446c50)
    }
}
