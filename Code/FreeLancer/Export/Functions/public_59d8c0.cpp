#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d8c0);

PROC_DECLARE(0x59d8c0, internal_59d8c0, public_59d8c0);
extern "C" NAKED register_t __cdecl internal_59d8c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_67dcdc], eax
        ret 
        UNREACHABLE_TRAP(0x59d8c0)
    }
}
