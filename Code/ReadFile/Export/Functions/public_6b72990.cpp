#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b71190);
CLANG_FORWARD_PROC_SYMBOL(public_6b71490);
CLANG_FORWARD_PROC_SYMBOL(public_6b72dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6b72dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b72e10);
CLANG_FORWARD_PROC_SYMBOL(public_6b73e10);

#define public_6b729cf _public_6b729cf
#define public_6b729ef _public_6b729ef
#define public_6b72a0f _public_6b72a0f
#define public_6b72a13 _public_6b72a13
#define public_6b72a18 _public_6b72a18
#define public_6b72a20 _public_6b72a20
#define public_6b72a6c _public_6b72a6c
#define public_6b72ad5 _public_6b72ad5
#define public_6b72b63 _public_6b72b63
#define public_6b72b91 _public_6b72b91
#define public_6b72bd0 _public_6b72bd0
#define public_6b72be7 _public_6b72be7
#define public_6b72bea _public_6b72bea
#define public_6b72c0b _public_6b72c0b
#define public_6b72c19 _public_6b72c19
#define public_6b72c2b _public_6b72c2b
#define public_6b72c31 _public_6b72c31
#define public_6b72c5b _public_6b72c5b
#define public_6b72c5e _public_6b72c5e
#define public_6b72c6e _public_6b72c6e
#define public_6b72c74 _public_6b72c74
#define public_6b72c94 _public_6b72c94
#define public_6b72d05 _public_6b72d05
#define public_6b72d09 _public_6b72d09
#define public_6b72d3a _public_6b72d3a
#define public_6b72d44 _public_6b72d44
#define public_6b72d50 _public_6b72d50
#define public_6b72d73 _public_6b72d73
#define public_6b72d88 _public_6b72d88
#define public_6b72d8f _public_6b72d8f
#define public_6b72d92 _public_6b72d92
#define public_6b72dad _public_6b72dad

