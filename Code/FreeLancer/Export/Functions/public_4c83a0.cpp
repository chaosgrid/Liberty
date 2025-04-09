#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c83a0);

PROC_DECLARE(0x4c83a0, internal_4c83a0, public_4c83a0);
extern "C" NAKED register_t __cdecl internal_4c83a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_673568], eax
        ret 
        UNREACHABLE_TRAP(0x4c83a0)
    }
}
