#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8120);

PROC_DECLARE(0x6fa8120, internal_6fa8120, public_6fa8120);
extern "C" NAKED register_t __cdecl internal_6fa8120()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xC], eax
        ret 4
        UNREACHABLE_TRAP(0x6fa8120)
    }
}
