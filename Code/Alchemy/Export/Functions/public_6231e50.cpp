#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231e50);

PROC_DECLARE(0x6231e50, internal_6231e50, public_6231e50);
extern "C" NAKED register_t __cdecl internal_6231e50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x10], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6231e50)
    }
}
