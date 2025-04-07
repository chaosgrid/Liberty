#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6f30430);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b8e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e420);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7b932 _public_6f7b932
#define public_6f7b934 _public_6f7b934
#define public_6f7b93c _public_6f7b93c
#define public_6f7b94f _public_6f7b94f
#define public_6f7b95c _public_6f7b95c
#define public_6f7b980 _public_6f7b980
#define public_6f7b99e _public_6f7b99e
#define public_6f7b9a8 _public_6f7b9a8
#define public_6f7b9cb _public_6f7b9cb
#define public_6f7b9e6 _public_6f7b9e6
#define public_6f7b9f0 _public_6f7b9f0
#define public_6f7ba06 _public_6f7ba06
#define public_6f7ba10 _public_6f7ba10
#define public_6f7ba22 _public_6f7ba22
#define public_6f7ba4c _public_6f7ba4c
#define public_6f7ba62 _public_6f7ba62
#define public_6f7ba7c _public_6f7ba7c
#define public_6f7bab9 _public_6f7bab9
#define public_6f7bac0 _public_6f7bac0
#define public_6f7bada _public_6f7bada
#define public_6f7bb00 _public_6f7bb00
#define public_6f7bb17 _public_6f7bb17
#define public_6f7bb20 _public_6f7bb20
#define public_6f7bb36 _public_6f7bb36
#define public_6f7bb4c _public_6f7bb4c
#define public_6f7bb70 _public_6f7bb70
#define public_6f7bb9e _public_6f7bb9e
#define public_6f7bbb0 _public_6f7bbb0
#define public_6f7bbd0 _public_6f7bbd0
#define public_6f7bbd2 _public_6f7bbd2
#define public_6f7bc2a _public_6f7bc2a
#define public_6f7bc40 _public_6f7bc40
#define public_6f7bc58 _public_6f7bc58
#define public_6f7bc5a _public_6f7bc5a
#define public_6f7bcaf _public_6f7bcaf
#define public_6f7bcb2 _public_6f7bcb2

