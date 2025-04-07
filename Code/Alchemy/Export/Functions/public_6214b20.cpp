#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214b20);

PROC_DECLARE(0x6214b20, internal_6214b20, public_6214b20);
extern "C" NAKED register_t __cdecl internal_6214b20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0x98]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x6214b20)
    }
}
