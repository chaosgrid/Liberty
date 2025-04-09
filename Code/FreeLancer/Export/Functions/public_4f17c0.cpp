#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);

#define public_4f17e7 _public_4f17e7

PROC_DECLARE(0x4f17c0, internal_4f17c0, public_4f17c0);
extern "C" NAKED register_t __cdecl internal_4f17c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[esi+0x60]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        push edx
        push eax
        mov ecx, esi
        call public_4b5060
        test al, al
        jne public_4f17e7
        pop esi
        ret 8
        public_4f17e7 : nop
        push 6
        lea ecx, ds:[esi+0x32C]
        call public_5760d0
        mov al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4f17c0)
    }
}

#undef public_4f17e7
