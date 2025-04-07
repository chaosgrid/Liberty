#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57c840);

PROC_DECLARE(0x57c840, internal_57c840, public_57c840);
extern "C" NAKED register_t __cdecl internal_57c840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x50C], eax
        ret 4
        UNREACHABLE_TRAP(0x57c840)
    }
}
