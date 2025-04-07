#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235a40);
CLANG_FORWARD_PROC_SYMBOL(public_6240f50);

PROC_DECLARE(0x6235a40, internal_6235a40, public_6235a40);
extern "C" NAKED register_t __cdecl internal_6235a40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        push 4
        mov ecx, offset public_6257aec
        call public_6240f50
        neg al
        sbb eax, eax
        neg eax
        dec eax
        ret 0xC
        UNREACHABLE_TRAP(0x6235a40)
    }
}
