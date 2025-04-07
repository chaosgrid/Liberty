#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ab0);

PROC_DECLARE(0x413fc0, internal_413fc0, public_413fc0);
extern "C" NAKED register_t __cdecl internal_413fc0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        lea eax, ds:[esi+0x70]
        push eax
        push 0x417
        push edi
        call public_418ab0
        lea ecx, ds:[esi+0xB0]
        push ecx
        push 0x418
        push edi
        call public_418ab0
        add esi, 0xF0
        push esi
        push 0x419
        push edi
        call public_418ab0
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x413fc0)
    }
}
