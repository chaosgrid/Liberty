#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be9990);
CLANG_FORWARD_PROC_SYMBOL(public_6bea720);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be99ba _public_6be99ba

PROC_DECLARE(0x6be9990, internal_6be9990, public_6be9990);
extern "C" NAKED register_t __cdecl internal_6be9990()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x24
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be99ba
        mov ecx, eax
        call public_6bea720
        test eax, eax
        je public_6be99ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be99ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be9990)
    }
}

#undef public_6be99ba
