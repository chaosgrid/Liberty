#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ab0);

PROC_DECLARE(0x4075b0, internal_4075b0, public_4075b0);
extern "C" NAKED register_t __cdecl internal_4075b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add ecx, 0x60
        push ecx
        push 0x3ED
        push eax
        call public_418ab0
        ret 4
        UNREACHABLE_TRAP(0x4075b0)
    }
}
