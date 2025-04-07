#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236d70);

PROC_DECLARE(0x6236d70, internal_6236d70, public_6236d70);
extern "C" NAKED register_t __cdecl internal_6236d70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0x9A]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x6236d70)
    }
}
