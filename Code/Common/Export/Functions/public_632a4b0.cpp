#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632a2f0);
CLANG_FORWARD_PROC_SYMBOL(public_632c190);

PROC_DECLARE(0x632a4b0, internal_632a4b0, public_632a4b0);
extern "C" NAKED register_t __cdecl internal_632a4b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, offset public_6401950
        call public_632c190
        mov ecx, eax
        call public_632a2f0
        ret 
        UNREACHABLE_TRAP(0x632a4b0)
    }
}
