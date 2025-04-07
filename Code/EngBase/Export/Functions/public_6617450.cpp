#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614340);
CLANG_FORWARD_PROC_SYMBOL(public_6617450);
CLANG_FORWARD_PROC_SYMBOL(public_66194e0);
CLANG_FORWARD_PROC_SYMBOL(public_6619a50);
CLANG_FORWARD_PROC_SYMBOL(public_661a0c0);
CLANG_FORWARD_PROC_SYMBOL(public_661a240);
CLANG_FORWARD_PROC_SYMBOL(public_661a9d0);

#define public_661746c _public_661746c
#define public_661747f _public_661747f
#define public_6617482 _public_6617482
#define public_6617486 _public_6617486
#define public_66174e7 _public_66174e7
#define public_66174ff _public_66174ff
#define public_6617509 _public_6617509
#define public_661750d _public_661750d
#define public_661751b _public_661751b
#define public_6617556 _public_6617556
#define public_6617565 _public_6617565
#define public_6617586 _public_6617586
#define public_66175a7 _public_66175a7
#define public_66175b5 _public_66175b5
#define public_66175d4 _public_66175d4
#define public_66175e0 _public_66175e0
#define public_66175fc _public_66175fc
#define public_6617617 _public_6617617
#define public_6617620 _public_6617620
#define public_6617643 _public_6617643

PROC_DECLARE(0x6617450, internal_6617450, public_6617450);
extern "C" NAKED register_t __cdecl internal_6617450()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov al, 1
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov esi, ecx
        mov ebp, dword ptr ds : [ecx+4]
        cmp ebp, edx
        je public_6617486
        public_661746c : nop
        mov eax, dword ptr ds : [ebx]
        mov esi, ebp
        cmp eax, dword ptr ss : [ebp+0xC]
        setl al
        test al, al
        je public_661747f
        mov ebp, dword ptr ss : [ebp]
        jmp public_6617482
        public_661747f : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6617482 : nop
        cmp ebp, edx
        jne public_661746c
        public_6617486 : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_66175fc
        push 0
        push esi
        mov ecx, edi
        call public_661a240
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_661a9d0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_66174e7
        cmp ebp, dword ptr ds : [edi+8]
        jne public_66174e7
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi+0xC]
        cmp eax, ecx
        jl public_66174e7
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_661750d
        mov dword ptr ds : [eax+8], ebx
        jmp public_661750d
        public_66174e7 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_66174ff
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6617509
        public_66174ff : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6617509
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6617509 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_661750d : nop
        mov edx, dword ptr ds : [edi+4]
        mov esi, ebx
        cmp ebx, dword ptr ds : [edx+4]
        je public_66175e0
        public_661751b : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x30]
        test cl, cl
        jne public_66175e0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6617586
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_6617556
        mov byte ptr ds : [eax+0x30], 1
        mov byte ptr ds : [ecx+0x30], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_66175d4
        public_6617556 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6617565
        mov esi, eax
        mov ecx, edi
        push esi
        call public_661a0c0
        public_6617565 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x30], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x30], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6619a50
        jmp public_66175d4
        public_6617586 : nop
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_66175a7
        mov byte ptr ds : [eax+0x30], 1
        mov byte ptr ds : [ecx+0x30], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x30], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_66175d4
        public_66175a7 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_66175b5
        mov esi, eax
        mov ecx, edi
        push esi
        call public_6619a50
        public_66175b5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x30], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [esi+4]
        mov ecx, edi
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_661a0c0
        public_66175d4 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_661751b
        public_66175e0 : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x30], 1
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_66175fc : nop
        mov edx, esi
        test al, al
        mov dword ptr ss : [esp+0x10], edx
        je public_6617617
        cmp esi, dword ptr ds : [ecx]
        je public_6617620
        lea ecx, ss:[esp+0x10]
        call public_6614340
        mov edx, dword ptr ss : [esp+0x10]
        public_6617617 : nop
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [ebx]
        cmp eax, ecx
        jge public_6617643
        public_6617620 : nop
        push ebx
        push esi
        lea ecx, ss:[esp+0x24]
        push ebp
        push ecx
        mov ecx, edi
        call public_66194e0
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
        public_6617643 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6617450)
    }
}

#undef public_661746c
#undef public_661747f
#undef public_6617482
#undef public_6617486
#undef public_66174e7
#undef public_66174ff
#undef public_6617509
#undef public_661750d
#undef public_661751b
#undef public_6617556
#undef public_6617565
#undef public_6617586
#undef public_66175a7
#undef public_66175b5
#undef public_66175d4
#undef public_66175e0
#undef public_66175fc
#undef public_6617617
#undef public_6617620
#undef public_6617643
