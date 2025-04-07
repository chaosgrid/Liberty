#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d1f0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620baf6 _public_620baf6
#define public_620bb1c _public_620bb1c

PROC_DECLARE(0x620bae0, internal_620bae0, public_620bae0);
extern "C" NAKED register_t __cdecl internal_620bae0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x100]
        test eax, eax
        jbe public_620baf6
        dec eax
        mov dword ptr ds : [esi+0x100], eax
        public_620baf6 : nop
        mov eax, dword ptr ds : [esi+0x100]
        test eax, eax
        jne public_620bb1c
        mov ecx, esi
        mov dword ptr ds : [esi+0x100], 1
        call public_620d1f0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_620bb1c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x620bae0)
    }
}

#undef public_620baf6
#undef public_620bb1c
