#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f9bcb _public_65f9bcb

PROC_DECLARE(0x65f9ba0, internal_65f9ba0, public_65f9ba0);
extern "C" NAKED register_t __cdecl internal_65f9ba0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6600bb0
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov al, byte ptr ss : [esp+0xC]
        add esp, 4
        test al, 1
        je public_65f9bcb
        push esi
        call public_6600bb0
        add esp, 4
        public_65f9bcb : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65f9ba0)
    }
}

#undef public_65f9bcb
