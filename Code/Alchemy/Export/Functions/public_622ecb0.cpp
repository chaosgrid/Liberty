#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ecb0);

PROC_DECLARE(0x622ecb0, internal_622ecb0, public_622ecb0);
extern "C" NAKED register_t __cdecl internal_622ecb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0xA0]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x622ecb0)
    }
}
