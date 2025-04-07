#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634db30);

PROC_DECLARE(0x634db30, internal_634db30, public_634db30);
extern "C" NAKED register_t __cdecl internal_634db30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x130], eax
        ret 4
        UNREACHABLE_TRAP(0x634db30)
    }
}
