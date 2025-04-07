#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ed50);

PROC_DECLARE(0x622ed50, internal_622ed50, public_622ed50);
extern "C" NAKED register_t __cdecl internal_622ed50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0xF0]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x622ed50)
    }
}
