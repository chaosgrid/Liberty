#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f03520);

PROC_DECLARE(0x6f03520, internal_6f03520, public_6f03520);
extern "C" NAKED register_t __cdecl internal_6f03520()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        dec eax
        ret 4
        UNREACHABLE_TRAP(0x6f03520)
    }
}
