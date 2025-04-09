#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ad350);
CLANG_FORWARD_PROC_SYMBOL(public_5b6c40);

PROC_DECLARE(0x5b6c40, internal_5b6c40, public_5b6c40);
extern "C" NAKED register_t __cdecl internal_5b6c40()
{
    __asm
    {
        push ecx
        add ecx, 4
        call public_5ad350
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x20], ecx
        ret 4
        UNREACHABLE_TRAP(0x5b6c40)
    }
}
