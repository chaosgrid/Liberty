#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eadb20);
CLANG_FORWARD_PROC_SYMBOL(public_6eb0170);
CLANG_FORWARD_PROC_SYMBOL(public_6eb13d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1400);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1960);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6eadb40 _public_6eadb40
#define public_6eadb53 _public_6eadb53
#define public_6eadb56 _public_6eadb56
#define public_6eadb5a _public_6eadb5a
#define public_6eadbb9 _public_6eadbb9
#define public_6eadbd1 _public_6eadbd1
#define public_6eadbdb _public_6eadbdb
#define public_6eadbdf _public_6eadbdf
#define public_6eadbf0 _public_6eadbf0
#define public_6eadc3d _public_6eadc3d
#define public_6eadc4c _public_6eadc4c
#define public_6eadc73 _public_6eadc73
#define public_6eadca0 _public_6eadca0
#define public_6eadcae _public_6eadcae
#define public_6eadcd3 _public_6eadcd3
#define public_6eadcdf _public_6eadcdf
#define public_6eadcfe _public_6eadcfe
#define public_6eadd19 _public_6eadd19
#define public_6eadd20 _public_6eadd20
#define public_6eadd43 _public_6eadd43

PROC_DECLARE(0x6eadb20, internal_6eadb20, public_6eadb20);
extern "C" NAKED register_t __cdecl internal_6eadb20()
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
        je public_6eadb5a
        lea esp, ss:[esp]
        public_6eadb40 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6eadb53
        mov ebp, dword ptr ss : [ebp]
        jmp public_6eadb56
        public_6eadb53 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6eadb56 : nop
        cmp ebp, edx
        jne public_6eadb40
        public_6eadb5a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6eadcfe
        push 0
        push esi
        mov ecx, edi
        call public_6eb13d0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6eb1960
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6eadbb9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6eadbb9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6eadbb9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eadbdf
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eadbdf
        public_6eadbb9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6eadbd1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eadbdb
        public_6eadbd1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eadbdb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6eadbdb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6eadbdf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6eadcdf
        lea ecx, ds:[ecx]
        public_6eadbf0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0xA4]
        test cl, cl
        jne public_6eadcdf
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eadc73
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0xA4]
        test dl, dl
        jne public_6eadc3d
        mov byte ptr ds : [eax+0xA4], 1
        mov byte ptr ds : [ecx+0xA4], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xA4], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6eadcd3
        public_6eadc3d : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eadc4c
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6eadc4c : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0xA4], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0xA4], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6eadcd3
        public_6eadc73 : nop
        mov dl, byte ptr ds : [ecx+0xA4]
        test dl, dl
        jne public_6eadca0
        mov byte ptr ds : [eax+0xA4], 1
        mov byte ptr ds : [ecx+0xA4], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0xA4], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6eadcd3
        public_6eadca0 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eadcae
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6eadcae : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0xA4], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xA4], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6eadcd3 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6eadbf0
        public_6eadcdf : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0xA4], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6eadcfe : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6eadd19
        cmp esi, dword ptr ds : [ecx]
        je public_6eadd20
        lea ecx, ss:[esp+0x10]
        call public_6eb1400
        mov edx, dword ptr ss : [esp+0x10]
        public_6eadd19 : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6eadd43
        public_6eadd20 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6eb0170
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
        public_6eadd43 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6eadb20)
    }
}

#undef public_6eadb40
#undef public_6eadb53
#undef public_6eadb56
#undef public_6eadb5a
#undef public_6eadbb9
#undef public_6eadbd1
#undef public_6eadbdb
#undef public_6eadbdf
#undef public_6eadbf0
#undef public_6eadc3d
#undef public_6eadc4c
#undef public_6eadc73
#undef public_6eadca0
#undef public_6eadcae
#undef public_6eadcd3
#undef public_6eadcdf
#undef public_6eadcfe
#undef public_6eadd19
#undef public_6eadd20
#undef public_6eadd43
