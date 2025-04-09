#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555b90);

PROC_DECLARE(0x555b90, internal_555b90, public_555b90);
extern "C" NAKED register_t __cdecl internal_555b90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        inc dword ptr ds : [eax]
        ret 
        UNREACHABLE_TRAP(0x555b90)
    }
}
