#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f6f40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x4f6f40, internal_4f6f40, public_4f6f40);
extern "C" NAKED register_t __cdecl internal_4f6f40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_674f18]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_674f18], eax
        mov dword ptr ds : [public_674f1c], eax
        mov dword ptr ds : [public_674f20], eax
        ret 
        UNREACHABLE_TRAP(0x4f6f40)
    }
}
