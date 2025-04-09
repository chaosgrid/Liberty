#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432530);
CLANG_FORWARD_PROC_SYMBOL(public_4336f0);
CLANG_FORWARD_PROC_SYMBOL(public_433da0);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_5a7b80);
CLANG_FORWARD_PROC_SYMBOL(public_5a7c20);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_432550 _public_432550
#define public_432563 _public_432563
#define public_432566 _public_432566
#define public_43256a _public_43256a
#define public_4325c9 _public_4325c9
#define public_4325e1 _public_4325e1
#define public_4325eb _public_4325eb
#define public_4325ef _public_4325ef
#define public_432600 _public_432600
#define public_43263b _public_43263b
#define public_43264a _public_43264a
#define public_43266b _public_43266b
#define public_43268c _public_43268c
#define public_43269a _public_43269a
#define public_4326b9 _public_4326b9
#define public_4326c5 _public_4326c5
#define public_4326e1 _public_4326e1
#define public_4326fc _public_4326fc
#define public_432703 _public_432703
#define public_432726 _public_432726

PROC_DECLARE(0x432530, internal_432530, public_432530);
extern "C" NAKED register_t __cdecl internal_432530()
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
        je public_43256a
        lea esp, ss:[esp]
        public_432550 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_432563
        mov ebp, dword ptr ss : [ebp]
        jmp public_432566
        public_432563 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_432566 : nop
        cmp ebp, edx
        jne public_432550
        public_43256a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_4326e1
        push 0
        push esi
        mov ecx, edi
        call public_5a7b80
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_433da0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_4325c9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_4325c9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_4325c9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_4325ef
        mov dword ptr ds : [eax+8], ebx
        jmp public_4325ef
        public_4325c9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_4325e1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_4325eb
        public_4325e1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_4325eb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_4325eb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_4325ef : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_4326c5
        lea ecx, ds:[ecx]
        public_432600 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_4326c5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_43266b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_43263b
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_4326b9
        public_43263b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_43264a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_43264a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_4326b9
        public_43266b : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_43268c
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_4326b9
        public_43268c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_43269a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_43269a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_4326b9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_432600
        public_4326c5 : nop
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
        public_4326e1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_4326fc
        cmp esi, dword ptr ds : [ecx]
        je public_432703
        lea ecx, ss:[esp+0x10]
        call public_5a7c20
        mov edx, dword ptr ss : [esp+0x10]
        public_4326fc : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_432726
        public_432703 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_4336f0
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
        public_432726 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x432530)
    }
}

#undef public_432550
#undef public_432563
#undef public_432566
#undef public_43256a
#undef public_4325c9
#undef public_4325e1
#undef public_4325eb
#undef public_4325ef
#undef public_432600
#undef public_43263b
#undef public_43264a
#undef public_43266b
#undef public_43268c
#undef public_43269a
#undef public_4326b9
#undef public_4326c5
#undef public_4326e1
#undef public_4326fc
#undef public_432703
#undef public_432726
