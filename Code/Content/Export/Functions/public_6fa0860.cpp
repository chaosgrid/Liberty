#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f00610);
CLANG_FORWARD_PROC_SYMBOL(public_6f214c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0860);
CLANG_FORWARD_PROC_SYMBOL(public_6fa28e0);

#define public_6fa0880 _public_6fa0880
#define public_6fa0895 _public_6fa0895
#define public_6fa089a _public_6fa089a
#define public_6fa089e _public_6fa089e
#define public_6fa0902 _public_6fa0902
#define public_6fa091a _public_6fa091a
#define public_6fa0924 _public_6fa0924
#define public_6fa0928 _public_6fa0928
#define public_6fa0936 _public_6fa0936
#define public_6fa0974 _public_6fa0974
#define public_6fa0983 _public_6fa0983
#define public_6fa09a4 _public_6fa09a4
#define public_6fa09c5 _public_6fa09c5
#define public_6fa09d3 _public_6fa09d3
#define public_6fa09f2 _public_6fa09f2
#define public_6fa09fe _public_6fa09fe
#define public_6fa0a1a _public_6fa0a1a
#define public_6fa0a4b _public_6fa0a4b
#define public_6fa0a58 _public_6fa0a58
#define public_6fa0a87 _public_6fa0a87

PROC_DECLARE(0x6fa0860, internal_6fa0860, public_6fa0860);
extern "C" NAKED register_t __cdecl internal_6fa0860()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6fa089e
        lea esp, ss:[esp]
        public_6fa0880 : nop
        fld dword ptr ds : [ebx]
        mov esi, ebp
        fcomp dword ptr ss : [ebp+0xC]
        fnstsw ax
        test ah, 5
        jp public_6fa0895
        mov ebp, dword ptr ss : [ebp]
        mov al, 1
        jmp public_6fa089a
        public_6fa0895 : nop
        mov ebp, dword ptr ss : [ebp+8]
        xor al, al
        public_6fa089a : nop
        cmp ebp, edx
        jne public_6fa0880
        public_6fa089e : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6fa0a1a
        push 0
        push esi
        mov ecx, edi
        call public_6f214c0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f305b0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6fa0902
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6fa0902
        fld dword ptr ds : [ebx]
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_6fa0902
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6fa0928
        mov dword ptr ds : [eax+8], ebx
        jmp public_6fa0928
        public_6fa0902 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6fa091a
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6fa0924
        public_6fa091a : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6fa0924
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6fa0924 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6fa0928 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6fa09fe
        public_6fa0936 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6fa09fe
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6fa09a4
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6fa0974
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6fa09f2
        public_6fa0974 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6fa0983
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6fa0983 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6fa09f2
        public_6fa09a4 : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6fa09c5
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6fa09f2
        public_6fa09c5 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6fa09d3
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6fa09d3 : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6fa09f2 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6fa0936
        public_6fa09fe : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6fa0a1a : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6fa0a58
        cmp esi, dword ptr ds : [ecx]
        jne public_6fa0a4b
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6fa28e0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6fa0a4b : nop
        lea ecx, ss:[esp+0x10]
        call public_6f00610
        mov edx, dword ptr ss : [esp+0x10]
        public_6fa0a58 : nop
        fld dword ptr ds : [edx+0xC]
        fcomp dword ptr ds : [ebx]
        fnstsw ax
        test ah, 5
        jp public_6fa0a87
        push ebx
        push esi
        push ebp
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_6fa28e0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6fa0a87 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6fa0860)
    }
}

#undef public_6fa0880
#undef public_6fa0895
#undef public_6fa089a
#undef public_6fa089e
#undef public_6fa0902
#undef public_6fa091a
#undef public_6fa0924
#undef public_6fa0928
#undef public_6fa0936
#undef public_6fa0974
#undef public_6fa0983
#undef public_6fa09a4
#undef public_6fa09c5
#undef public_6fa09d3
#undef public_6fa09f2
#undef public_6fa09fe
#undef public_6fa0a1a
#undef public_6fa0a4b
#undef public_6fa0a58
#undef public_6fa0a87
