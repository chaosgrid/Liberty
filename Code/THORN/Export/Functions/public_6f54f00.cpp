#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f54f00);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f10);

PROC_DECLARE(0x6f54f00, internal_6f54f00, public_6f54f00);
extern "C" NAKED register_t __cdecl internal_6f54f00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6f54f10
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x6f54f00)
    }
}
