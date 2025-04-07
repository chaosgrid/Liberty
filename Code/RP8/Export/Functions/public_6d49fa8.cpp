#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d49f69);
CLANG_FORWARD_PROC_SYMBOL(public_6d49fa8);

PROC_DECLARE(0x6d49fa8, internal_6d49fa8, public_6d49fa8);
extern "C" NAKED register_t __cdecl internal_6d49fa8()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        and dword ptr ds : [ecx+0x80], 0
        jmp public_6d49f69
        UNREACHABLE_TRAP(0x6d49fa8)
    }
}
