#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf780);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

PROC_DECLARE(0x6ecf780, internal_6ecf780, public_6ecf780);
extern "C" NAKED register_t __cdecl internal_6ecf780()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed5818]
        push eax
        call public_6ed0c50
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_6ed5818], eax
        mov dword ptr ds : [public_6ed581c], eax
        mov dword ptr ds : [public_6ed5820], eax
        ret 
        UNREACHABLE_TRAP(0x6ecf780)
    }
}
