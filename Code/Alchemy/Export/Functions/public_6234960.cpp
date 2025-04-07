#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6234ec0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6234976 _public_6234976
#define public_623499c _public_623499c

PROC_DECLARE(0x6234960, internal_6234960, public_6234960);
extern "C" NAKED register_t __cdecl internal_6234960()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x100]
        test eax, eax
        jbe public_6234976
        dec eax
        mov dword ptr ds : [esi+0x100], eax
        public_6234976 : nop
        mov eax, dword ptr ds : [esi+0x100]
        test eax, eax
        jne public_623499c
        mov ecx, esi
        mov dword ptr ds : [esi+0x100], 1
        call public_6234ec0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_623499c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6234960)
    }
}

#undef public_6234976
#undef public_623499c
