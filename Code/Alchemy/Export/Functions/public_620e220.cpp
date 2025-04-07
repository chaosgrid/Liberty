#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e220);
CLANG_FORWARD_PROC_SYMBOL(public_6240f50);

PROC_DECLARE(0x620e220, internal_620e220, public_620e220);
extern "C" NAKED register_t __cdecl internal_620e220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        push 4
        mov ecx, offset public_625792c
        call public_6240f50
        neg al
        sbb eax, eax
        neg eax
        dec eax
        ret 0xC
        UNREACHABLE_TRAP(0x620e220)
    }
}
