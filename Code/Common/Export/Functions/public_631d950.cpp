#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631d950);

PROC_DECLARE(0x631d950, internal_631d950, public_631d950);
extern "C" NAKED register_t __cdecl internal_631d950()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x1C], eax
        ret 4
        UNREACHABLE_TRAP(0x631d950)
    }
}
