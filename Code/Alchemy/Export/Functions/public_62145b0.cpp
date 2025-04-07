#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62145b0);

PROC_DECLARE(0x62145b0, internal_62145b0, public_62145b0);
extern "C" NAKED register_t __cdecl internal_62145b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x3C]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x62145b0)
    }
}
