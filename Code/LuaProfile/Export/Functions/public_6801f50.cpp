#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c50);
CLANG_FORWARD_PROC_SYMBOL(public_6801f50);
CLANG_FORWARD_PROC_SYMBOL(public_6803ee0);

PROC_DECLARE(0x6801f50, internal_6801f50, public_6801f50);
/* CHUNK of public_6809930 */
extern "C" NAKED register_t __cdecl internal_6801f50()
{
    __asm
    {
        push 3
        call public_6801c50
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        sub ecx, 0x30
        push ecx
        call public_6803ee0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6801f50)
    }
}
