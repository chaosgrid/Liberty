#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202fc0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6202f76 _public_6202f76
#define public_6202f9c _public_6202f9c

PROC_DECLARE(0x6202f60, internal_6202f60, public_6202f60);
extern "C" NAKED register_t __cdecl internal_6202f60()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x9C]
        test eax, eax
        jbe public_6202f76
        dec eax
        mov dword ptr ds : [esi+0x9C], eax
        public_6202f76 : nop
        mov eax, dword ptr ds : [esi+0x9C]
        test eax, eax
        jne public_6202f9c
        mov ecx, esi
        mov dword ptr ds : [esi+0x9C], 1
        call public_6202fc0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6202f9c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6202f60)
    }
}

#undef public_6202f76
#undef public_6202f9c
