#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce4bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5a90);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);
CLANG_FORWARD_PROC_SYMBOL(public_6d16080);
CLANG_FORWARD_PROC_SYMBOL(public_6d59680);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5af80);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b040);

#define public_6d59698 _public_6d59698
#define public_6d596a9 _public_6d596a9
#define public_6d596c5 _public_6d596c5
#define public_6d596c8 _public_6d596c8
#define public_6d596cd _public_6d596cd
#define public_6d59734 _public_6d59734
#define public_6d5974d _public_6d5974d
#define public_6d59757 _public_6d59757
#define public_6d5975b _public_6d5975b
#define public_6d59770 _public_6d59770
#define public_6d597ab _public_6d597ab
#define public_6d597ba _public_6d597ba
#define public_6d597db _public_6d597db
#define public_6d597fc _public_6d597fc
#define public_6d5980a _public_6d5980a
#define public_6d59829 _public_6d59829
#define public_6d59835 _public_6d59835
#define public_6d59851 _public_6d59851
#define public_6d5986a _public_6d5986a
#define public_6d59873 _public_6d59873
#define public_6d5988c _public_6d5988c
#define public_6d598a7 _public_6d598a7

PROC_DECLARE(0x6d59680, internal_6d59680, public_6d59680);
extern "C" NAKED register_t __cdecl internal_6d59680()
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
        mov ebp, dword ptr ds : [edi+4]
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ds : [edi+8]
        mov al, 1
        je public_6d596cd
        public_6d59698 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ebp, esi
        jne public_6d596a9
        mov eax, offset public_6d64f30
        public_6d596a9 : nop
        push ecx
        push eax
        mov eax, dword ptr ds : [ebx+8]
        push eax
        push 0
        mov ecx, ebx
        call public_6d5b040
        test eax, eax
        setl al
        test al, al
        je public_6d596c5
        mov esi, dword ptr ds : [esi]
        jmp public_6d596c8
        public_6d596c5 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6d596c8 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6d59698
        public_6d596cd : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6d59851
        push 0
        push ebp
        mov ecx, edi
        call public_6ce4bb0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6ce5a90
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp ebp, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6d59734
        cmp esi, dword ptr ds : [edi+8]
        jne public_6d59734
        lea eax, ss:[ebp+0xC]
        push eax
        mov ecx, ebx
        call public_6d5af80
        test eax, eax
        jl public_6d59734
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [eax+8]
        jne public_6d5975b
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d5975b
        public_6d59734 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp ebp, eax
        jne public_6d5974d
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d59757
        public_6d5974d : nop
        cmp ebp, dword ptr ds : [eax]
        jne public_6d59757
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6d59757 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d5975b : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6d59835
        lea esp, ss:[esp]
        public_6d59770 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_6d59835
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d597db
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6d597ab
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6d59829
        public_6d597ab : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d597ba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6d16080
        public_6d597ba : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6cfdef0
        jmp public_6d59829
        public_6d597db : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6d597fc
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6d59829
        public_6d597fc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6d5980a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6cfdef0
        public_6d5980a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6d16080
        public_6d59829 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6d59770
        public_6d59835 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6d59851 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], ebp
        je public_6d59873
        mov ecx, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [ecx]
        jne public_6d5986a
        push ebx
        push ebp
        push esi
        lea edx, ss:[esp+0x28]
        push edx
        jmp public_6d5988c
        public_6d5986a : nop
        lea ecx, ss:[esp+0x10]
        call public_6d5a8d0
        public_6d59873 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ds:[edx+0xC]
        push ebx
        call public_6d5af80
        test eax, eax
        jge public_6d598a7
        push ebx
        push ebp
        push esi
        lea eax, ss:[esp+0x28]
        push eax
        public_6d5988c : nop
        mov ecx, edi
        call public_6d5a1f0
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
        public_6d598a7 : nop
        mov esi, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 0
        call public_6d0f600
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d59680)
    }
}

#undef public_6d59698
#undef public_6d596a9
#undef public_6d596c5
#undef public_6d596c8
#undef public_6d596cd
#undef public_6d59734
#undef public_6d5974d
#undef public_6d59757
#undef public_6d5975b
#undef public_6d59770
#undef public_6d597ab
#undef public_6d597ba
#undef public_6d597db
#undef public_6d597fc
#undef public_6d5980a
#undef public_6d59829
#undef public_6d59835
#undef public_6d59851
#undef public_6d5986a
#undef public_6d59873
#undef public_6d5988c
#undef public_6d598a7
