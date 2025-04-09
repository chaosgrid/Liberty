#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4582c0);
CLANG_FORWARD_PROC_SYMBOL(public_558470);

PROC_DECLARE(0x4582c0, internal_4582c0, public_4582c0);
extern "C" NAKED register_t __cdecl internal_4582c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        add ecx, 0x20
        call public_558470
        ret 4
        UNREACHABLE_TRAP(0x4582c0)
    }
}
