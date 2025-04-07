#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d9480);

PROC_DECLARE(0x62d9480, internal_62d9480, public_62d9480);
extern "C" NAKED register_t __cdecl internal_62d9480()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x88], eax
        ret 4
        UNREACHABLE_TRAP(0x62d9480)
    }
}
