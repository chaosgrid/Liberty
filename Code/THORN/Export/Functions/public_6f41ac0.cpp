#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f41ac0);

PROC_DECLARE(0x6f41ac0, internal_6f41ac0, public_6f41ac0);
extern "C" NAKED register_t __cdecl internal_6f41ac0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        lea edx, ds:[ecx+0x84]
        push edx
        call public_6f40ab0
        ret 4
        UNREACHABLE_TRAP(0x6f41ac0)
    }
}
