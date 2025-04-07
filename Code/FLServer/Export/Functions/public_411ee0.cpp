#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41924e);

PROC_DECLARE(0x411ee0, internal_411ee0, public_411ee0);
extern "C" NAKED register_t __cdecl internal_411ee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        and eax, 0xFFFBFFFF
        mov dword ptr ss : [esp+8], eax
        jmp public_41924e
        UNREACHABLE_TRAP(0x411ee0)
    }
}
