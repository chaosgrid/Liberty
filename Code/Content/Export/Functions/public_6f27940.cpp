#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f27940);

PROC_DECLARE(0x6f27940, internal_6f27940, public_6f27940);
extern "C" NAKED register_t __cdecl internal_6f27940()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x118], eax
        ret 4
        UNREACHABLE_TRAP(0x6f27940)
    }
}
