#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404f20);
CLANG_FORWARD_PROC_SYMBOL(public_405550);
CLANG_FORWARD_PROC_SYMBOL(public_4057a0);
CLANG_FORWARD_PROC_SYMBOL(public_405800);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_4f3800);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_404f40 _public_404f40
#define public_404f53 _public_404f53
#define public_404f56 _public_404f56
#define public_404f5a _public_404f5a
#define public_404fb9 _public_404fb9
#define public_404fd1 _public_404fd1
#define public_404fdb _public_404fdb
#define public_404fdf _public_404fdf
#define public_404ff0 _public_404ff0
#define public_40502b _public_40502b
#define public_40503a _public_40503a
#define public_40505b _public_40505b
#define public_40507c _public_40507c
#define public_40508a _public_40508a
#define public_4050a9 _public_4050a9
#define public_4050b5 _public_4050b5
#define public_4050d1 _public_4050d1
#define public_4050ec _public_4050ec
#define public_4050f3 _public_4050f3
#define public_405116 _public_405116

PROC_DECLARE(0x404f20, internal_404f20, public_404f20);
extern "C" NAKED register_t __cdecl internal_404f20()
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
        je public_404f5a
        lea esp, ss:[esp]
        public_404f40 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_404f53
        mov ebp, dword ptr ss : [ebp]
        jmp public_404f56
        public_404f53 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_404f56 : nop
        cmp ebp, edx
        jne public_404f40
        public_404f5a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_4050d1
        push 0
        push esi
        mov ecx, edi
        call public_4f3800
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_405800
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_404fb9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_404fb9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_404fb9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_404fdf
        mov dword ptr ds : [eax+8], ebx
        jmp public_404fdf
        public_404fb9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_404fd1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_404fdb
        public_404fd1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_404fdb
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_404fdb : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_404fdf : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_4050b5
        lea ecx, ds:[ecx]
        public_404ff0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x44]
        test cl, cl
        jne public_4050b5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_40505b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_40502b
        mov byte ptr ds : [eax+0x44], 1
        mov byte ptr ds : [ecx+0x44], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_4050a9
        public_40502b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_40503a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_40503a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x44], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x44], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_4050a9
        public_40505b : nop
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_40507c
        mov byte ptr ds : [eax+0x44], 1
        mov byte ptr ds : [ecx+0x44], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x44], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_4050a9
        public_40507c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_40508a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_40508a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x44], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_4050a9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_404ff0
        public_4050b5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x44], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_4050d1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_4050ec
        cmp esi, dword ptr ds : [ecx]
        je public_4050f3
        lea ecx, ss:[esp+0x10]
        call public_4057a0
        mov edx, dword ptr ss : [esp+0x10]
        public_4050ec : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_405116
        public_4050f3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_405550
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
        public_405116 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x404f20)
    }
}

#undef public_404f40
#undef public_404f53
#undef public_404f56
#undef public_404f5a
#undef public_404fb9
#undef public_404fd1
#undef public_404fdb
#undef public_404fdf
#undef public_404ff0
#undef public_40502b
#undef public_40503a
#undef public_40505b
#undef public_40507c
#undef public_40508a
#undef public_4050a9
#undef public_4050b5
#undef public_4050d1
#undef public_4050ec
#undef public_4050f3
#undef public_405116
