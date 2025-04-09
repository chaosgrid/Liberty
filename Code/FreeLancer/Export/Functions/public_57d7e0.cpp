#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57d7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x57d7e0, internal_57d7e0, public_57d7e0);
extern "C" NAKED register_t __cdecl internal_57d7e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67c400]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_67c400], eax
        mov dword ptr ds : [public_67c404], eax
        mov dword ptr ds : [public_67c408], eax
        ret 
        UNREACHABLE_TRAP(0x57d7e0)
    }
}
