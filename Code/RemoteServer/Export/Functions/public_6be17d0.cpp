#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be17d0);
CLANG_FORWARD_PROC_SYMBOL(public_6be2460);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be1800 _public_6be1800
#define public_6be1808 _public_6be1808
#define public_6be182e _public_6be182e
#define public_6be1841 _public_6be1841
#define public_6be1854 _public_6be1854
#define public_6be188b _public_6be188b
#define public_6be189f _public_6be189f
#define public_6be18b5 _public_6be18b5
#define public_6be18d5 _public_6be18d5
#define public_6be18de _public_6be18de
#define public_6be18f3 _public_6be18f3
#define public_6be1916 _public_6be1916
#define public_6be1934 _public_6be1934
#define public_6be1950 _public_6be1950
#define public_6be195c _public_6be195c

PROC_DECLARE(0x6be17d0, internal_6be17d0, public_6be17d0);
extern "C" NAKED register_t __cdecl internal_6be17d0()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, ecx
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+8]
        push eax
        mov ecx, esi
        call public_6be2460
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+8], eax
        je public_6be1800
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jb public_6be1800
        lea eax, ss:[esp+8]
        jmp public_6be1808
        public_6be1800 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6be1808 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0xC]
        je public_6be195c
        mov edi, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [public_6c0b1c4]
        mov eax, dword ptr ds : [edi+0xC]
        mov esi, dword ptr ds : [edx]
        add edi, 4
        push ebx
        mov ebx, eax
        cmp esi, ebx
        push ebp
        jae public_6be182e
        mov ebx, esi
        public_6be182e : nop
        mov ebp, dword ptr ss : [esp+0x20]
        cmp ebp, edi
        jne public_6be189f
        cmp dword ptr ss : [ebp+8], ebx
        jae public_6be1841
        call dword ptr ds : [public_6c0b16c]
        public_6be1841 : nop
        mov ecx, ebp
        call dword ptr ds : [public_6c0b168]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_6be1854
        mov esi, eax
        public_6be1854 : nop
        test esi, esi
        jbe public_6be188b
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, ebx
        sub eax, esi
        push eax
        lea edx, ds:[ecx+esi]
        push edx
        push ecx
        call dword ptr ds : [public_6c0b1e4]
        mov edi, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub edi, esi
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6c0b174]
        test al, al
        je public_6be188b
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6c0b164]
        public_6be188b : nop
        mov ecx, ebp
        call dword ptr ds : [public_6c0b168]
        pop ebp
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        add esp, 8
        ret 8
        public_6be189f : nop
        xor esi, esi
        cmp ebx, esi
        jbe public_6be1916
        cmp ebx, eax
        jne public_6be1916
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6be18b5
        mov eax, dword ptr ds : [public_6c0b160]
        public_6be18b5 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6be1916
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_6be18de
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6be18d5
        cmp cl, 0xFF
        je public_6be18d5
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6be18de
        public_6be18d5 : nop
        push eax
        call public_6c09aaa
        add esp, 4
        public_6be18de : nop
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov eax, dword ptr ds : [edi+4]
        cmp eax, esi
        jne public_6be18f3
        mov eax, dword ptr ds : [public_6c0b160]
        public_6be18f3 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        mov cl, byte ptr ds : [eax-1]
        pop ebp
        pop ebx
        inc cl
        pop edi
        mov byte ptr ds : [eax-1], cl
        xor eax, eax
        pop esi
        add esp, 8
        ret 8
        public_6be1916 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6c0b174]
        test al, al
        je public_6be1950
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov esi, dword ptr ds : [public_6c0b160]
        je public_6be1934
        mov esi, edi
        public_6be1934 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_6c0b164]
        public_6be1950 : nop
        pop ebp
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        add esp, 8
        ret 8
        public_6be195c : nop
        pop edi
        mov eax, 4
        pop esi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6be17d0)
    }
}

#undef public_6be1800
#undef public_6be1808
#undef public_6be182e
#undef public_6be1841
#undef public_6be1854
#undef public_6be188b
#undef public_6be189f
#undef public_6be18b5
#undef public_6be18d5
#undef public_6be18de
#undef public_6be18f3
#undef public_6be1916
#undef public_6be1934
#undef public_6be1950
#undef public_6be195c
