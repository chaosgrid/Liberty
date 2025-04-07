#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b2f0);

PROC_DECLARE(0x623b2f0, internal_623b2f0, public_623b2f0);
extern "C" NAKED register_t __cdecl internal_623b2f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0xF0]
        xor eax, eax
        shl ecx, 2
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x623b2f0)
    }
}
