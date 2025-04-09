#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_426e00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x426e00, internal_426e00, public_426e00);
extern "C" NAKED register_t __cdecl internal_426e00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_667a10]
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [public_667a10], eax
        mov dword ptr ds : [public_667a14], eax
        mov dword ptr ds : [public_667a18], eax
        ret 
        UNREACHABLE_TRAP(0x426e00)
    }
}