PROC_DECLARE(0x6f7b8e0, internal_6f7b8e0, public_6f7b8e0);
extern "C" NAKED register_t __cdecl internal_6f7b8e0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x60F25DEB
        imul edx
        sar edx, 9
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6f7ba7c
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6f7b932
        mov edx, esi
        sub edx, ecx
        mov eax, 0x60F25DEB
        imul edx
        sar edx, 9
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ebp, edx
        mov edi, edx
        jb public_6f7b934
        public_6f7b932 : nop
        mov edi, ebp
        public_6f7b934 : nop
        test ecx, ecx
        jne public_6f7b93c
        xor edx, edx
        jmp public_6f7b94f
        public_6f7b93c : nop
        sub esi, ecx
        mov eax, 0x60F25DEB
        imul esi
        sar edx, 9
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f7b94f : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f7b95c
        xor eax, eax
        public_6f7b95c : nop
        imul eax, 0x548
        push eax
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6f7b99e
        public_6f7b980 : nop
        push esi
        push ebx
        call public_6f30430
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x548
        add esp, 8
        add ebx, 0x548
        cmp esi, eax
        jne public_6f7b980
        public_6f7b99e : nop
        test ebp, ebp
        mov esi, ebx
        jbe public_6f7b9cb
        mov dword ptr ss : [esp+0x24], ebp
        public_6f7b9a8 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6f30430
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x548
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6f7b9a8
        mov eax, dword ptr ss : [esp+0x20]
        public_6f7b9cb : nop
        mov ecx, ebp
        imul ecx, 0x548
        add ecx, ebx
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov esi, eax
        je public_6f7ba06
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6f7b9f0
        public_6f7b9e6 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        lea ebx, ds:[ebx]
        public_6f7b9f0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6f30430
        add esi, 0x548
        add esp, 8
        cmp esi, ebx
        jne public_6f7b9e6
        public_6f7ba06 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6f7ba22
        public_6f7ba10 : nop
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx]
        add esi, 0x548
        cmp esi, ebx
        jne public_6f7ba10
        public_6f7ba22 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x548
        add eax, esi
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6f7ba4c
        xor edx, edx
        jmp public_6f7ba62
        public_6f7ba4c : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x60F25DEB
        imul ecx
        sar edx, 9
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f7ba62 : nop
        add edx, ebp
        imul edx, 0x548
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f7ba7c : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, edi
        mov eax, 0x60F25DEB
        imul edx
        sar edx, 9
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6f7bb4c
        mov eax, ebp
        imul eax, 0x548
        mov dword ptr ss : [esp+0x24], eax
        add eax, edi
        cmp edi, esi
        mov ebx, edi
        je public_6f7bada
        sub eax, edi
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6f7bac0
        public_6f7bab9 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ds:[ecx]
        public_6f7bac0 : nop
        add eax, ebx
        push ebx
        push eax
        call public_6f30430
        add ebx, 0x548
        add esp, 8
        cmp ebx, esi
        jne public_6f7bab9
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7bada : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ss : [esp+0x28]
        mov edx, esi
        sub edx, edi
        mov eax, 0x60F25DEB
        imul edx
        sar edx, 9
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub ebp, edx
        je public_6f7bb17
        lea ebx, ds:[ebx]
        public_6f7bb00 : nop
        push ebx
        push esi
        call public_6f30430
        add esp, 8
        add esi, 0x548
        dec ebp
        jne public_6f7bb00
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7bb17 : nop
        mov esi, dword ptr ds : [ecx+8]
        cmp edi, esi
        je public_6f7bb36
        mov edi, edi
        public_6f7bb20 : nop
        push ebx
        mov ecx, edi
        call public_6f7e420
        add edi, 0x548
        cmp edi, esi
        jne public_6f7bb20
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7bb36 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ecx+8], eax
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f7bb4c : nop
        test ebp, ebp
        jbe public_6f7bcb2
        mov eax, ebp
        imul eax, 0x548
        mov ebx, esi
        sub ebx, eax
        cmp ebx, esi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x24], eax
        je public_6f7bb9e
        lea esp, ss:[esp]
        public_6f7bb70 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push ebx
        push eax
        call public_6f30430
        mov edx, dword ptr ss : [esp+0x1C]
        add edx, 0x548
        add ebx, 0x548
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x14], edx
        jne public_6f7bb70
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7bb9e : nop
        mov ebp, dword ptr ds : [ecx+8]
        mov ebx, ebp
        sub ebx, eax
        cmp edi, ebx
        je public_6f7bc2a
        lea ecx, ds:[ecx]
        public_6f7bbb0 : nop
        sub ebx, 0x548
        sub ebp, 0x548
        push ebx
        mov ecx, ebp
        call public_6f7e720
        test ebx, ebx
        je public_6f7bbd0
        lea eax, ds:[ebx+0x118]
        jmp public_6f7bbd2
        public_6f7bbd0 : nop
        xor eax, eax
        public_6f7bbd2 : nop
        add eax, 8
        push eax
        lea ecx, ss:[ebp+0x11C]
        call public_6ead640
        mov cl, byte ptr ds : [ebx+0x164]
        mov byte ptr ss : [ebp+0x164], cl
        mov edx, dword ptr ds : [ebx+0x168]
        mov dword ptr ss : [ebp+0x168], edx
        lea esi, ds:[ebx+0x16C]
        lea edi, ss:[ebp+0x16C]
        mov ecx, 0xF6
        rep movsd
        mov al, byte ptr ds : [ebx+0x544]
        mov byte ptr ss : [ebp+0x544], al
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebx
        jne public_6f7bbb0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        public_6f7bc2a : nop
        lea edx, ds:[eax+edi]
        cmp edi, edx
        mov dword ptr ss : [esp+0x20], edx
        je public_6f7bcaf
        mov ebp, dword ptr ss : [esp+0x28]
        lea ebx, ds:[edi+0x164]
        nop 
        public_6f7bc40 : nop
        push ebp
        lea ecx, ds:[ebx-0x164]
        call public_6f7e720
        test ebp, ebp
        je public_6f7bc58
        lea eax, ss:[ebp+0x118]
        jmp public_6f7bc5a
        public_6f7bc58 : nop
        xor eax, eax
        public_6f7bc5a : nop
        add eax, 8
        push eax
        lea ecx, ds:[ebx-0x48]
        call public_6ead640
        mov cl, byte ptr ss : [ebp+0x164]
        mov byte ptr ds : [ebx], cl
        mov edx, dword ptr ss : [ebp+0x168]
        mov dword ptr ds : [ebx+4], edx
        lea edi, ds:[ebx+8]
        mov ecx, 0xF6
        lea esi, ss:[ebp+0x16C]
        rep movsd
        mov al, byte ptr ss : [ebp+0x544]
        mov byte ptr ds : [ebx+0x3E0], al
        mov eax, dword ptr ss : [esp+0x20]
        add ebx, 0x548
        lea ecx, ds:[ebx-0x164]
        cmp ecx, eax
        jne public_6f7bc40
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7bcaf : nop
        add dword ptr ds : [ecx+8], eax
        public_6f7bcb2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f7b8e0)
    }
}

#undef public_6f7b932
#undef public_6f7b934
#undef public_6f7b93c
#undef public_6f7b94f
#undef public_6f7b95c
#undef public_6f7b980
#undef public_6f7b99e
#undef public_6f7b9a8
#undef public_6f7b9cb
#undef public_6f7b9e6
#undef public_6f7b9f0
#undef public_6f7ba06
#undef public_6f7ba10
#undef public_6f7ba22
#undef public_6f7ba4c
#undef public_6f7ba62
#undef public_6f7ba7c
#undef public_6f7bab9
#undef public_6f7bac0
#undef public_6f7bada
#undef public_6f7bb00
#undef public_6f7bb17
#undef public_6f7bb20
#undef public_6f7bb36
#undef public_6f7bb4c
#undef public_6f7bb70
#undef public_6f7bb9e
#undef public_6f7bbb0
#undef public_6f7bbd0
#undef public_6f7bbd2
#undef public_6f7bc2a
#undef public_6f7bc40
#undef public_6f7bc58
#undef public_6f7bc5a
#undef public_6f7bcaf
#undef public_6f7bcb2
