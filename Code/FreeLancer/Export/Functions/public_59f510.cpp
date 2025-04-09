#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_434630);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_59e5c0);
CLANG_FORWARD_PROC_SYMBOL(public_59efa0);
CLANG_FORWARD_PROC_SYMBOL(public_59f510);

#define public_59f57a _public_59f57a
#define public_59f589 _public_59f589

PROC_DECLARE(0x59f510, internal_59f510, public_59f510);
extern "C" NAKED register_t __cdecl internal_59f510()
{
    __asm
    {
        push esi
        push 6
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_59f589
        push 9
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_59f589
        test byte ptr ds : [esi+0x6C], 2
        je public_59f57a
        push 0
        push 0x3F800000
        push 0
/*FIXUP push offset public_67dbf8 @0x59f53e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        lea ecx, ds:[esi+0x7C]
        call public_59efa0
        test byte ptr ds : [esi+0xA4], 1
        je public_59f57a
        mov ecx, dword ptr ds : [esi+0x80]
        push 0
        push 0x3F800000
        push 1
        lea eax, ds:[esi+0xA5]
        push eax
        push 1
        push ecx
/*FIXUP push offset public_67dbf8 @0x59f56d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_434630
        add esp, 0x1C
        public_59f57a : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_59f589
        mov ecx, esi
        pop esi
        jmp public_59e5c0
        public_59f589 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x59f510)
    }
}

#undef public_59f57a
#undef public_59f589
