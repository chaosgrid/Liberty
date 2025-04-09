#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_42d730);
CLANG_FORWARD_PROC_SYMBOL(public_442720);
CLANG_FORWARD_PROC_SYMBOL(public_442790);
CLANG_FORWARD_PROC_SYMBOL(public_45a470);
CLANG_FORWARD_PROC_SYMBOL(public_46fc90);
CLANG_FORWARD_PROC_SYMBOL(public_4c4810);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_46fca2 _public_46fca2
#define public_46fca5 _public_46fca5
#define public_46fcb7 _public_46fcb7

PROC_DECLARE(0x46fc90, internal_46fc90, public_46fc90);
extern "C" NAKED register_t __cdecl internal_46fc90()
{
    __asm
    {
        call public_4c4810
        test al, al
        jne public_46fca5
        call public_54baf0
        test eax, eax
        jne public_46fcb7
        public_46fca2 : nop
        mov al, 1
        ret 
        public_46fca5 : nop
        call public_442720
        test al, al
        jne public_46fca2
        call public_442790
        test al, al
        jne public_46fca2
/*FIXUP public_46fcb7 : nop
        push offset public_5d0234 @0x46fcb7*/
  FIXUP public_46fcb7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0234
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_46fca2
/*FIXUP push offset public_5d0228 @0x46fcc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0228
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_46fca2
/*FIXUP push offset public_5d021c @0x46fcd9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d021c
        call public_59da10
        add esp, 4
        test eax, eax
        jne public_46fca2
        call public_45a470
        test al, al
        jne public_46fca2
        mov al, byte ptr ds : [public_67dcc8]
        test al, al
        jne public_46fca2
        call public_42d730
        test al, al
        jne public_46fca2
        call public_41a3e0
        test al, al
        jne public_46fca2
        call public_41dd90
        test al, al
        je public_46fca2
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x46fc90)
    }
}

#undef public_46fca2
#undef public_46fca5
#undef public_46fcb7
