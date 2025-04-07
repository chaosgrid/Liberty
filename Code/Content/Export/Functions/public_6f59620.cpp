#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46390);
CLANG_FORWARD_PROC_SYMBOL(public_6f463b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f59620);
CLANG_FORWARD_PROC_SYMBOL(public_6f59f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f59640 _public_6f59640
#define public_6f59653 _public_6f59653
#define public_6f59656 _public_6f59656
#define public_6f5965a _public_6f5965a
#define public_6f596b9 _public_6f596b9
#define public_6f596d1 _public_6f596d1
#define public_6f596db _public_6f596db
#define public_6f596df _public_6f596df
#define public_6f596f0 _public_6f596f0
#define public_6f5972b _public_6f5972b
#define public_6f5973a _public_6f5973a
#define public_6f5975b _public_6f5975b
#define public_6f5977c _public_6f5977c
#define public_6f5978a _public_6f5978a
#define public_6f597a9 _public_6f597a9
#define public_6f597b5 _public_6f597b5
#define public_6f597d1 _public_6f597d1
#define public_6f597ec _public_6f597ec
#define public_6f597f3 _public_6f597f3
#define public_6f59816 _public_6f59816

PROC_DECLARE(0x6f59620, internal_6f59620, public_6f59620);
extern "C" NAKED register_t __cdecl internal_6f59620()
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
        je public_6f5965a
        lea esp, ss:[esp]
        public_6f59640 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f59653
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f59656
        public_6f59653 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f59656 : nop
        cmp ebp, edx
        jne public_6f59640
        public_6f5965a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f597d1
        push 0
        push esi
        mov ecx, edi
        call public_6f46390
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f5a1b0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f596b9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f596b9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f596b9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f596df
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f596df
        public_6f596b9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f596d1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f596db
        public_6f596d1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f596db
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f596db : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f596df : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f597b5
        lea ecx, ds:[ecx]
        public_6f596f0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x28]
        test cl, cl
        jne public_6f597b5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f5975b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6f5972b
        mov byte ptr ds : [eax+0x28], 1
        mov byte ptr ds : [ecx+0x28], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f597a9
        public_6f5972b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f5973a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f5973a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x28], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x28], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f597a9
        public_6f5975b : nop
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6f5977c
        mov byte ptr ds : [eax+0x28], 1
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x28], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f597a9
        public_6f5977c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f5978a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f5978a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x28], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f597a9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f596f0
        public_6f597b5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x28], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f597d1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f597ec
        cmp esi, dword ptr ds : [ecx]
        je public_6f597f3
        lea ecx, ss:[esp+0x10]
        call public_6f463b0
        mov edx, dword ptr ss : [esp+0x10]
        public_6f597ec : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f59816
        public_6f597f3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f59f30
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
        public_6f59816 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f59620)
    }
}

#undef public_6f59640
#undef public_6f59653
#undef public_6f59656
#undef public_6f5965a
#undef public_6f596b9
#undef public_6f596d1
#undef public_6f596db
#undef public_6f596df
#undef public_6f596f0
#undef public_6f5972b
#undef public_6f5973a
#undef public_6f5975b
#undef public_6f5977c
#undef public_6f5978a
#undef public_6f597a9
#undef public_6f597b5
#undef public_6f597d1
#undef public_6f597ec
#undef public_6f597f3
#undef public_6f59816
