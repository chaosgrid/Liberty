#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4ba60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bb30);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f270);

#define public_6f4bb01 _public_6f4bb01
#define public_6f4bb20 _public_6f4bb20

PROC_DECLARE(0x6f4baf0, internal_6f4baf0, public_6f4baf0);
extern "C" NAKED register_t __cdecl internal_6f4baf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6f4bb01
        push eax
        call public_6f4f270
        add esp, 4
        public_6f4bb01 : nop
        push esi
        push eax
        call public_6f4ba60
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6f4bb20
        push 2
        call public_6f4bb30
        add esp, 4
        lea eax, ds:[esi+0x28]
        pop esi
        ret 
        public_6f4bb20 : nop
        push 0
        call public_6f4bb30
        add esp, 4
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4baf0)
    }
}

#undef public_6f4bb01
#undef public_6f4bb20
