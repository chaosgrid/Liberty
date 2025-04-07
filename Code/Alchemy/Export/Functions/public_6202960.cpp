#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202960);

PROC_DECLARE(0x6202960, internal_6202960, public_6202960);
extern "C" NAKED register_t __cdecl internal_6202960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0x98]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x6202960)
    }
}
