#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d590);

PROC_DECLARE(0x43d590, internal_43d590, public_43d590);
extern "C" NAKED register_t __cdecl internal_43d590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_668784], eax
        ret 
        UNREACHABLE_TRAP(0x43d590)
    }
}
