#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42f720);
CLANG_FORWARD_PROC_SYMBOL(public_430090);
CLANG_FORWARD_PROC_SYMBOL(public_430310);
CLANG_FORWARD_PROC_SYMBOL(public_4303f0);
CLANG_FORWARD_PROC_SYMBOL(public_430670);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_42f740 _public_42f740
#define public_42f753 _public_42f753
#define public_42f756 _public_42f756
#define public_42f75a _public_42f75a
#define public_42f7b9 _public_42f7b9
#define public_42f7d1 _public_42f7d1
#define public_42f7db _public_42f7db
#define public_42f7df _public_42f7df
#define public_42f7f0 _public_42f7f0
#define public_42f83d _public_42f83d
#define public_42f84c _public_42f84c
#define public_42f873 _public_42f873
#define public_42f8a0 _public_42f8a0
#define public_42f8ae _public_42f8ae
#define public_42f8d3 _public_42f8d3
#define public_42f8df _public_42f8df
#define public_42f8fe _public_42f8fe
#define public_42f919 _public_42f919
#define public_42f920 _public_42f920
#define public_42f943 _public_42f943

PROC_DECLARE(0x42f720, internal_42f720, public_42f720);
extern "C" NAKED register_t __cdecl internal_42f720()
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
        je public_42f75a
        lea esp, ss:[esp]
        public_42f740 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_42f753
        mov ebp, dword ptr ss : [ebp]
        jmp public_42f756
        public_42f753 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_42f756 : nop
        cmp ebp, edx
        jne public_42f740
        public_42f75a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_42f8fe
        push 0
        push esi
        mov ecx, edi
        call public_430310
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_430670
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_42f7b9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_42f7b9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_42f7b9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_42f7df
        mov dword ptr ds : [eax+8], ebx
        jmp public_42f7df
        public_42f7b9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_42f7d1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_42f7db
        public_42f7d1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_42f7db
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_42f7db : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_42f7df : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_42f8df
        lea ecx, ds:[ecx]
        public_42f7f0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x90]
        test cl, cl
        jne public_42f8df
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_42f873
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x90]
        test dl, dl
        jne public_42f83d
        mov byte ptr ds : [eax+0x90], 1
        mov byte ptr ds : [ecx+0x90], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x90], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_42f8d3
        public_42f83d : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_42f84c
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_42f84c : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x90], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x90], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_42f8d3
        public_42f873 : nop
        mov dl, byte ptr ds : [ecx+0x90]
        test dl, dl
        jne public_42f8a0
        mov byte ptr ds : [eax+0x90], 1
        mov byte ptr ds : [ecx+0x90], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x90], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_42f8d3
        public_42f8a0 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_42f8ae
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_42f8ae : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x90], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x90], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_42f8d3 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_42f7f0
        public_42f8df : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x90], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_42f8fe : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_42f919
        cmp esi, dword ptr ds : [ecx]
        je public_42f920
        lea ecx, ss:[esp+0x10]
        call public_4303f0
        mov edx, dword ptr ss : [esp+0x10]
        public_42f919 : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_42f943
        public_42f920 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_430090
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
        public_42f943 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x42f720)
    }
}

#undef public_42f740
#undef public_42f753
#undef public_42f756
#undef public_42f75a
#undef public_42f7b9
#undef public_42f7d1
#undef public_42f7db
#undef public_42f7df
#undef public_42f7f0
#undef public_42f83d
#undef public_42f84c
#undef public_42f873
#undef public_42f8a0
#undef public_42f8ae
#undef public_42f8d3
#undef public_42f8df
#undef public_42f8fe
#undef public_42f919
#undef public_42f920
#undef public_42f943
