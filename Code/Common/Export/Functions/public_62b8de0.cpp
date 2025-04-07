#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b8c20);
CLANG_FORWARD_PROC_SYMBOL(public_62b8de0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);

#define public_62b8df0 _public_62b8df0
#define public_62b8e09 _public_62b8e09
#define public_62b8e14 _public_62b8e14

PROC_DECLARE(0x62b8de0, internal_62b8de0, public_62b8de0);
extern "C" NAKED register_t __cdecl internal_62b8de0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, esi
        call public_6310070
        test al, al
        je public_62b8e14
/*FIXUP public_62b8df0 : nop
        push offset public_639ecb8 @0x62b8df0*/
  FIXUP public_62b8df0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ecb8
        mov ecx, esi
        call public_63103c0
        test al, al
        je public_62b8e09
        push esi
        call public_62b8c20
        add esp, 4
        public_62b8e09 : nop
        mov ecx, esi
        call public_6310070
        test al, al
        jne public_62b8df0
        public_62b8e14 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62b8de0)
    }
}

#undef public_62b8df0
#undef public_62b8e09
#undef public_62b8e14
