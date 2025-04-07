#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e65);
CLANG_FORWARD_PROC_SYMBOL(public_6d48e08);
CLANG_FORWARD_PROC_SYMBOL(public_6d491b4);

#define public_6d491c4 _public_6d491c4
#define public_6d491d8 _public_6d491d8
#define public_6d491f0 _public_6d491f0
#define public_6d491fc _public_6d491fc

PROC_DECLARE(0x6d491b4, internal_6d491b4, public_6d491b4);
extern "C" NAKED register_t __cdecl internal_6d491b4()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x58]
        test al, 1
        je public_6d491c4
        test al, 4
        jne public_6d491d8
/*FIXUP public_6d491c4 : nop
        push offset public_6d617fc @0x6d491c4*/
  FIXUP public_6d491c4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d617fc
        push esi
        call public_6d41e47
        cmp dword ptr ss : [esp+0x14], 0
        pop ecx
        pop ecx
        je public_6d491fc
        public_6d491d8 : nop
        or dword ptr ds : [esi+0x58], 0x18
        cmp dword ptr ss : [esp+0x10], 0
        je public_6d491f0
/*FIXUP push offset public_6d617e0 @0x6d491e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d617e0
        push esi
        call public_6d41e65
        pop ecx
        pop ecx
        public_6d491f0 : nop
        push dword ptr ss : [esp+0x10]
        push esi
        call public_6d48e08
        pop ecx
        pop ecx
        public_6d491fc : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d491b4)
    }
}

#undef public_6d491c4
#undef public_6d491d8
#undef public_6d491f0
#undef public_6d491fc
