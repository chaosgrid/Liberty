#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f505e0);

PROC_DECLARE(0x6f505e0, internal_6f505e0, public_6f505e0);
extern "C" NAKED register_t __cdecl internal_6f505e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6f4f6d0
        push eax
        call public_6f4af60
        mov eax, dword ptr ds : [eax+8]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f505e0)
    }
}
