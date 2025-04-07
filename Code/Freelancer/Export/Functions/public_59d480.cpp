#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d480);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_59d490 _public_59d490
#define public_59d4a3 _public_59d4a3

PROC_DECLARE(0x59d480, internal_59d480, public_59d480);
extern "C" NAKED register_t __cdecl internal_59d480()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67dbe8]
        test eax, eax
        je public_59d4a3
        push esi
        lea ebx, ds:[ebx]
        public_59d490 : nop
        mov esi, dword ptr ds : [eax+4]
        push eax
        call public_5b7e1d
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_59d490
        pop esi
        public_59d4a3 : nop
        mov dword ptr ds : [public_67dbe4], 0
        mov dword ptr ds : [public_67dbec], 0
        mov dword ptr ds : [public_67dbe8], 0
        ret 
        UNREACHABLE_TRAP(0x59d480)
    }
}

#undef public_59d490
#undef public_59d4a3
