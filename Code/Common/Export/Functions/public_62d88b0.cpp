#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d88b0);

PROC_DECLARE(0x62d88b0, internal_62d88b0, public_62d88b0);
extern "C" NAKED register_t __cdecl internal_62d88b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x44], eax
        ret 4
        UNREACHABLE_TRAP(0x62d88b0)
    }
}
