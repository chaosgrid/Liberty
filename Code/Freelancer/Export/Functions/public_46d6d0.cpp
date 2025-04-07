#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f110);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_43c010);
CLANG_FORWARD_PROC_SYMBOL(public_46d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_4b68b0);
CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_46d6f0 _public_46d6f0
#define public_46d703 _public_46d703
#define public_46d706 _public_46d706
#define public_46d70a _public_46d70a
#define public_46d769 _public_46d769
#define public_46d781 _public_46d781
#define public_46d78b _public_46d78b
#define public_46d78f _public_46d78f
#define public_46d7a0 _public_46d7a0
#define public_46d7db _public_46d7db
#define public_46d7ea _public_46d7ea
#define public_46d80b _public_46d80b
#define public_46d82c _public_46d82c
#define public_46d83a _public_46d83a
#define public_46d859 _public_46d859
#define public_46d865 _public_46d865
#define public_46d881 _public_46d881
#define public_46d89c _public_46d89c
#define public_46d8a3 _public_46d8a3
#define public_46d8c6 _public_46d8c6

PROC_DECLARE(0x46d6d0, internal_46d6d0, public_46d6d0);
extern "C" NAKED register_t __cdecl internal_46d6d0()
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
        je public_46d70a
        lea esp, ss:[esp]
        public_46d6f0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_46d703
        mov ebp, dword ptr ss : [ebp]
        jmp public_46d706
        public_46d703 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_46d706 : nop
        cmp ebp, edx
        jne public_46d6f0
        public_46d70a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_46d881
        push 0
        push esi
        mov ecx, edi
        call public_40f110
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_4e5fc0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_46d769
        cmp ebp, dword ptr ds : [edi+8]
        jne public_46d769
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_46d769
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_46d78f
        mov dword ptr ds : [eax+8], ebx
        jmp public_46d78f
        public_46d769 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_46d781
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_46d78b
        public_46d781 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_46d78b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_46d78b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_46d78f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_46d865
        lea ecx, ds:[ecx]
        public_46d7a0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_46d865
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_46d80b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_46d7db
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_46d859
        public_46d7db : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_46d7ea
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_46d7ea : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_46d859
        public_46d80b : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_46d82c
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_46d859
        public_46d82c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_46d83a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_46d83a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_46d859 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_46d7a0
        public_46d865 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_46d881 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_46d89c
        cmp esi, dword ptr ds : [ecx]
        je public_46d8a3
        lea ecx, ss:[esp+0x10]
        call public_43c010
        mov edx, dword ptr ss : [esp+0x10]
        public_46d89c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_46d8c6
        public_46d8a3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_4b68b0
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
        public_46d8c6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x46d6d0)
    }
}

#undef public_46d6f0
#undef public_46d703
#undef public_46d706
#undef public_46d70a
#undef public_46d769
#undef public_46d781
#undef public_46d78b
#undef public_46d78f
#undef public_46d7a0
#undef public_46d7db
#undef public_46d7ea
#undef public_46d80b
#undef public_46d82c
#undef public_46d83a
#undef public_46d859
#undef public_46d865
#undef public_46d881
#undef public_46d89c
#undef public_46d8a3
#undef public_46d8c6
