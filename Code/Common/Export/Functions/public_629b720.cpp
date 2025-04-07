#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b720);

PROC_DECLARE(0x629b720, internal_629b720, public_629b720);
extern "C" NAKED register_t __cdecl internal_629b720()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp], eax
        xor eax, eax
        lea edx, ss:[esp]
        push edx
        mov byte ptr ss : [esp+8], al
        mov dword ptr ss : [esp+0xC], eax
        call public_629b440
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x629b720)
    }
}
