#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6238a70);

PROC_DECLARE(0x62397c0, internal_62397c0, public_62397c0);
extern "C" NAKED register_t __cdecl internal_62397c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        call public_6238a70
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62397c0)
    }
}
