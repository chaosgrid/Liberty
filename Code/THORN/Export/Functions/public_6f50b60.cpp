#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50b60);

PROC_DECLARE(0x6f50b60, internal_6f50b60, public_6f50b60);
extern "C" NAKED register_t __cdecl internal_6f50b60()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp]
        push ecx
        mov dword ptr ss : [esp+4], 0xFFFFFFFE
        mov dword ptr ss : [esp+0xC], eax
        call public_6f4b8b0
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f50b60)
    }
}
