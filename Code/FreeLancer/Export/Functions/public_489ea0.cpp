#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489b50);
CLANG_FORWARD_PROC_SYMBOL(public_489ea0);

PROC_DECLARE(0x489ea0, internal_489ea0, public_489ea0);
extern "C" NAKED register_t __cdecl internal_489ea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        push 0
        push eax
        mov ecx, offset public_671f50
        call public_489b50
        ret 
        UNREACHABLE_TRAP(0x489ea0)
    }
}
