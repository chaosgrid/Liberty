#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442200);
CLANG_FORWARD_PROC_SYMBOL(public_445d30);

#define public_445d4f _public_445d4f
#define public_445d5f _public_445d5f
#define public_445d6c _public_445d6c

PROC_DECLARE(0x445d30, internal_445d30, public_445d30);
extern "C" NAKED register_t __cdecl internal_445d30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x300]
        cmp eax, 1
        je public_445d6c
        cmp eax, 2
        jne public_445d4f
        push 5
        call public_442200
        add esp, 4
        ret 
        public_445d4f : nop
        cmp eax, 3
        jne public_445d5f
        push 7
        call public_442200
        add esp, 4
        ret 
        public_445d5f : nop
        cmp eax, 4
        jne public_445d6c
        push 8
        call public_442200
        pop ecx
        public_445d6c : nop
        ret 
        UNREACHABLE_TRAP(0x445d30)
    }
}

#undef public_445d4f
#undef public_445d5f
#undef public_445d6c
