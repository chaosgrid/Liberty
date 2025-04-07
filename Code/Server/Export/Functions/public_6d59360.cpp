#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16080);
CLANG_FORWARD_PROC_SYMBOL(public_6d59360);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a1c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ab90);

#define public_6d59378 _public_6d59378
#define public_6d59391 _public_6d59391
#define public_6d59394 _public_6d59394
#define public_6d5939d _public_6d5939d
#define public_6d59407 _public_6d59407
#define public_6d5941f _public_6d5941f
#define public_6d59429 _public_6d59429
#define public_6d5942d _public_6d5942d
#define public_6d59440 _public_6d59440
#define public_6d5948d _public_6d5948d
#define public_6d5949c _public_6d5949c
#define public_6d594c3 _public_6d594c3
#define public_6d594f0 _public_6d594f0
#define public_6d594fe _public_6d594fe
#define public_6d59523 _public_6d59523
#define public_6d5952f _public_6d5952f
#define public_6d5954e _public_6d5954e
#define public_6d59580 _public_6d59580
#define public_6d59589 _public_6d59589
#define public_6d595c6 _public_6d595c6

PROC_DECLARE(0x6d59360, internal_6d59360, public_6d59360);
extern "C" NAKED register_t __cdecl internal_6d59360()
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
        mov esi, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, dword ptr ds : [edi+8]
        mov al, 1
        je public_6d5939d
        public_6d59378 : nop
        lea eax, ss:[ebp+0xC]
        push eax
        push ebx
        mov esi, ebp
        call dword ptr ds : [public_6d648d8]
        add esp, 8
        test al, al
        je public_6d59391
        mov ebp, dword ptr ss : [ebp]
        jmp public_6d59394
        public_6d59391 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6d59394 : nop
        cmp ebp, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x1C]
        jne public_6d59378
        public_6d5939d : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6d5954e
        push 0
        push esi
        mov ecx, edi
        call public_6d5a1c0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6d5ab90
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6d59407
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6d59407
        lea eax, ds:[esi+0xC]
        push eax
        push ebx
        call dword ptr ds : [public_6d648d8]
        add esp, 8
        test al, al
        jne public_6d59407
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d5942d
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d5942d
        public_6d59407 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6d5941f
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d59429
        public_6d5941f : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6d59429
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6d59429 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d5942d : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6d5952f
        nop 
        lea esp, ss:[esp]
        public_6d59440 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x5A4]
        test cl, cl
        jne public_6d5952f
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d594c3
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x5A4]
        test dl, dl
        jne public_6d5948d
        mov byte ptr ds : [eax+0x5A4], 1
        mov byte ptr ds : [ecx+0x5A4], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5A4], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6d59523
        public_6d5948d : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d5949c
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6d16080
        public_6d5949c : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x5A4], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x5A4], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6cfdef0
        jmp public_6d59523
        public_6d594c3 : nop
        mov dl, byte ptr ds : [ecx+0x5A4]
        test dl, dl
        jne public_6d594f0
        mov byte ptr ds : [eax+0x5A4], 1
        mov byte ptr ds : [ecx+0x5A4], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x5A4], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6d59523
        public_6d594f0 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6d594fe
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6cfdef0
        public_6d594fe : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x5A4], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5A4], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6d16080
        public_6d59523 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6d59440
        public_6d5952f : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x5A4], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6d5954e : nop
        test al, al
        mov dword ptr ss : [esp+0x10], esi
        je public_6d59589
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx]
        jne public_6d59580
        push ebx
        push esi
        push ebp
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, edi
        call public_6d59ef0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6d59580 : nop
        lea ecx, ss:[esp+0x10]
        call public_6d5a7f0
        public_6d59589 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+0xC]
        push ebx
        push eax
        call dword ptr ds : [public_6d648d8]
        add esp, 8
        test al, al
        je public_6d595c6
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6d59ef0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6d595c6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d59360)
    }
}

#undef public_6d59378
#undef public_6d59391
#undef public_6d59394
#undef public_6d5939d
#undef public_6d59407
#undef public_6d5941f
#undef public_6d59429
#undef public_6d5942d
#undef public_6d59440
#undef public_6d5948d
#undef public_6d5949c
#undef public_6d594c3
#undef public_6d594f0
#undef public_6d594fe
#undef public_6d59523
#undef public_6d5952f
#undef public_6d5954e
#undef public_6d59580
#undef public_6d59589
#undef public_6d595c6
