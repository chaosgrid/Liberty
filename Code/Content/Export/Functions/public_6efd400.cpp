#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efd400);
CLANG_FORWARD_PROC_SYMBOL(public_6efdd30);
CLANG_FORWARD_PROC_SYMBOL(public_6efdfa0);
CLANG_FORWARD_PROC_SYMBOL(public_6efe000);
CLANG_FORWARD_PROC_SYMBOL(public_6f46170);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6efd420 _public_6efd420
#define public_6efd433 _public_6efd433
#define public_6efd436 _public_6efd436
#define public_6efd43a _public_6efd43a
#define public_6efd499 _public_6efd499
#define public_6efd4b1 _public_6efd4b1
#define public_6efd4bb _public_6efd4bb
#define public_6efd4bf _public_6efd4bf
#define public_6efd4d0 _public_6efd4d0
#define public_6efd50b _public_6efd50b
#define public_6efd51a _public_6efd51a
#define public_6efd53b _public_6efd53b
#define public_6efd55c _public_6efd55c
#define public_6efd56a _public_6efd56a
#define public_6efd589 _public_6efd589
#define public_6efd595 _public_6efd595
#define public_6efd5b1 _public_6efd5b1
#define public_6efd5cc _public_6efd5cc
#define public_6efd5d3 _public_6efd5d3
#define public_6efd5f6 _public_6efd5f6

PROC_DECLARE(0x6efd400, internal_6efd400, public_6efd400);
extern "C" NAKED register_t __cdecl internal_6efd400()
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
        je public_6efd43a
        lea esp, ss:[esp]
        public_6efd420 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6efd433
        mov ebp, dword ptr ss : [ebp]
        jmp public_6efd436
        public_6efd433 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6efd436 : nop
        cmp ebp, edx
        jne public_6efd420
        public_6efd43a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6efd5b1
        push 0
        push esi
        mov ecx, edi
        call public_6f46170
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6efe000
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6efd499
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6efd499
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6efd499
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6efd4bf
        mov dword ptr ds : [eax+8], ebx
        jmp public_6efd4bf
        public_6efd499 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6efd4b1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6efd4bb
        public_6efd4b1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6efd4bb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6efd4bb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6efd4bf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6efd595
        lea ecx, ds:[ecx]
        public_6efd4d0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x54]
        test cl, cl
        jne public_6efd595
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6efd53b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_6efd50b
        mov byte ptr ds : [eax+0x54], 1
        mov byte ptr ds : [ecx+0x54], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6efd589
        public_6efd50b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6efd51a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6efd51a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x54], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x54], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6efd589
        public_6efd53b : nop
        mov dl, byte ptr ds : [ecx+0x54]
        test dl, dl
        jne public_6efd55c
        mov byte ptr ds : [eax+0x54], 1
        mov byte ptr ds : [ecx+0x54], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x54], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6efd589
        public_6efd55c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6efd56a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6efd56a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x54], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x54], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6efd589 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6efd4d0
        public_6efd595 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x54], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6efd5b1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6efd5cc
        cmp esi, dword ptr ds : [ecx]
        je public_6efd5d3
        lea ecx, ss:[esp+0x10]
        call public_6efdfa0
        mov edx, dword ptr ss : [esp+0x10]
        public_6efd5cc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6efd5f6
        public_6efd5d3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6efdd30
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
        public_6efd5f6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6efd400)
    }
}

#undef public_6efd420
#undef public_6efd433
#undef public_6efd436
#undef public_6efd43a
#undef public_6efd499
#undef public_6efd4b1
#undef public_6efd4bb
#undef public_6efd4bf
#undef public_6efd4d0
#undef public_6efd50b
#undef public_6efd51a
#undef public_6efd53b
#undef public_6efd55c
#undef public_6efd56a
#undef public_6efd589
#undef public_6efd595
#undef public_6efd5b1
#undef public_6efd5cc
#undef public_6efd5d3
#undef public_6efd5f6
