#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_458790);
CLANG_FORWARD_PROC_SYMBOL(public_459830);
CLANG_FORWARD_PROC_SYMBOL(public_45a100);
CLANG_FORWARD_PROC_SYMBOL(public_489de0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_45a138 _public_45a138
#define public_45a13d _public_45a13d

PROC_DECLARE(0x45a100, internal_45a100, public_45a100);
extern "C" NAKED register_t __cdecl internal_45a100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d3f0]
        test eax, eax
        jne public_45a13d
        mov byte ptr ds : [public_66d35a], 0
        call public_459830
        call public_458790
        mov al, byte ptr ss : [esp+4]
        test al, al
        je public_45a138
        push 0
        push 0
/*FIXUP push offset public_5ce820 @0x45a126*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce820
/*FIXUP push offset public_5ce820 @0x45a12b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce820
        call public_59db20
        add esp, 0x10
        public_45a138 : nop
        jmp public_489de0
        public_45a13d : nop
        ret 
        UNREACHABLE_TRAP(0x45a100)
    }
}

#undef public_45a138
#undef public_45a13d
