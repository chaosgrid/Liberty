#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_44fd6f _public_44fd6f

PROC_DECLARE(0x44fd10, internal_44fd10, public_44fd10);
extern "C" NAKED register_t __cdecl internal_44fd10()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0x64]
        push eax
        mov dword ptr ds : [esi], offset public_5cc6d4
        mov dword ptr ds : [esi+4], offset public_5cc6a0
        mov dword ptr ds : [esi+8], offset public_5cc684
        mov dword ptr ds : [esi+0xC], offset public_5cc664
        mov dword ptr ds : [esi+0x10], offset public_5cc62c
        mov dword ptr ds : [esi+0x14], offset public_5cc604
        mov dword ptr ds : [esi+0x18], offset public_5cc5e0
        mov dword ptr ds : [esi+0x1C], offset public_5cc5a8
        mov dword ptr ds : [esi+0x20], offset public_5cc590
        call dword ptr ds : [public_5c60c8]
        mov al, byte ptr ss : [esp+0xC]
        add esp, 4
        test al, 1
        je public_44fd6f
        push esi
        call public_5b7e1d
        add esp, 4
        public_44fd6f : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x44fd10)
    }
}

#undef public_44fd6f
