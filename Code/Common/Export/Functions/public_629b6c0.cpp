#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_629b6d0);

PROC_DECLARE(0x629b6c0, internal_629b6c0, public_629b6c0);
extern "C" NAKED register_t __cdecl internal_629b6c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], eax
        jmp public_629b6d0
        UNREACHABLE_TRAP(0x629b6c0)
    }
}
