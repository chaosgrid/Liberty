#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ef3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

PROC_DECLARE(0x62ef3b0, internal_62ef3b0, public_62ef3b0);
extern "C" NAKED register_t __cdecl internal_62ef3b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fcb00]
        push eax
        call public_6391d5a
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_63fcb00], eax
        mov dword ptr ds : [public_63fcb04], eax
        mov dword ptr ds : [public_63fcb08], eax
        ret 
        UNREACHABLE_TRAP(0x62ef3b0)
    }
}
