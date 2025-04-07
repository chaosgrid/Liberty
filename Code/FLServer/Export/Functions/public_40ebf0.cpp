#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ab0);

PROC_DECLARE(0x40ebf0, internal_40ebf0, public_40ebf0);
extern "C" NAKED register_t __cdecl internal_40ebf0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        lea eax, ds:[esi+0x80]
        push eax
        push 0x42B
        push edi
        call public_418ab0
        lea ecx, ds:[esi+0xC0]
        push ecx
        push 0x428
        push edi
        call public_418ab0
        lea edx, ds:[esi+0x100]
        push edx
        push 0x410
        push edi
        call public_418ab0
        lea eax, ds:[esi+0x140]
        push eax
        push 0x427
        push edi
        call public_418ab0
        add esi, 0x180
        push esi
        push 0x425
        push edi
        call public_418ab0
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40ebf0)
    }
}
