#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320240);
CLANG_FORWARD_PROC_SYMBOL(public_63221f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6320252 _public_6320252
#define public_6320269 _public_6320269

PROC_DECLARE(0x6320240, internal_6320240, public_6320240);
extern "C" NAKED register_t __cdecl internal_6320240()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_64018b8]
        push edi
        mov edi, dword ptr ds : [public_64018bc]
        cmp esi, edi
        je public_6320269
        public_6320252 : nop
        mov ecx, esi
        call public_63221f0
        add esi, 0x90
        cmp esi, edi
        jne public_6320252
        mov esi, dword ptr ds : [public_64018b8]
        public_6320269 : nop
        push esi
        call public_6391d5a
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ds : [public_64018b8], eax
        mov dword ptr ds : [public_64018bc], eax
        mov dword ptr ds : [public_64018c0], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6320240)
    }
}

#undef public_6320252
#undef public_6320269
