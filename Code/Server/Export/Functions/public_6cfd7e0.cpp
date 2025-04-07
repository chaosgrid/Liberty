#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfd7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfda20);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdef0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdf50);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdf70);
CLANG_FORWARD_PROC_SYMBOL(public_6d16080);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c880);

#define public_6cfd800 _public_6cfd800
#define public_6cfd815 _public_6cfd815
#define public_6cfd81a _public_6cfd81a
#define public_6cfd81e _public_6cfd81e
#define public_6cfd882 _public_6cfd882
#define public_6cfd89a _public_6cfd89a
#define public_6cfd8a4 _public_6cfd8a4
#define public_6cfd8a8 _public_6cfd8a8
#define public_6cfd8b6 _public_6cfd8b6
#define public_6cfd8f4 _public_6cfd8f4
#define public_6cfd903 _public_6cfd903
#define public_6cfd924 _public_6cfd924
#define public_6cfd945 _public_6cfd945
#define public_6cfd953 _public_6cfd953
#define public_6cfd972 _public_6cfd972
#define public_6cfd97e _public_6cfd97e
#define public_6cfd99a _public_6cfd99a
#define public_6cfd9cb _public_6cfd9cb
#define public_6cfd9d8 _public_6cfd9d8
#define public_6cfda07 _public_6cfda07

PROC_DECLARE(0x6cfd7e0, internal_6cfd7e0, public_6cfd7e0);
extern "C" NAKED register_t __cdecl internal_6cfd7e0()
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
        je public_6cfd81e
        lea esp, ss:[esp]
        public_6cfd800 : nop
        fld dword ptr ds : [ebx]
        mov esi, ebp
        fcomp dword ptr ss : [ebp+0xC]
        fnstsw ax
        test ah, 5
        jp public_6cfd815
        mov ebp, dword ptr ss : [ebp]
        mov al, 1
        jmp public_6cfd81a
        public_6cfd815 : nop
        mov ebp, dword ptr ss : [ebp+8]
        xor al, al
        public_6cfd81a : nop
        cmp ebp, edx
        jne public_6cfd800
        public_6cfd81e : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6cfd99a
        push 0
        push esi
        mov ecx, edi
        call public_6cfdf50
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6d5c880
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6cfd882
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6cfd882
        fld dword ptr ds : [ebx]
        fcomp dword ptr ds : [esi+0xC]
        fnstsw ax
        test ah, 5
        jnp public_6cfd882
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6cfd8a8
        mov dword ptr ds : [eax+8], ebx
        jmp public_6cfd8a8
        public_6cfd882 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6cfd89a
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+8], ecx
        jmp public_6cfd8a4
        public_6cfd89a : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6cfd8a4
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6cfd8a4 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6cfd8a8 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6cfd97e
        public_6cfd8b6 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6cfd97e
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6cfd924
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6cfd8f4
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6cfd972
        public_6cfd8f4 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6cfd903
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6d16080
        public_6cfd903 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6cfdef0
        jmp public_6cfd972
        public_6cfd924 : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6cfd945
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6cfd972
        public_6cfd945 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6cfd953
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6cfdef0
        public_6cfd953 : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6d16080
        public_6cfd972 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6cfd8b6
        public_6cfd97e : nop
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
        public_6cfd99a : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6cfd9d8
        cmp esi, dword ptr ds : [ecx]
        jne public_6cfd9cb
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6cfda20
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
        public_6cfd9cb : nop
        lea ecx, ss:[esp+0x10]
        call public_6cfdf70
        mov edx, dword ptr ss : [esp+0x10]
        public_6cfd9d8 : nop
        fld dword ptr ds : [edx+0xC]
        fcomp dword ptr ds : [ebx]
        fnstsw ax
        test ah, 5
        jp public_6cfda07
        push ebx
        push esi
        push ebp
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_6cfda20
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
        public_6cfda07 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6cfd7e0)
    }
}

#undef public_6cfd800
#undef public_6cfd815
#undef public_6cfd81a
#undef public_6cfd81e
#undef public_6cfd882
#undef public_6cfd89a
#undef public_6cfd8a4
#undef public_6cfd8a8
#undef public_6cfd8b6
#undef public_6cfd8f4
#undef public_6cfd903
#undef public_6cfd924
#undef public_6cfd945
#undef public_6cfd953
#undef public_6cfd972
#undef public_6cfd97e
#undef public_6cfd99a
#undef public_6cfd9cb
#undef public_6cfd9d8
#undef public_6cfda07
