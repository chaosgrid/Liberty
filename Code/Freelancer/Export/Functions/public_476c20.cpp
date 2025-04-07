#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_476c20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x476c20, internal_476c20, public_476c20);
extern "C" NAKED register_t __cdecl internal_476c20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66dc0c]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_66dc0c], eax
        mov dword ptr ds : [public_66dc10], eax
        mov dword ptr ds : [public_66dc14], eax
        ret 
        UNREACHABLE_TRAP(0x476c20)
    }
}
