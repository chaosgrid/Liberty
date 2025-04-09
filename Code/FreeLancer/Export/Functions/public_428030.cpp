#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428030);

PROC_DECLARE(0x428030, internal_428030, public_428030);
extern "C" NAKED register_t __cdecl internal_428030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_667cac], eax
        ret 
        UNREACHABLE_TRAP(0x428030)
    }
}
