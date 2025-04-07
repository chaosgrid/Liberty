#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6b600);

#define public_6f6b626 _public_6f6b626
#define public_6f6b652 _public_6f6b652
#define public_6f6b654 _public_6f6b654
#define public_6f6b675 _public_6f6b675
#define public_6f6b68b _public_6f6b68b
#define public_6f6b6a1 _public_6f6b6a1
#define public_6f6b6a7 _public_6f6b6a7
#define public_6f6b6c7 _public_6f6b6c7
#define public_6f6b6d5 _public_6f6b6d5
#define public_6f6b6ea _public_6f6b6ea

PROC_DECLARE(0x6f6b600, internal_6f6b600, public_6f6b600);
extern "C" NAKED register_t __cdecl internal_6f6b600()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x1C
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        cmp esi, eax
        push edi
        je public_6f6b6ea
        lea edi, ds:[esi+0xC]
        cmp edi, eax
        mov dword ptr ss : [esp+8], edi
        je public_6f6b6ea
        push ebx
        push ebp
        public_6f6b626 : nop
        mov eax, edi
        mov edx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+8]
        mov ebp, esi
        mov eax, dword ptr ss : [ebp]
        cmp edx, eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov ebp, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x28], ebp
        jb public_6f6b6a1
        ja public_6f6b652
        cmp ebx, ecx
        setb al
        test al, al
        jne public_6f6b6a1
        public_6f6b652 : nop
        mov eax, edi
        public_6f6b654 : nop
        sub eax, 0xC
        mov ebp, eax
        mov ecx, dword ptr ss : [ebp]
        cmp edx, ecx
        mov esi, dword ptr ss : [ebp+4]
        mov ebp, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x28], ebp
        jb public_6f6b675
        ja public_6f6b68b
        cmp ebx, esi
        setb cl
        test cl, cl
        je public_6f6b68b
        public_6f6b675 : nop
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [edi], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        mov edi, eax
        jmp public_6f6b654
        public_6f6b68b : nop
        mov esi, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        mov edi, dword ptr ss : [esp+0x10]
        jmp public_6f6b6d5
        public_6f6b6a1 : nop
        cmp esi, edi
        mov eax, edi
        je public_6f6b6c7
        public_6f6b6a7 : nop
        sub eax, 0xC
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        lea ecx, ds:[eax+0xC]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], ebp
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ss : [esp+0x30]
        cmp eax, esi
        jne public_6f6b6a7
        public_6f6b6c7 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ecx
        public_6f6b6d5 : nop
        mov eax, dword ptr ss : [esp+0x34]
        add edi, 0xC
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], edi
        jne public_6f6b626
        pop ebp
        pop ebx
        public_6f6b6ea : nop
        pop edi
        pop esi
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f6b600)
    }
}

#undef public_6f6b626
#undef public_6f6b652
#undef public_6f6b654
#undef public_6f6b675
#undef public_6f6b68b
#undef public_6f6b6a1
#undef public_6f6b6a7
#undef public_6f6b6c7
#undef public_6f6b6d5
#undef public_6f6b6ea
