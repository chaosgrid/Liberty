#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_46d170);
CLANG_FORWARD_PROC_SYMBOL(public_594940);
CLANG_FORWARD_PROC_SYMBOL(public_594e90);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);
CLANG_FORWARD_PROC_SYMBOL(public_5afe40);

#define public_46d190 _public_46d190
#define public_46d1a3 _public_46d1a3
#define public_46d1a6 _public_46d1a6
#define public_46d1aa _public_46d1aa
#define public_46d209 _public_46d209
#define public_46d221 _public_46d221
#define public_46d22b _public_46d22b
#define public_46d22f _public_46d22f
#define public_46d240 _public_46d240
#define public_46d27b _public_46d27b
#define public_46d28a _public_46d28a
#define public_46d2ab _public_46d2ab
#define public_46d2cc _public_46d2cc
#define public_46d2da _public_46d2da
#define public_46d2f9 _public_46d2f9
#define public_46d305 _public_46d305
#define public_46d321 _public_46d321
#define public_46d33c _public_46d33c
#define public_46d343 _public_46d343
#define public_46d366 _public_46d366

PROC_DECLARE(0x46d170, internal_46d170, public_46d170);
extern "C" NAKED register_t __cdecl internal_46d170()
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
        je public_46d1aa
        lea esp, ss:[esp]
        public_46d190 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_46d1a3
        mov ebp, dword ptr ss : [ebp]
        jmp public_46d1a6
        public_46d1a3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_46d1a6 : nop
        cmp ebp, edx
        jne public_46d190
        public_46d1aa : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_46d321
        push 0
        push esi
        mov ecx, edi
        call public_5afe40
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_5999b0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_46d209
        cmp ebp, dword ptr ds : [edi+8]
        jne public_46d209
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_46d209
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_46d22f
        mov dword ptr ds : [eax+8], ebx
        jmp public_46d22f
        public_46d209 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_46d221
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_46d22b
        public_46d221 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_46d22b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_46d22b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_46d22f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_46d305
        lea ecx, ds:[ecx]
        public_46d240 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x10]
        test cl, cl
        jne public_46d305
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_46d2ab
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_46d27b
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [ecx+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_46d2f9
        public_46d27b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_46d28a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_46d28a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x10], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x10], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_46d2f9
        public_46d2ab : nop
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_46d2cc
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_46d2f9
        public_46d2cc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_46d2da
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_46d2da : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_46d2f9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_46d240
        public_46d305 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x10], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_46d321 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_46d33c
        cmp esi, dword ptr ds : [ecx]
        je public_46d343
        lea ecx, ss:[esp+0x10]
        call public_594e90
        mov edx, dword ptr ss : [esp+0x10]
        public_46d33c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_46d366
        public_46d343 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_594940
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
        public_46d366 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x46d170)
    }
}

#undef public_46d190
#undef public_46d1a3
#undef public_46d1a6
#undef public_46d1aa
#undef public_46d209
#undef public_46d221
#undef public_46d22b
#undef public_46d22f
#undef public_46d240
#undef public_46d27b
#undef public_46d28a
#undef public_46d2ab
#undef public_46d2cc
#undef public_46d2da
#undef public_46d2f9
#undef public_46d305
#undef public_46d321
#undef public_46d33c
#undef public_46d343
#undef public_46d366
