#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f56d50);

#define public_6f56d67 _public_6f56d67
#define public_6f56d6d _public_6f56d6d
#define public_6f56d73 _public_6f56d73
#define public_6f56d97 _public_6f56d97
#define public_6f56dab _public_6f56dab

PROC_DECLARE(0x6f56d50, internal_6f56d50, public_6f56d50);
extern "C" NAKED register_t __cdecl internal_6f56d50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        movsx eax, byte ptr ds : [esi]
        inc esi
        cmp eax, 0x25
        je public_6f56d97
        cmp eax, 0x5B
        je public_6f56d67
        mov eax, esi
        pop esi
        ret 
        public_6f56d67 : nop
        cmp byte ptr ds : [esi], 0x5E
        jne public_6f56d6d
        inc esi
        public_6f56d6d : nop
        cmp byte ptr ds : [esi], 0x5D
        jne public_6f56d73
        inc esi
        public_6f56d73 : nop
        push 0x5D
        push esi
        call dword ptr ds : [public_6f5a0d0]
        mov esi, eax
        add esp, 8
        test esi, esi
        jne public_6f56dab
/*FIXUP push offset public_6f61c94 @0x6f56d85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61c94
        call public_6f4c7f0
        add esp, 4
        lea eax, ds:[esi+1]
        pop esi
        ret 
        public_6f56d97 : nop
        cmp byte ptr ds : [esi], 0
        jne public_6f56dab
        push 0x25
/*FIXUP push offset public_6f61c70 @0x6f56d9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61c70
        call public_6f4f7a0
        add esp, 8
        public_6f56dab : nop
        lea eax, ds:[esi+1]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f56d50)
    }
}

#undef public_6f56d67
#undef public_6f56d6d
#undef public_6f56d73
#undef public_6f56d97
#undef public_6f56dab
