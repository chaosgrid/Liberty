#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f2ab0);
CLANG_FORWARD_PROC_SYMBOL(public_65f30d0);
CLANG_FORWARD_PROC_SYMBOL(public_65f3350);
CLANG_FORWARD_PROC_SYMBOL(public_65f33c0);
CLANG_FORWARD_PROC_SYMBOL(public_65f3420);
CLANG_FORWARD_PROC_SYMBOL(public_65f3470);
CLANG_FORWARD_PROC_SYMBOL(public_65f3520);

#define public_65f2ad0 _public_65f2ad0
#define public_65f2ae3 _public_65f2ae3
#define public_65f2ae6 _public_65f2ae6
#define public_65f2aea _public_65f2aea
#define public_65f2b49 _public_65f2b49
#define public_65f2b61 _public_65f2b61
#define public_65f2b6b _public_65f2b6b
#define public_65f2b6f _public_65f2b6f
#define public_65f2b80 _public_65f2b80
#define public_65f2bbb _public_65f2bbb
#define public_65f2bca _public_65f2bca
#define public_65f2beb _public_65f2beb
#define public_65f2c0c _public_65f2c0c
#define public_65f2c1a _public_65f2c1a
#define public_65f2c39 _public_65f2c39
#define public_65f2c45 _public_65f2c45
#define public_65f2c61 _public_65f2c61
#define public_65f2c7c _public_65f2c7c
#define public_65f2c83 _public_65f2c83
#define public_65f2ca6 _public_65f2ca6

PROC_DECLARE(0x65f2ab0, internal_65f2ab0, public_65f2ab0);
extern "C" NAKED register_t __cdecl internal_65f2ab0()
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
        je public_65f2aea
        lea esp, ss:[esp]
        public_65f2ad0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_65f2ae3
        mov ebp, dword ptr ss : [ebp]
        jmp public_65f2ae6
        public_65f2ae3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_65f2ae6 : nop
        cmp ebp, edx
        jne public_65f2ad0
        public_65f2aea : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_65f2c61
        push 0
        push esi
        mov ecx, edi
        call public_65f3420
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_65f3520
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_65f2b49
        cmp ebp, dword ptr ds : [edi+8]
        jne public_65f2b49
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_65f2b49
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_65f2b6f
        mov dword ptr ds : [eax+8], ebx
        jmp public_65f2b6f
        public_65f2b49 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_65f2b61
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_65f2b6b
        public_65f2b61 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_65f2b6b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_65f2b6b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_65f2b6f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_65f2c45
        lea ecx, ds:[ecx]
        public_65f2b80 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_65f2c45
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_65f2beb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_65f2bbb
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_65f2c39
        public_65f2bbb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_65f2bca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_65f3350
        public_65f2bca : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_65f33c0
        jmp public_65f2c39
        public_65f2beb : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_65f2c0c
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_65f2c39
        public_65f2c0c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_65f2c1a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_65f33c0
        public_65f2c1a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_65f3350
        public_65f2c39 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_65f2b80
        public_65f2c45 : nop
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
        public_65f2c61 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_65f2c7c
        cmp esi, dword ptr ds : [ecx]
        je public_65f2c83
        lea ecx, ss:[esp+0x10]
        call public_65f3470
        mov edx, dword ptr ss : [esp+0x10]
        public_65f2c7c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_65f2ca6
        public_65f2c83 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_65f30d0
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
        public_65f2ca6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x65f2ab0)
    }
}

#undef public_65f2ad0
#undef public_65f2ae3
#undef public_65f2ae6
#undef public_65f2aea
#undef public_65f2b49
#undef public_65f2b61
#undef public_65f2b6b
#undef public_65f2b6f
#undef public_65f2b80
#undef public_65f2bbb
#undef public_65f2bca
#undef public_65f2beb
#undef public_65f2c0c
#undef public_65f2c1a
#undef public_65f2c39
#undef public_65f2c45
#undef public_65f2c61
#undef public_65f2c7c
#undef public_65f2c83
#undef public_65f2ca6
