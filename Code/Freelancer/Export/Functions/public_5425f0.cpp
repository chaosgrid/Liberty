#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_5394b0);
CLANG_FORWARD_PROC_SYMBOL(public_5425f0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0d56);

#define public_542641 _public_542641
#define public_542657 _public_542657
#define public_54266c _public_54266c
#define public_54268b _public_54268b
#define public_5426a1 _public_5426a1
#define public_5426b6 _public_5426b6

PROC_DECLARE(0x5425f0, internal_5425f0, public_5425f0);
extern "C" NAKED register_t __cdecl internal_5425f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0d56 @0x5425f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0d56
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi-0xC], offset public_5df95c
        mov dword ptr ds : [esi-8], offset public_5df8dc
        mov dword ptr ds : [esi], offset public_5df8d0
        mov ecx, dword ptr ds : [esi+0xAC]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x14], 1
        je public_542641
        call public_4f7a90
        mov dword ptr ds : [esi+0xAC], ebx
        public_542641 : nop
        mov eax, dword ptr ds : [esi+0xA8]
        cmp eax, ebx
        je public_542657
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xA8], ebx
        public_542657 : nop
        mov ecx, dword ptr ds : [esi+0xB0]
        cmp ecx, ebx
        je public_54266c
        call public_537ad0
        mov dword ptr ds : [esi+0xB0], ebx
        public_54266c : nop
        mov dword ptr ds : [esi+0xA4], ebx
        mov ecx, dword ptr ds : [esi+0xAC]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x14], bl
        je public_54268b
        call public_4f7a90
        mov dword ptr ds : [esi+0xAC], ebx
        public_54268b : nop
        mov eax, dword ptr ds : [esi+0xA8]
        cmp eax, ebx
        je public_5426a1
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xA8], ebx
        public_5426a1 : nop
        mov ecx, dword ptr ds : [esi+0xB0]
        cmp ecx, ebx
        je public_5426b6
        call public_537ad0
        mov dword ptr ds : [esi+0xB0], ebx
        public_5426b6 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_5394b0
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x5425f0)
    }
}

#undef public_542641
#undef public_542657
#undef public_54266c
#undef public_54268b
#undef public_5426a1
#undef public_5426b6
