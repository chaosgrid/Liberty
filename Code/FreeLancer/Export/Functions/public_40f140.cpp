#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f140);

PROC_DECLARE(0x40f140, internal_40f140, public_40f140);
extern "C" NAKED register_t __cdecl internal_40f140()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_6164dc], eax
        ret 
        UNREACHABLE_TRAP(0x40f140)
    }
}
