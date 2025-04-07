#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac2410);
CLANG_FORWARD_PROC_SYMBOL(public_6acf3d0);

#define public_6ac2462 _public_6ac2462
#define public_6ac2464 _public_6ac2464

PROC_DECLARE(0x6ac243d, internal_6ac243d, public_6ac243d);
extern "C" NAKED register_t __cdecl internal_6ac243d()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        lea eax, ds:[esi+4]
        push eax
        call dword ptr ds : [public_6ada078]
        test eax, eax
        jne public_6ac2464
        test esi, esi
        je public_6ac2462
        mov ecx, esi
        call public_6ac2410
        push esi
        call public_6acf3d0
        pop ecx
        public_6ac2462 : nop
        xor eax, eax
        public_6ac2464 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ac243d)
    }
}

#undef public_6ac2462
#undef public_6ac2464
