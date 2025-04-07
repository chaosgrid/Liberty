#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f471c0);

PROC_DECLARE(0x6f471c0, internal_6f471c0, public_6f471c0);
extern "C" NAKED register_t __cdecl internal_6f471c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xD4], eax
        ret 4
        UNREACHABLE_TRAP(0x6f471c0)
    }
}
