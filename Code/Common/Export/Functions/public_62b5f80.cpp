#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5f80);

PROC_DECLARE(0x62b5f80, internal_62b5f80, public_62b5f80);
extern "C" NAKED register_t __cdecl internal_62b5f80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xAC], eax
        ret 4
        UNREACHABLE_TRAP(0x62b5f80)
    }
}
