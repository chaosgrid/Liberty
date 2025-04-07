#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f7900);
CLANG_FORWARD_PROC_SYMBOL(public_66fc970);
CLANG_FORWARD_JUMP_SYMBOL(public_6700d70);

#define public_66fb67c _public_66fb67c
#define public_66fb69a _public_66fb69a
#define public_66fb6d1 _public_66fb6d1
#define public_66fb6e7 _public_66fb6e7
#define public_66fb6ea _public_66fb6ea
#define public_66fb6ff _public_66fb6ff
#define public_66fb72b _public_66fb72b
#define public_66fb767 _public_66fb767
#define public_66fb77d _public_66fb77d
#define public_66fb784 _public_66fb784
#define public_66fb845 _public_66fb845
#define public_66fb856 _public_66fb856
#define public_66fb865 _public_66fb865
#define public_66fb86e _public_66fb86e
#define public_66fb879 _public_66fb879
#define public_66fb880 _public_66fb880
#define public_66fb8ac _public_66fb8ac
#define public_66fb8bd _public_66fb8bd
#define public_66fb8cc _public_66fb8cc
#define public_66fb8d8 _public_66fb8d8
#define public_66fb8f1 _public_66fb8f1
#define public_66fb991 _public_66fb991
#define public_66fb9c3 _public_66fb9c3
#define public_66fb9cd _public_66fb9cd
#define public_66fb9d3 _public_66fb9d3
#define public_66fb9f1 _public_66fb9f1
#define public_66fba08 _public_66fba08
#define public_66fba1e _public_66fba1e

PROC_DECLARE(0x66fb540, internal_66fb540, public_66fb540);
extern "C" NAKED register_t __cdecl internal_66fb540()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6700d70 @0x66fb548*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6700d70
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [edi+0xC]
        xor ebx, ebx
        cmp eax, ebx
        je public_66fb6e7
        cmp dword ptr ss : [esp+0x78], ebx
        je public_66fb6e7
        cmp dword ptr ss : [esp+0x80], ebx
        je public_66fb6e7
        call public_66fc970
        mov esi, eax
        cmp esi, ebx
        je public_66fb6e7
        mov dword ptr ss : [esp+0x78], ebx
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x78]
        push ecx
