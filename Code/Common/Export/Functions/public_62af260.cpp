#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e600);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62af270 _public_62af270
#define public_62af282 _public_62af282

PROC_DECLARE(0x62af260, internal_62af260, public_62af260);
extern "C" NAKED register_t __cdecl internal_62af260()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc420]
        test eax, eax
        je public_62af282
        push esi
        lea ebx, ds:[ebx]
        public_62af270 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_62af270
        pop esi
        public_62af282 : nop
        mov ecx, offset public_63fc400
        mov dword ptr ds : [public_63fc420], 0
        mov dword ptr ds : [public_63fc42c], 0
        call public_630e600
        mov ecx, offset public_63fc3f0
        call public_630e600
        mov ecx, offset public_63fc3e0
        call public_630e600
        mov ecx, offset public_63fc3c0
        call public_630e600
        mov ecx, offset public_63fc3b0
        call public_630e600
        mov ecx, offset public_63fc3d0
        jmp public_630e600
        UNREACHABLE_TRAP(0x62af260)
    }
}

#undef public_62af270
#undef public_62af282
