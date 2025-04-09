#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444960);
CLANG_FORWARD_PROC_SYMBOL(public_555ea0);

PROC_DECLARE(0x444960, internal_444960, public_444960);
extern "C" NAKED register_t __cdecl internal_444960()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_5cb9ec
        jmp public_555ea0
        UNREACHABLE_TRAP(0x444960)
    }
}
