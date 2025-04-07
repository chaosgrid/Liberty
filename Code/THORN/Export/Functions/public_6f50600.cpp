#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ba60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f730);

#define public_6f5061e _public_6f5061e
#define public_6f50632 _public_6f50632
#define public_6f50635 _public_6f50635
#define public_6f50648 _public_6f50648

PROC_DECLARE(0x6f50600, internal_6f50600, public_6f50600);
extern "C" NAKED register_t __cdecl internal_6f50600()
{
    __asm
    {
        push esi
        push 1
        call public_6f4f730
        push eax
        call public_6f4af60
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        add esp, 8
        cmp eax, 0xFFFFFFFA
        jne public_6f5061e
        xor esi, esi
        jmp public_6f50635
        public_6f5061e : nop
        cmp eax, 0xFFFFFFFE
        je public_6f50632
/*FIXUP push offset public_6f60460 @0x6f50623*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60460
        push 1
        call public_6f4f570
        add esp, 8
        public_6f50632 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6f50635 : nop
        push esi
        call public_6f4ba60
        add esp, 4
        test eax, eax
        pop esi
        jne public_6f50648
        jmp public_6f4b6c0
        public_6f50648 : nop
        ret 
        UNREACHABLE_TRAP(0x6f50600)
    }
}

#undef public_6f5061e
#undef public_6f50632
#undef public_6f50635
#undef public_6f50648
