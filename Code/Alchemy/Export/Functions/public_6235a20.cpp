#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235a20);

PROC_DECLARE(0x6235a20, internal_6235a20, public_6235a20);
extern "C" NAKED register_t __cdecl internal_6235a20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0xA2]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x6235a20)
    }
}
