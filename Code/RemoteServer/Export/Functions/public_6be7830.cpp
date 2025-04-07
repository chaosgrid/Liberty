#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be7830);
CLANG_FORWARD_PROC_SYMBOL(public_6be7870);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be785a _public_6be785a

PROC_DECLARE(0x6be7830, internal_6be7830, public_6be7830);
extern "C" NAKED register_t __cdecl internal_6be7830()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x2C
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6be785a
        mov ecx, eax
        call public_6be7870
        test eax, eax
        je public_6be785a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6be785a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6be7830)
    }
}

#undef public_6be785a
