#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b38c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

PROC_DECLARE(0x5b38c0, internal_5b38c0, public_5b38c0);
extern "C" NAKED register_t __cdecl internal_5b38c0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        call public_5b7ec0
        mov dword ptr ds : [public_67ed40], eax
        ret 
        UNREACHABLE_TRAP(0x5b38c0)
    }
}
