#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231900);

PROC_DECLARE(0x6231900, internal_6231900, public_6231900);
extern "C" NAKED register_t __cdecl internal_6231900()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x30]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6231900)
    }
}
