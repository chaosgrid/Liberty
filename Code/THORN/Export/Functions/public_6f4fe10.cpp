#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

#define public_6f4fe29 _public_6f4fe29
#define public_6f4fe4c _public_6f4fe4c

PROC_DECLARE(0x6f4fe10, internal_6f4fe10, public_6f4fe10);
extern "C" NAKED register_t __cdecl internal_6f4fe10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6f4fe29
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6f5a090]
        add esp, 4
        xor eax, eax
        ret 
        public_6f4fe29 : nop
        mov ecx, dword ptr ss : [esp+4]
        push esi
        push eax
        push ecx
        call dword ptr ds : [public_6f5a0d8]
        mov esi, eax
        add esp, 8
        test esi, esi
        jne public_6f4fe4c
/*FIXUP push offset public_6f60ab4 @0x6f4fe3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60ab4
        call public_6f4c7f0
        add esp, 4
        public_6f4fe4c : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4fe10)
    }
}

#undef public_6f4fe29
#undef public_6f4fe4c
