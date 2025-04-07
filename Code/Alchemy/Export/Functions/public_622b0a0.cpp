#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622b140);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_622b0b0 _public_622b0b0
#define public_622b0d0 _public_622b0d0

PROC_DECLARE(0x622b0a0, internal_622b0a0, public_622b0a0);
extern "C" NAKED register_t __cdecl internal_622b0a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        jbe public_622b0b0
        dec eax
        mov dword ptr ds : [esi+0x28], eax
        public_622b0b0 : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        jne public_622b0d0
        mov ecx, esi
        mov dword ptr ds : [esi+0x28], 1
        call public_622b140
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_622b0d0 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x622b0a0)
    }
}

#undef public_622b0b0
#undef public_622b0d0
