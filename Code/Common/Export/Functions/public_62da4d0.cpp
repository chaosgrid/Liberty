#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62da4d0);

PROC_DECLARE(0x62da4d0, internal_62da4d0, public_62da4d0);
extern "C" NAKED register_t __cdecl internal_62da4d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x154], eax
        ret 4
        UNREACHABLE_TRAP(0x62da4d0)
    }
}
