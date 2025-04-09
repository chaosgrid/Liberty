#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53ebe0);

PROC_DECLARE(0x53ebe0, internal_53ebe0, public_53ebe0);
extern "C" NAKED register_t __cdecl internal_53ebe0()
{
    __asm
    {
        push ecx
        call dword ptr ds : [public_5c71dc]
        mov dword ptr ss : [esp], eax
        fild dword ptr ss : [esp]
        fmul dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5da778]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x53ebe0)
    }
}
