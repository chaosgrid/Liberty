#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421ca0);

PROC_DECLARE(0x421ca0, internal_421ca0, public_421ca0);
extern "C" NAKED register_t __cdecl internal_421ca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_61689c], eax
        mov dword ptr ds : [public_6168a0], ecx
        ret 
        UNREACHABLE_TRAP(0x421ca0)
    }
}
