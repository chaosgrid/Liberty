#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d93c0);

PROC_DECLARE(0x62d93c0, internal_62d93c0, public_62d93c0);
extern "C" NAKED register_t __cdecl internal_62d93c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x8C], eax
        ret 4
        UNREACHABLE_TRAP(0x62d93c0)
    }
}
