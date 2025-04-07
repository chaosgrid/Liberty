#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62afb00);

PROC_DECLARE(0x62aca00, internal_62aca00, public_62aca00);
extern "C" NAKED register_t __cdecl internal_62aca00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], edx
        jmp public_62afb00
        UNREACHABLE_TRAP(0x62aca00)
    }
}
