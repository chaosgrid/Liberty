#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_558d60);

PROC_DECLARE(0x437400, internal_437400, public_437400);
extern "C" NAKED register_t __cdecl internal_437400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call public_558d60
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x437400)
    }
}
