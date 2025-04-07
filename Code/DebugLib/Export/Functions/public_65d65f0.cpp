#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6a60);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d6606 _public_65d6606
#define public_65d662c _public_65d662c

PROC_DECLARE(0x65d65f0, internal_65d65f0, public_65d65f0);
extern "C" NAKED register_t __cdecl internal_65d65f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x2520]
        test eax, eax
        jbe public_65d6606
        dec eax
        mov dword ptr ds : [esi+0x2520], eax
        public_65d6606 : nop
        mov eax, dword ptr ds : [esi+0x2520]
        test eax, eax
        jne public_65d662c
        mov ecx, esi
        mov dword ptr ds : [esi+0x2520], 1
        call public_65d6a60
        push esi
        call public_65d6cb8
        add esp, 4
        xor eax, eax
        public_65d662c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d65f0)
    }
}

#undef public_65d6606
#undef public_65d662c
