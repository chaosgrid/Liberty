#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f47b90);

PROC_DECLARE(0x6f47b90, internal_6f47b90, public_6f47b90);
extern "C" NAKED register_t __cdecl internal_6f47b90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x14], eax
        ret 4
        UNREACHABLE_TRAP(0x6f47b90)
    }
}
