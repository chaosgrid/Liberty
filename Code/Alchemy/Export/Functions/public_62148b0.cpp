#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62148b0);

PROC_DECLARE(0x62148b0, internal_62148b0, public_62148b0);
extern "C" NAKED register_t __cdecl internal_62148b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62148b0)
    }
}
