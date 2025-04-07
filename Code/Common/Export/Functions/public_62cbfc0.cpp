#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e9030);

PROC_DECLARE(0x62cbfc0, internal_62cbfc0, public_62cbfc0);
extern "C" NAKED register_t __cdecl internal_62cbfc0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x24]
        mov dword ptr ss : [esp+4], 0
        add ecx, 0x18
        jmp public_62e9030
        UNREACHABLE_TRAP(0x62cbfc0)
    }
}
