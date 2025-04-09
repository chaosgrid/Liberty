#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c55e0);

PROC_DECLARE(0x4c55e0, internal_4c55e0, public_4c55e0);
extern "C" NAKED register_t __cdecl internal_4c55e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_67338c], eax
        ret 
        UNREACHABLE_TRAP(0x4c55e0)
    }
}
