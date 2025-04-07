#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ab0);

PROC_DECLARE(0x4070f0, internal_4070f0, public_4070f0);
extern "C" NAKED register_t __cdecl internal_4070f0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        lea eax, ds:[esi+0x60]
        push eax
        push 0x40D
        push edi
        call public_418ab0
        add esi, 0xA0
        push esi
        push 0x40E
        push edi
        call public_418ab0
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4070f0)
    }
}
