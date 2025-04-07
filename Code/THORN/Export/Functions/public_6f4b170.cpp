#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b170);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b190);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e280);

PROC_DECLARE(0x6f4b170, internal_6f4b170, public_6f4b170);
extern "C" NAKED register_t __cdecl internal_6f4b170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        call public_6f4e280
        push eax
        call public_6f4b190
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f4b170)
    }
}
