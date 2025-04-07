#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d6740);

PROC_DECLARE(0x62d6740, internal_62d6740, public_62d6740);
extern "C" NAKED register_t __cdecl internal_62d6740()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x58], eax
        ret 4
        UNREACHABLE_TRAP(0x62d6740)
    }
}
