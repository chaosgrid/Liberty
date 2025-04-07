#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e080);

PROC_DECLARE(0x623e080, internal_623e080, public_623e080);
extern "C" NAKED register_t __cdecl internal_623e080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+8]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x623e080)
    }
}
