#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235750);

PROC_DECLARE(0x6235750, internal_6235750, public_6235750);
extern "C" NAKED register_t __cdecl internal_6235750()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x10]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6235750)
    }
}
