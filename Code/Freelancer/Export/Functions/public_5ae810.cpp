#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae810);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c57c5);

#define public_5ae841 _public_5ae841
#define public_5ae84a _public_5ae84a
#define public_5ae84c _public_5ae84c
#define public_5ae8ab _public_5ae8ab
#define public_5ae8b0 _public_5ae8b0
#define public_5ae8b7 _public_5ae8b7
#define public_5ae8ca _public_5ae8ca
#define public_5ae8d3 _public_5ae8d3
#define public_5ae8d7 _public_5ae8d7
#define public_5ae8f0 _public_5ae8f0
#define public_5ae901 _public_5ae901

PROC_DECLARE(0x5ae810, internal_5ae810, public_5ae810);
extern "C" NAKED register_t __cdecl internal_5ae810()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c57c5 @0x5ae812*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c57c5
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
        mov dword ptr ss : [ebp], offset public_5e6520
        xor ebx, ebx
        mov dword ptr ss : [esp+0x20], ebx
        xor edi, edi
        public_5ae841 : nop
        cmp edi, ebx
        jne public_5ae84a
        mov edi, dword ptr ss : [ebp+4]
        jmp public_5ae84c
        public_5ae84a : nop
        mov edi, dword ptr ds : [edi]
        public_5ae84c : nop
        cmp edi, ebx
        je public_5ae8b0
        mov esi, dword ptr ds : [edi+8]
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], esi
        je public_5ae8ab
        lea ecx, ds:[esi+0x254]
        mov byte ptr ss : [esp+0x20], 3
        call dword ptr ds : [public_5c63a8]
        lea ecx, ds:[esi+0x248]
        mov byte ptr ss : [esp+0x20], 2
        call dword ptr ds : [public_5c6ca0]
        push 1
        lea ecx, ds:[esi+0x214]
        mov byte ptr ss : [esp+0x24], 1
        call dword ptr ds : [public_5c6fb8]
        push 1
        lea ecx, ds:[esi+0x204]
        mov byte ptr ss : [esp+0x24], bl
        call dword ptr ds : [public_5c6fb8]
        push esi
        call public_5b7e1d
        add esp, 4
        public_5ae8ab : nop
        mov dword ptr ds : [edi+8], ebx
        jmp public_5ae841
        public_5ae8b0 : nop
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, ebx
        je public_5ae8d7
        public_5ae8b7 : nop
        cmp byte ptr ss : [ebp+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_5ae8ca
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [ebp+0x10], eax
        jmp public_5ae8d3
        public_5ae8ca : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5ae8d3 : nop
        cmp esi, ebx
        jne public_5ae8b7
        public_5ae8d7 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        cmp esi, ebx
        mov dword ptr ss : [ebp], offset public_5e6528
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+4], ebx
        je public_5ae901
        nop 
        lea esp, ss:[esp]
        public_5ae8f0 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp esi, ebx
        jne public_5ae8f0
        public_5ae901 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ss : [ebp+0x10], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x5ae810)
    }
}

#undef public_5ae841
#undef public_5ae84a
#undef public_5ae84c
#undef public_5ae8ab
#undef public_5ae8b0
#undef public_5ae8b7
#undef public_5ae8ca
#undef public_5ae8d3
#undef public_5ae8d7
#undef public_5ae8f0
#undef public_5ae901
