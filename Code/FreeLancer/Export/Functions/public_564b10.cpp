#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564b10);

PROC_DECLARE(0x564b10, internal_564b10, public_564b10);
extern "C" NAKED register_t __cdecl internal_564b10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_67c200], eax
        ret 
        UNREACHABLE_TRAP(0x564b10)
    }
}
