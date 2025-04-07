#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8fa90);
CLANG_FORWARD_PROC_SYMBOL(public_6d913f0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8fab0 _public_6d8fab0
#define public_6d8fab2 _public_6d8fab2
#define public_6d8fab5 _public_6d8fab5
#define public_6d8fac2 _public_6d8fac2

PROC_DECLARE(0x6d8fa90, internal_6d8fa90, public_6d8fa90);
extern "C" NAKED register_t __cdecl internal_6d8fa90()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        jne public_6d8fab5
        push 4
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d8fab0
        mov dword ptr ds : [eax], 0
        jmp public_6d8fab2
        public_6d8fab0 : nop
        xor eax, eax
        public_6d8fab2 : nop
        mov dword ptr ds : [esi+0x20], eax
        public_6d8fab5 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        pop esi
        je public_6d8fac2
        jmp public_6d913f0
        public_6d8fac2 : nop
        ret 4
        UNREACHABLE_TRAP(0x6d8fa90)
    }
}

#undef public_6d8fab0
#undef public_6d8fab2
#undef public_6d8fab5
#undef public_6d8fac2
