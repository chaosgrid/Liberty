#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f471b0);

PROC_DECLARE(0x6f471b0, internal_6f471b0, public_6f471b0);
extern "C" NAKED register_t __cdecl internal_6f471b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xD0], eax
        ret 4
        UNREACHABLE_TRAP(0x6f471b0)
    }
}
