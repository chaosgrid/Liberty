#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6318650);
CLANG_FORWARD_PROC_SYMBOL(public_6319120);
CLANG_FORWARD_PROC_SYMBOL(public_6319370);
CLANG_FORWARD_PROC_SYMBOL(public_6319ac0);
CLANG_FORWARD_PROC_SYMBOL(public_631a090);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_6318670 _public_6318670
#define public_6318683 _public_6318683
#define public_6318686 _public_6318686
#define public_631868a _public_631868a
#define public_63186e9 _public_63186e9
#define public_6318701 _public_6318701
#define public_631870b _public_631870b
#define public_631870f _public_631870f
#define public_6318720 _public_6318720
#define public_631875b _public_631875b
#define public_631876a _public_631876a
#define public_631878b _public_631878b
#define public_63187ac _public_63187ac
#define public_63187ba _public_63187ba
#define public_63187d9 _public_63187d9
#define public_63187e5 _public_63187e5
#define public_6318801 _public_6318801
#define public_631881c _public_631881c
#define public_6318823 _public_6318823
#define public_6318846 _public_6318846

PROC_DECLARE(0x6318650, internal_6318650, public_6318650);
extern "C" NAKED register_t __cdecl internal_6318650()
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
        je public_631868a
        lea esp, ss:[esp]
        public_6318670 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6318683
        mov ebp, dword ptr ss : [ebp]
        jmp public_6318686
        public_6318683 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6318686 : nop
        cmp ebp, edx
        jne public_6318670
        public_631868a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6318801
        push 0
        push esi
        mov ecx, edi
        call public_6319370
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_631a090
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_63186e9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_63186e9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_63186e9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_631870f
        mov dword ptr ds : [eax+8], ebx
        jmp public_631870f
        public_63186e9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6318701
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_631870b
        public_6318701 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_631870b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_631870b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_631870f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_63187e5
        lea ecx, ds:[ecx]
        public_6318720 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x60]
        test cl, cl
        jne public_63187e5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_631878b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x60]
        test dl, dl
        jne public_631875b
        mov byte ptr ds : [eax+0x60], 1
        mov byte ptr ds : [ecx+0x60], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_63187d9
        public_631875b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_631876a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_631876a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x60], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x60], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_63187d9
        public_631878b : nop
        mov dl, byte ptr ds : [ecx+0x60]
        test dl, dl
        jne public_63187ac
        mov byte ptr ds : [eax+0x60], 1
        mov byte ptr ds : [ecx+0x60], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x60], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_63187d9
        public_63187ac : nop
        cmp esi, dword ptr ds : [eax]
        jne public_63187ba
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_63187ba : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x60], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x60], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_63187d9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6318720
        public_63187e5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x60], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6318801 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_631881c
        cmp esi, dword ptr ds : [ecx]
        je public_6318823
        lea ecx, ss:[esp+0x10]
        call public_6319ac0
        mov edx, dword ptr ss : [esp+0x10]
        public_631881c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6318846
        public_6318823 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6319120
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
        public_6318846 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6318650)
    }
}

#undef public_6318670
#undef public_6318683
#undef public_6318686
#undef public_631868a
#undef public_63186e9
#undef public_6318701
#undef public_631870b
#undef public_631870f
#undef public_6318720
#undef public_631875b
#undef public_631876a
#undef public_631878b
#undef public_63187ac
#undef public_63187ba
#undef public_63187d9
#undef public_63187e5
#undef public_6318801
#undef public_631881c
#undef public_6318823
#undef public_6318846
