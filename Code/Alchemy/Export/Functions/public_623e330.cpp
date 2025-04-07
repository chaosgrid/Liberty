#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e330);

PROC_DECLARE(0x623e330, internal_623e330, public_623e330);
extern "C" NAKED register_t __cdecl internal_623e330()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0x99]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x623e330)
    }
}
