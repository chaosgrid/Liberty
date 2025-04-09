#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d4f20);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5be07f);

#define public_4d4f53 _public_4d4f53
#define public_4d4f55 _public_4d4f55
#define public_4d4f68 _public_4d4f68
#define public_4d4f6a _public_4d4f6a
#define public_4d4f8e _public_4d4f8e

PROC_DECLARE(0x4d4f20, internal_4d4f20, public_4d4f20);
extern "C" NAKED register_t __cdecl internal_4d4f20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be07f @0x4d4f22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be07f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        test esi, esi
        mov dword ptr ss : [esp+0x14], 1
        je public_4d4f53
        lea ecx, ds:[esi+0x364]
        jmp public_4d4f55
        public_4d4f53 : nop
        xor ecx, ecx
        public_4d4f55 : nop
        call public_576010
        test esi, esi
        mov byte ptr ss : [esp+0x14], 0
        je public_4d4f68
        lea ecx, ds:[esi+0x38]
        jmp public_4d4f6a
        public_4d4f68 : nop
        xor ecx, ecx
        public_4d4f6a : nop
        call public_59fa50
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [esi], offset public_5d6eac
        cmp dword ptr ds : [ecx], 0
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        pop esi
        je public_4d4f8e
        push 0
        call dword ptr ds : [public_5c62a8]
        public_4d4f8e : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4d4f20)
    }
}

#undef public_4d4f53
#undef public_4d4f55
#undef public_4d4f68
#undef public_4d4f6a
#undef public_4d4f8e
