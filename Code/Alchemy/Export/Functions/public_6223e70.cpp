#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223e70);

PROC_DECLARE(0x6223e70, internal_6223e70, public_6223e70);
extern "C" NAKED register_t __cdecl internal_6223e70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+8]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6223e70)
    }
}
