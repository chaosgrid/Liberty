#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e5460);

PROC_DECLARE(0x4e5460, internal_4e5460, public_4e5460);
extern "C" NAKED register_t __cdecl internal_4e5460()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x648], eax
        ret 4
        UNREACHABLE_TRAP(0x4e5460)
    }
}
