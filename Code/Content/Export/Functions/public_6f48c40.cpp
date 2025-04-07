#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f48c40);

PROC_DECLARE(0x6f48c40, internal_6f48c40, public_6f48c40);
extern "C" NAKED register_t __cdecl internal_6f48c40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xE8], eax
        ret 4
        UNREACHABLE_TRAP(0x6f48c40)
    }
}
