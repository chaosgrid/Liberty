#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_558db0);

PROC_DECLARE(0x558db0, internal_558db0, public_558db0);
extern "C" NAKED register_t __cdecl internal_558db0()
{
    __asm
    {
        xor eax, eax
        mov byte ptr ds : [public_679a04], al
        mov dword ptr ds : [public_679a08], eax
        mov dword ptr ds : [public_679a0c], eax
        ret 
        UNREACHABLE_TRAP(0x558db0)
    }
}
