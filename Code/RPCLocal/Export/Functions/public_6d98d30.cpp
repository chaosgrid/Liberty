#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d98d79 _public_6d98d79
#define public_6d98d91 _public_6d98d91
#define public_6d98da1 _public_6d98da1
#define public_6d98dc8 _public_6d98dc8
#define public_6d98dd8 _public_6d98dd8
#define public_6d98de4 _public_6d98de4
#define public_6d98dfd _public_6d98dfd
#define public_6d98e0d _public_6d98e0d
#define public_6d98e19 _public_6d98e19
#define public_6d98e32 _public_6d98e32
#define public_6d98e42 _public_6d98e42
#define public_6d98e4e _public_6d98e4e
#define public_6d98e67 _public_6d98e67
#define public_6d98e77 _public_6d98e77
#define public_6d98e96 _public_6d98e96
#define public_6d98ea6 _public_6d98ea6
#define public_6d98eb2 _public_6d98eb2
#define public_6d98ed1 _public_6d98ed1
#define public_6d98ee1 _public_6d98ee1
#define public_6d98f02 _public_6d98f02
#define public_6d98f12 _public_6d98f12
#define public_6d98f21 _public_6d98f21
#define public_6d98f45 _public_6d98f45
#define public_6d98f5e _public_6d98f5e
#define public_6d98f6e _public_6d98f6e
#define public_6d98f7c _public_6d98f7c
#define public_6d98f95 _public_6d98f95
#define public_6d98fa5 _public_6d98fa5
#define public_6d98fb5 _public_6d98fb5
#define public_6d98fcf _public_6d98fcf
#define public_6d98fdf _public_6d98fdf
#define public_6d98fed _public_6d98fed
#define public_6d99004 _public_6d99004
#define public_6d99014 _public_6d99014
#define public_6d99030 _public_6d99030
#define public_6d99046 _public_6d99046
#define public_6d9905d _public_6d9905d
#define public_6d99074 _public_6d99074
#define public_6d9907d _public_6d9907d
#define public_6d990ae _public_6d990ae

PROC_DECLARE(0x6d98d30, internal_6d98d30, public_6d98d30);
extern "C" NAKED register_t __cdecl internal_6d98d30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        push edi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea edi, ss:[ebp+0x18]
        push edi
        mov ecx, ebp
        call public_6da1380
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d98d79
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d98d79 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov esi, 0x16
        jbe public_6d98d91
        mov dword ptr ds : [ebx+0xC], esi
        public_6d98d91 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d98da1
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d98da1 : nop
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ss : [ebp+0x20]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [edi], eax
        test byte ptr ss : [ebp+0x20], 8
        je public_6d98de4
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d98dc8
        mov dword ptr ds : [ebx+0xC], esi
        public_6d98dc8 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d98dd8
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d98dd8 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [edi], eax
        public_6d98de4 : nop
        test byte ptr ss : [ebp+0x20], 4
        je public_6d98e19
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d98dfd
        mov dword ptr ds : [ebx+0xC], esi
        public_6d98dfd : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d98e0d
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d98e0d : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        public_6d98e19 : nop
        test byte ptr ss : [ebp+0x20], 1
        je public_6d98e4e
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d98e32
        mov dword ptr ds : [ebx+0xC], esi
        public_6d98e32 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d98e42
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d98e42 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [edi], eax
        public_6d98e4e : nop
        test byte ptr ss : [ebp+0x20], 2
        je public_6d98eb2
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d98e67
        mov dword ptr ds : [ebx+0xC], esi
        public_6d98e67 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d98e77
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d98e77 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d98e96
        mov dword ptr ds : [ebx+0xC], esi
        public_6d98e96 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d98ea6
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d98ea6 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [edi], eax
        public_6d98eb2 : nop
        test byte ptr ss : [ebp+0x20], 0x10
        je public_6d98f45
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        mov cx, word ptr ss : [ebp+0x48]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6d98ed1
        mov dword ptr ds : [ebx+0xC], esi
        public_6d98ed1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d98ee1
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d98ee1 : nop
        mov eax, dword ptr ds : [edi]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [ebx+4]
        xor eax, eax
        mov ax, cx
        mov ecx, dword ptr ds : [ebx]
        shl eax, 1
        add ecx, eax
        cmp ecx, edx
        mov dword ptr ds : [ebx], ecx
        jbe public_6d98f02
        mov dword ptr ds : [ebx+0xC], esi
        public_6d98f02 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6d98f12
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d98f12 : nop
        mov ecx, dword ptr ss : [ebp+0x44]
        test ecx, ecx
        mov esi, dword ptr ds : [public_6db3190]
        je public_6d98f21
        mov esi, ecx
        public_6d98f21 : nop
        mov edi, dword ptr ds : [edi]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov esi, 0x16
        public_6d98f45 : nop
        test byte ptr ss : [ebp+0x20], 0x20
        je public_6d98f7c
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d98f5e
        mov dword ptr ds : [ebx+0xC], esi
        public_6d98f5e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d98f6e
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d98f6e : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        public_6d98f7c : nop
        test byte ptr ss : [ebp+0x20], 0x40
        je public_6d98fb5
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d98f95
        mov dword ptr ds : [ebx+0xC], esi
        public_6d98f95 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d98fa5
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d98fa5 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov cx, word ptr ss : [ebp+0x2C]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        public_6d98fb5 : nop
        mov al, byte ptr ss : [ebp+0x20]
        test al, al
        jns public_6d98fed
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d98fcf
        mov dword ptr ds : [ebx+0xC], esi
        public_6d98fcf : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d98fdf
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d98fdf : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        public_6d98fed : nop
        test byte ptr ss : [ebp+0x21], 1
        je public_6d9905d
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d99004
        mov dword ptr ds : [ebx+0xC], esi
        public_6d99004 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d99014
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d99014 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ss : [ebp+0x68]
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [ebp+0x60]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x5C]
        cmp eax, ecx
        je public_6d9905d
        lea ebx, ds:[ebx]
        public_6d99030 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        add eax, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6d99046
        mov dword ptr ds : [ebx+0xC], esi
        public_6d99046 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6d99074
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp+0x18], ecx
        cmp eax, dword ptr ss : [ebp+0x60]
        jne public_6d99030
        public_6d9905d : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d9907d
        public_6d99074 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6d9907d : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [ebx]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jbe public_6d990ae
        mov dword ptr ds : [ecx+0x10], ebx
        public_6d990ae : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6d98d30)
    }
}

#undef public_6d98d79
#undef public_6d98d91
#undef public_6d98da1
#undef public_6d98dc8
#undef public_6d98dd8
#undef public_6d98de4
#undef public_6d98dfd
#undef public_6d98e0d
#undef public_6d98e19
#undef public_6d98e32
#undef public_6d98e42
#undef public_6d98e4e
#undef public_6d98e67
#undef public_6d98e77
#undef public_6d98e96
#undef public_6d98ea6
#undef public_6d98eb2
#undef public_6d98ed1
#undef public_6d98ee1
#undef public_6d98f02
#undef public_6d98f12
#undef public_6d98f21
#undef public_6d98f45
#undef public_6d98f5e
#undef public_6d98f6e
#undef public_6d98f7c
#undef public_6d98f95
#undef public_6d98fa5
#undef public_6d98fb5
#undef public_6d98fcf
#undef public_6d98fdf
#undef public_6d98fed
#undef public_6d99004
#undef public_6d99014
#undef public_6d99030
#undef public_6d99046
#undef public_6d9905d
#undef public_6d99074
#undef public_6d9907d
#undef public_6d990ae
