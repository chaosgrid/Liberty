#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429f10);

PROC_DECLARE(0x429f10, internal_429f10, public_429f10);
extern "C" NAKED register_t __cdecl internal_429f10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x5C], eax
        ret 4
        UNREACHABLE_TRAP(0x429f10)
    }
}
