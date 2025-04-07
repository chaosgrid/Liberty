#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b5fd0);

PROC_DECLARE(0x62b5fd0, internal_62b5fd0, public_62b5fd0);
extern "C" NAKED register_t __cdecl internal_62b5fd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xB8], eax
        ret 4
        UNREACHABLE_TRAP(0x62b5fd0)
    }
}
