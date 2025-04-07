#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_47ad20);
CLANG_FORWARD_PROC_SYMBOL(public_47ade0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_4b71a5 _public_4b71a5

PROC_DECLARE(0x4b7180, internal_4b7180, public_4b7180);
extern "C" NAKED register_t __cdecl internal_4b7180()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xEF02
        push esi
        mov esi, ecx
        jne public_4b71a5
        push 0xE
        call public_5645c0
        add esp, 4
        mov ecx, esi
        call public_47ad20
        mov al, 1
        pop esi
        ret 0xC
        public_4b71a5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_47ade0
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4b7180)
    }
}

#undef public_4b71a5