PROC_DECLARE(0x6b72990, internal_6b72990, public_6b72990);
extern "C" NAKED register_t __cdecl internal_6b72990()
{
    __asm
    {
        sub esp, 0x330
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x340]
        xor ebx, ebx
        push esi
        cmp ebp, ebx
        push edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        je public_6b72d8f
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, ebx
        je public_6b72d8f
        mov eax, dword ptr ss : [ebp]
        cmp eax, 0x34
        je public_6b729cf
        cmp eax, 0x30
        jne public_6b72d88
        public_6b729cf : nop
        mov edi, offset public_6b7a028
        mov ecx, 0xB
        xor eax, eax
        repe cmpsb
        jne public_6b72d88
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        je public_6b72a20
        mov esi, offset public_6b7a010
        public_6b729ef : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6b72a13
        test cl, cl
        je public_6b72a0f
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6b72a13
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6b729ef
        public_6b72a0f : nop
        xor eax, eax
        jmp public_6b72a18
        public_6b72a13 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6b72a18 : nop
        cmp eax, ebx
        jne public_6b72d8f
        public_6b72a20 : nop
        cmp dword ptr ss : [ebp+0x10], 0x80000000
        jne public_6b72d8f
        cmp dword ptr ss : [ebp+0x1C], 3
        jne public_6b72d8f
        mov eax, dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [esp+0x344]
        cmp eax, ebx
        je public_6b72ad5
        cmp byte ptr ds : [edi+0x20], 0x5C
        jne public_6b72a6c
        mov cl, byte ptr ds : [edi+0x21]
        test cl, cl
        jne public_6b72a6c
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
/*FIXUP push offset public_6b7a014 @0x6b72a60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b7a014
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        je public_6b72ad5
        public_6b72a6c : nop
        mov eax, dword ptr ss : [ebp+0x28]
        lea edx, ss:[esp+0x23C]
        push 0x104
        push edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x84]
        push ebx
        lea eax, ss:[esp+0x240]
        push esi
        push eax
        lea ecx, ss:[esp+0x40]
        push ebx
        push ecx
        call dword ptr ds : [public_6b79080]
        lea edx, ss:[esp+0x48]
        push 0x104
        lea eax, ss:[esp+0x150]
        push edx
        push eax
        call dword ptr ds : [public_6b7907c]
        lea ecx, ss:[esp+0x158]
        push ebx
        push ecx
        call dword ptr ds : [public_6b79078]
        add esp, 0x28
        cmp eax, 0xFFFFFFFF
        je public_6b72d8f
        lea esi, ss:[esp+0x138]
        public_6b72ad5 : nop
        cmp byte ptr ds : [edi+0x20], 0x5C
        jne public_6b72c19
        mov al, byte ptr ds : [edi+0x21]
        test al, al
        jne public_6b72c19
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x18], ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        je public_6b72b63
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        or esi, 0xFFFFFFFF
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jne public_6b72bea
        mov ecx, dword ptr ss : [esp+0x30]
        cmp ecx, ebx
        je public_6b72bea
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        je public_6b72bea
        mov dword ptr ss : [esp+0x20], eax
        lea edx, ss:[esp+0x10]
        lea eax, ss:[esp+0x14]
        push edx
        push eax
        push ebp
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x30], ebx
        call public_6b71190
        add esp, 0xC
        mov esi, eax
        jmp public_6b72bea
        public_6b72b63 : nop
        mov ecx, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ss : [ebp+0x20]
        mov eax, dword ptr ss : [ebp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x18]
        push edx
        mov edx, dword ptr ss : [ebp+0x14]
        push eax
        mov eax, dword ptr ss : [ebp+0x10]
        push ecx
        push edx
        push eax
        push esi
        call dword ptr ds : [public_6b79030]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], eax
        jne public_6b72b91
        cmp dword ptr ss : [esp+0x1C], ebx
        je public_6b72be7
        public_6b72b91 : nop
        cmp eax, ebx
        mov esi, eax
        je public_6b72bd0
        push ebx
        push ebx
        push ebx
        push 2
        push ebx
        push eax
        call dword ptr ds : [public_6b7902c]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], eax
        je public_6b72bd0
        push ebx
        push esi
        call dword ptr ds : [public_6b79028]
        push eax
        push ebx
        mov ecx, dword ptr ss : [esp+0x20]
        push ebx
        push 4
        push ecx
        mov dword ptr ss : [esp+0x34], eax
        call dword ptr ds : [public_6b79024]
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x1C], eax
        public_6b72bd0 : nop
        lea edx, ss:[esp+0x10]
        lea eax, ss:[esp+0x14]
        push edx
        push eax
        push ebp
        call public_6b71190
        add esp, 0xC
        mov esi, eax
        jmp public_6b72bea
        public_6b72be7 : nop
        or esi, 0xFFFFFFFF
        public_6b72bea : nop
        lea ecx, ss:[esp+0x18]
        call public_6b72dd0
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, 0xFFFFFFFF
        je public_6b72c0b
        push eax
        call dword ptr ds : [public_6b79014]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        public_6b72c0b : nop
        lea ecx, ss:[esp+0x18]
        call public_6b72dd0
        jmp public_6b72d92
        public_6b72c19 : nop
        mov eax, dword ptr ds : [edi+0x230]
        cmp eax, ebx
        je public_6b72c2b
        mov esi, dword ptr ds : [eax+0x238]
        jmp public_6b72c31
        public_6b72c2b : nop
        mov esi, dword ptr ds : [edi+0x238]
        public_6b72c31 : nop
        cmp esi, ebx
        je public_6b72d8f
        mov edx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [edi]
        push 0x104
        lea eax, ss:[esp+0x38]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xA4]
        cmp dword ptr ss : [ebp], 0x34
        jne public_6b72c5b
        mov ebx, dword ptr ss : [ebp+0x30]
        jmp public_6b72c5e
        public_6b72c5b : nop
        or ebx, 0xFFFFFFFF
        public_6b72c5e : nop
        mov ecx, dword ptr ds : [edi+0x238]
        test ecx, ecx
        je public_6b72c6e
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        jmp public_6b72c74
        public_6b72c6e : nop
        mov eax, dword ptr ds : [edi+0x23C]
        public_6b72c74 : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        push eax
        lea eax, ss:[esp+0x3C]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x28], eax
        jne public_6b72c94
        or esi, 0xFFFFFFFF
        jmp public_6b72d92
        public_6b72c94 : nop
        push 1
        push 0x250
        call dword ptr ds : [public_6b7906c]
        mov esi, eax
        add esp, 8
        cmp esi, ebx
        je public_6b72d05
        lea ecx, ds:[esi+8]
        call public_6b72dc0
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x230], ebx
        lea ecx, ds:[esi+0x240]
        mov dword ptr ds : [esi+0x234], ebx
        call public_6b71490
        mov dword ptr ds : [esi+0x238], ebx
        mov dword ptr ds : [esi+0x23C], ebx
        mov dword ptr ds : [esi+0x22C], ebx
        mov ebx, esi
        mov byte ptr ds : [esi+0x20], 0x5C
        mov byte ptr ds : [esi+0x128], 0x5C
        mov dword ptr ds : [esi], offset public_6b79138
        mov dword ptr ds : [esi+0x24C], 1
        mov dword ptr ss : [esp+0x10], ebx
        jmp public_6b72d09
        public_6b72d05 : nop
        mov dword ptr ss : [esp+0x10], ebx
        public_6b72d09 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [ebp+0xC]
        push ecx
        push edx
        mov ecx, ebx
        call public_6b72e10
        mov eax, dword ptr ds : [ebx+0x234]
        add ebx, 0x234
        cmp eax, edi
        mov esi, edi
        je public_6b72d3a
        mov ecx, ebx
        call public_6b73e10
        mov dword ptr ds : [ebx], edi
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+4]
        public_6b72d3a : nop
        mov eax, dword ptr ds : [edi+0x234]
        test eax, eax
        je public_6b72d50
        public_6b72d44 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi+0x234]
        test eax, eax
        jne public_6b72d44
        public_6b72d50 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0x230]
        lea ebx, ds:[ecx+0x230]
        cmp eax, esi
        je public_6b72d73
        mov ecx, ebx
        call public_6b73e10
        mov dword ptr ds : [ebx], esi
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_6b72d73 : nop
        mov eax, dword ptr ds : [edi+0x18]
        mov ecx, dword ptr ss : [ebp+0x10]
        and eax, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        xor esi, esi
        xor ebx, ebx
        mov dword ptr ds : [ecx+0x18], eax
        jmp public_6b72d92
        public_6b72d88 : nop
        mov esi, 0xFFFFFFFD
        jmp public_6b72d92
        public_6b72d8f : nop
        or esi, 0xFFFFFFFF
        public_6b72d92 : nop
        mov edx, dword ptr ss : [esp+0x34C]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebx
        je public_6b72dad
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_6b72dad : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x330
        ret 0xC
        UNREACHABLE_TRAP(0x6b72990)
    }
}

#undef public_6b729cf
#undef public_6b729ef
#undef public_6b72a0f
#undef public_6b72a13
#undef public_6b72a18
#undef public_6b72a20
#undef public_6b72a6c
#undef public_6b72ad5
#undef public_6b72b63
#undef public_6b72b91
#undef public_6b72bd0
#undef public_6b72be7
#undef public_6b72bea
#undef public_6b72c0b
#undef public_6b72c19
#undef public_6b72c2b
#undef public_6b72c31
#undef public_6b72c5b
#undef public_6b72c5e
#undef public_6b72c6e
#undef public_6b72c74
#undef public_6b72c94
#undef public_6b72d05
#undef public_6b72d09
#undef public_6b72d3a
#undef public_6b72d44
#undef public_6b72d50
#undef public_6b72d73
#undef public_6b72d88
#undef public_6b72d8f
#undef public_6b72d92
#undef public_6b72dad
