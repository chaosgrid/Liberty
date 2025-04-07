#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d5d40);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_JUMP_SYMBOL(public_5be118);

#define public_4d5d6e _public_4d5d6e
#define public_4d5d70 _public_4d5d70
#define public_4d5d94 _public_4d5d94

PROC_DECLARE(0x4d5d40, internal_4d5d40, public_4d5d40);
extern "C" NAKED register_t __cdecl internal_4d5d40()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be118 @0x4d5d42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be118
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_4d5d6e
        lea ecx, ds:[esi+0x38]
        jmp public_4d5d70
        public_4d5d6e : nop
        xor ecx, ecx
        public_4d5d70 : nop
        call public_59fa50
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [esi], offset public_5d6eac
        cmp dword ptr ds : [ecx], 0
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        pop esi
        je public_4d5d94
        push 0
        call dword ptr ds : [public_5c62a8]
        public_4d5d94 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4d5d40)
    }
}

#undef public_4d5d6e
#undef public_4d5d70
#undef public_4d5d94
