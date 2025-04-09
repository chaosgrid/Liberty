#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c55b0);

PROC_DECLARE(0x4c55b0, internal_4c55b0, public_4c55b0);
extern "C" NAKED register_t __cdecl internal_4c55b0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_673348], eax
        mov dword ptr ds : [public_67334c], eax
        mov dword ptr ds : [public_673350], eax
        ret 
        UNREACHABLE_TRAP(0x4c55b0)
    }
}
