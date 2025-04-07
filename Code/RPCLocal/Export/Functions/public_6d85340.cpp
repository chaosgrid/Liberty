#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85340);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_JUMP_SYMBOL(public_6db23f5);

#define public_6d85371 _public_6d85371
#define public_6d8537a _public_6d8537a
#define public_6d8537c _public_6d8537c
#define public_6d853db _public_6d853db
#define public_6d853e0 _public_6d853e0
#define public_6d853e7 _public_6d853e7
#define public_6d853fa _public_6d853fa
#define public_6d85403 _public_6d85403
#define public_6d85407 _public_6d85407
#define public_6d85420 _public_6d85420
#define public_6d85431 _public_6d85431

PROC_DECLARE(0x6d85340, internal_6d85340, public_6d85340);
extern "C" NAKED register_t __cdecl internal_6d85340()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db23f5 @0x6d85342*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db23f5
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [ebp], offset public_6db3754
        xor ebx, ebx
        mov dword ptr ss : [esp+0x20], ebx
        xor edi, edi
        public_6d85371 : nop
        cmp edi, ebx
        jne public_6d8537a
        mov edi, dword ptr ss : [ebp+4]
        jmp public_6d8537c
        public_6d8537a : nop
        mov edi, dword ptr ds : [edi]
        public_6d8537c : nop
        cmp edi, ebx
        je public_6d853e0
        mov esi, dword ptr ds : [edi+8]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], esi
        je public_6d853db
        lea ecx, ds:[esi+0x254]
        mov byte ptr ss : [esp+0x20], 3
        call dword ptr ds : [public_6db3018]
        lea ecx, ds:[esi+0x248]
        mov byte ptr ss : [esp+0x20], 2
        call dword ptr ds : [public_6db30bc]
        push 1
        lea ecx, ds:[esi+0x214]
        mov byte ptr ss : [esp+0x24], 1
        call dword ptr ds : [public_6db31a0]
        push 1
        lea ecx, ds:[esi+0x204]
        mov byte ptr ss : [esp+0x24], bl
        call dword ptr ds : [public_6db31a0]
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d853db : nop
        mov dword ptr ds : [edi+8], ebx
        jmp public_6d85371
        public_6d853e0 : nop
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, ebx
        je public_6d85407
        public_6d853e7 : nop
        cmp byte ptr ss : [ebp+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_6d853fa
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [ebp+0x10], eax
        jmp public_6d85403
        public_6d853fa : nop
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d85403 : nop
        cmp esi, ebx
        jne public_6d853e7
        public_6d85407 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        cmp esi, ebx
        mov dword ptr ss : [ebp], offset public_6db3758
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+4], ebx
        je public_6d85431
        nop 
        lea esp, ss:[esp]
        public_6d85420 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_6db1dc2
        add esp, 4
        cmp esi, ebx
        jne public_6d85420
        public_6d85431 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ss : [ebp+0x10], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d85340)
    }
}

#undef public_6d85371
#undef public_6d8537a
#undef public_6d8537c
#undef public_6d853db
#undef public_6d853e0
#undef public_6d853e7
#undef public_6d853fa
#undef public_6d85403
#undef public_6d85407
#undef public_6d85420
#undef public_6d85431
