#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4d90);

PROC_DECLARE(0x4c4d90, internal_4c4d90, public_4c4d90);
extern "C" NAKED register_t __cdecl internal_4c4d90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_673370], eax
        ret 
        UNREACHABLE_TRAP(0x4c4d90)
    }
}