/*FIXUP push offset public_6702834 @0x66fb5a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702834
        push edx
        push esi
        mov dword ptr ss : [esp+0x70], ebx
        call dword ptr ds : [eax+0x78]
        test eax, eax
        jl public_66fb69a
        cmp dword ptr ss : [esp+0x74], ebx
        jne public_66fb67c
        mov esi, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x50]
        push edx
        push 0x89
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x54], 0x89
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [esi+0x78]
        lea edx, ss:[esp+0x44]
        push edx
        push 0x8B
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], 0x8B
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x6C], 1
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov ecx, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ds : [ecx]
        mov byte ptr ss : [esp+0x60], 2
        call dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x44]
        push edx
        push eax
        mov byte ptr ss : [esp+0x6C], 1
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x50]
        push edx
        push eax
        mov byte ptr ss : [esp+0x6C], bl
        call dword ptr ds : [ecx+0xF0]
        public_66fb67c : nop
        mov eax, dword ptr ss : [esp+0x78]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        je public_66fba1e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        xor eax, eax
        jmp public_66fb6ea
        public_66fb69a : nop
        mov dword ptr ss : [esp+0x6C], ebx
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x6C]
        push eax
/*FIXUP push offset public_6702828 @0x66fb6a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6702828
        push ecx
        push esi
        mov byte ptr ss : [esp+0x70], 3
        call dword ptr ds : [edx+0x78]
        test eax, eax
        mov eax, dword ptr ss : [esp+0x6C]
        jge public_66fb6ff
        cmp eax, ebx
        mov byte ptr ss : [esp+0x60], 0
        je public_66fb6d1
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x6C], ebx
        public_66fb6d1 : nop
        mov eax, dword ptr ss : [esp+0x78]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        je public_66fb6e7
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66fb6e7 : nop
        or eax, 0xFFFFFFFF
        public_66fb6ea : nop
        mov ecx, dword ptr ss : [esp+0x58]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 0x20
        public_66fb6ff : nop
        mov ebp, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [ebp+0x7C]
        mov edx, dword ptr ds : [eax]
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0x24]
        cmp eax, ebx
        je public_66fb72b
        mov eax, dword ptr ss : [esp+0x6C]
        push 1
        push ebx
        mov dword ptr ss : [ebp+0x7C], ebx
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x24]
        cmp eax, ebx
        jl public_66fb9f1
        public_66fb72b : nop
        mov edi, dword ptr ss : [ebp+0x7C]
        mov eax, dword ptr ss : [esp+0x6C]
        inc edi
        push 0x180
        mov dword ptr ss : [ebp+0x7C], edi
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x48]
        cmp eax, 0xFFFFFFF8
        mov eax, dword ptr ss : [esp+0x6C]
        jne public_66fb784
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [esp+0x6C]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x60], 0
        je public_66fb767
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x6C], ebx
        public_66fb767 : nop
        mov eax, dword ptr ss : [esp+0x78]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        je public_66fb77d
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_66fb77d : nop
        xor eax, eax
        jmp public_66fb6ea
        public_66fb784 : nop
        mov ecx, dword ptr ds : [eax]
        push 0x180
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        push 0x100
        push eax
        call dword ptr ds : [edx+0x58]
        mov eax, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 0x100
        push eax
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        push 0x80
        push eax
        call dword ptr ds : [edx+0x58]
        mov eax, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x80]
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        push 0x80
        push eax
        call dword ptr ds : [edx+0x60]
        mov eax, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, dword ptr ss : [esp+0x84]
        push ecx
        push 0x42
        push eax
        call dword ptr ds : [edx+0x14]
        cmp eax, ebx
        jl public_66fb9cd
        mov eax, dword ptr ss : [esp+0x4C]
        mov edx, eax
        and edx, 0xC
        xor edi, edi
        cmp dl, 0xC
        mov dword ptr ss : [esp+0x74], ebx
        jne public_66fb845
        mov edi, 0x1C
        jmp public_66fb865
        public_66fb845 : nop
        mov ecx, eax
        and ecx, 4
        cmp cl, 4
        jne public_66fb856
        mov edi, 0x10
        jmp public_66fb865
        public_66fb856 : nop
        mov edx, eax
        and edx, 2
        cmp dl, 2
        jne public_66fb865
        mov edi, 0xC
        public_66fb865 : nop
        test al, 0x10
        je public_66fb86e
        mov ebx, 0xC
        public_66fb86e : nop
        xor esi, esi
        test al, 0x40
        je public_66fb879
        mov esi, 4
        public_66fb879 : nop
        test al, al
        jns public_66fb880
        add esi, 4
        public_66fb880 : nop
        push eax
        call public_66f7900
        mov edx, dword ptr ss : [esp+0x50]
        mov ecx, eax
        add ecx, esi
        add ecx, ebx
        mov ebx, edx
        add ecx, edi
        mov edi, dword ptr ss : [esp+0x58]
        and ebx, 0xC
        add esp, 4
        xor eax, eax
        cmp bl, 0xC
        jne public_66fb8ac
        mov eax, 0x1C
        jmp public_66fb8cc
        public_66fb8ac : nop
        mov ebx, edx
        and ebx, 4
        cmp bl, 4
        jne public_66fb8bd
        mov eax, 0x10
        jmp public_66fb8cc
        public_66fb8bd : nop
        mov ebx, edx
        and ebx, 2
        cmp bl, 2
        jne public_66fb8cc
        mov eax, 0xC
        public_66fb8cc : nop
        xor esi, esi
        test dl, 0x10
        je public_66fb8d8
        mov esi, 0xC
        public_66fb8d8 : nop
        lea edx, ds:[esi+eax]
        mov eax, dword ptr ss : [esp+0x80]
        add edx, edi
        xor esi, esi
        test eax, 0xFFFFFFFE
        jbe public_66fb991
        public_66fb8f1 : nop
        mov eax, dword ptr ss : [esp+0x18]
        movzx eax, word ptr ds : [eax+esi*2]
        mov ebx, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ebx+eax*4]
        fcomp qword ptr ds : [public_6702820]
        fnstsw ax
        test ah, 0x41
        jnp public_66fb991
        mov eax, dword ptr ss : [esp+0x10]
        movzx eax, word ptr ds : [eax+esi*4]
        mov ebx, dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ebx+eax*4]
        mov ebp, dword ptr ds : [eax]
        mov ebx, edi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ds : [eax+0x78]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x10]
        movzx eax, word ptr ds : [eax+esi*4+2]
        mov ebx, dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ebx+eax*4]
        mov ebp, dword ptr ds : [eax]
        add edi, ecx
        mov ebx, edi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+4], ebp
        mov eax, dword ptr ds : [eax+8]
        mov ebp, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ss : [ebp+0x78]
        mov ebx, dword ptr ss : [esp+0x74]
        add edx, ecx
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x80]
        add ebx, 2
        add edi, ecx
        add edx, ecx
        inc esi
        shr eax, 1
        cmp esi, eax
        mov dword ptr ss : [esp+0x74], ebx
        jb public_66fb8f1
        public_66fb991 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x74]
        test eax, eax
        jbe public_66fb9c3
        mov edx, dword ptr ss : [esp+0x50]
        mov ebp, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp]
        push 0
        push eax
        mov eax, dword ptr ss : [esp+0x50]
        push edx
        push eax
        push 2
        push ebp
        call dword ptr ds : [ecx+0x11C]
        public_66fb9c3 : nop
        inc dword ptr ds : [public_67045cc]
        xor ebx, ebx
        jmp public_66fb9d3
        public_66fb9cd : nop
        inc dword ptr ds : [public_67045c8]
        public_66fb9d3 : nop
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x4C]
        mov eax, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x28]
        public_66fb9f1 : nop
        mov eax, dword ptr ss : [esp+0x6C]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x60], 0
        je public_66fba08
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x6C], ebx
        public_66fba08 : nop
        mov eax, dword ptr ss : [esp+0x78]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x60], 0xFFFFFFFF
        je public_66fba1e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_66fba1e : nop
        xor eax, eax
        jmp public_66fb6ea
        UNREACHABLE_TRAP(0x66fb540)
    }
}

#undef public_66fb67c
#undef public_66fb69a
#undef public_66fb6d1
#undef public_66fb6e7
#undef public_66fb6ea
#undef public_66fb6ff
#undef public_66fb72b
#undef public_66fb767
#undef public_66fb77d
#undef public_66fb784
#undef public_66fb845
#undef public_66fb856
#undef public_66fb865
#undef public_66fb86e
#undef public_66fb879
#undef public_66fb880
#undef public_66fb8ac
#undef public_66fb8bd
#undef public_66fb8cc
#undef public_66fb8d8
#undef public_66fb8f1
#undef public_66fb991
#undef public_66fb9c3
#undef public_66fb9cd
#undef public_66fb9d3
#undef public_66fb9f1
#undef public_66fba08
#undef public_66fba1e
