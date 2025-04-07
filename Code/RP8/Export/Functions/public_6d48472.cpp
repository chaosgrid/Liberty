#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f496);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d48472);

#define public_6d484a1 _public_6d484a1
#define public_6d484a5 _public_6d484a5

PROC_DECLARE(0x6d48472, internal_6d48472, public_6d48472);
extern "C" NAKED register_t __cdecl internal_6d48472()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0
        je public_6d484a5
        cmp dword ptr ss : [esp+8], 0
        je public_6d484a5
        push esi
        push dword ptr ss : [esp+0xC]
        call public_6d2f496
        mov esi, eax
        test esi, esi
        pop ecx
        jne public_6d484a1
/*FIXUP push offset public_6d61570 @0x6d48491*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d61570
        push dword ptr ss : [esp+0xC]
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d484a1 : nop
        mov eax, esi
        pop esi
        ret 
        public_6d484a5 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d48472)
    }
}

#undef public_6d484a1
#undef public_6d484a5
