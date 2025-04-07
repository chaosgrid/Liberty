#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea650);
CLANG_FORWARD_PROC_SYMBOL(public_6bebcc0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea67a _public_6bea67a

PROC_DECLARE(0x6bea650, internal_6bea650, public_6bea650);
extern "C" NAKED register_t __cdecl internal_6bea650()
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
        je public_6bea67a
        mov ecx, eax
        call public_6bebcc0
        test eax, eax
        je public_6bea67a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea67a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea650)
    }
}

#undef public_6bea67a
