#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62122b0);

PROC_DECLARE(0x62122b0, internal_62122b0, public_62122b0);
extern "C" NAKED register_t __cdecl internal_62122b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x10], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x62122b0)
    }
}
