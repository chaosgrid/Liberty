#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f528d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53330);

PROC_DECLARE(0x6f53330, internal_6f53330, public_6f53330);
extern "C" NAKED register_t __cdecl internal_6f53330()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push 0
        push ecx
        call public_6f528d0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f53330)
    }
}
