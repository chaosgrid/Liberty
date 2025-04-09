#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d4f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_59d500 _public_59d500
#define public_59d513 _public_59d513

PROC_DECLARE(0x59d4f0, internal_59d4f0, public_59d4f0);
extern "C" NAKED register_t __cdecl internal_59d4f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67dbdc]
        test eax, eax
        je public_59d513
        push esi
        lea ebx, ds:[ebx]
        public_59d500 : nop
        mov esi, dword ptr ds : [eax+4]
        push eax
        call public_5b7e1d
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_59d500
        pop esi
        public_59d513 : nop
        mov dword ptr ds : [public_67dbd8], 0
        mov dword ptr ds : [public_67dbe0], 0
        mov dword ptr ds : [public_67dbdc], 0
        ret 
        UNREACHABLE_TRAP(0x59d4f0)
    }
}

#undef public_59d500
#undef public_59d513
