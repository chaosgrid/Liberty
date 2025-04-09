#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4489f0);

PROC_DECLARE(0x4489f0, internal_4489f0, public_4489f0);
extern "C" NAKED register_t __cdecl internal_4489f0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [public_668ab0], al
        ret 
        UNREACHABLE_TRAP(0x4489f0)
    }
}
