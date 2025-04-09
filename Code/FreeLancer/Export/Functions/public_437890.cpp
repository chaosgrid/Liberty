#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43b110);

PROC_DECLARE(0x437890, internal_437890, public_437890);
extern "C" NAKED register_t __cdecl internal_437890()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, offset public_668708
        call public_43b110
        ret 0xC
        UNREACHABLE_TRAP(0x437890)
    }
}
