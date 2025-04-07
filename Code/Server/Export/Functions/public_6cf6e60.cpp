#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce42f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce4350);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6940);
CLANG_FORWARD_PROC_SYMBOL(public_6cf6e60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cf6e80 _public_6cf6e80
#define public_6cf6e97 _public_6cf6e97
#define public_6cf6eb8 _public_6cf6eb8
#define public_6cf6ed7 _public_6cf6ed7
#define public_6cf6f3d _public_6cf6f3d
#define public_6cf6f41 _public_6cf6f41
#define public_6cf6f66 _public_6cf6f66
#define public_6cf6f83 _public_6cf6f83
#define public_6cf6fa2 _public_6cf6fa2
#define public_6cf6fb6 _public_6cf6fb6

PROC_DECLARE(0x6cf6e60, internal_6cf6e60, public_6cf6e60);
extern "C" NAKED register_t __cdecl internal_6cf6e60()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        mov ebx, dword ptr ss : [esp+0x20]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov byte ptr ss : [esp+0x13], 0
        je public_6cf6ed7
        nop 
        lea esp, ss:[esp]
        public_6cf6e80 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ds : [ebx]
        je public_6cf6e97
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [ebp+0xC]
        jne public_6cf6e80
        jmp public_6cf6ed7
        public_6cf6e97 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        mov al, byte ptr ds : [edi+0x2F0]
        mov byte ptr ss : [esp+0x13], al
        je public_6cf6eb8
        mov ecx, edi
        call public_6cf6940
        push edi
        call public_6d5ffb0
        add esp, 4
        public_6cf6eb8 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6d5ffb0
        mov eax, dword ptr ss : [ebp+0x10]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+0x10], eax
        public_6cf6ed7 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+0x24]
        test ecx, ecx
        lea esi, ss:[ebp+0x14]
        mov edi, eax
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2C], eax
        je public_6cf6f3d
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_6d5c540
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, dword ptr ds : [ecx]
        jne public_6cf6f3d
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, ecx
        jne public_6cf6f3d
        mov eax, dword ptr ds : [ecx+4]
        push eax
        mov ecx, esi
        call public_6ce42f0
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6d5c540
        jmp public_6cf6f66
        public_6cf6f3d : nop
        cmp eax, edi
        je public_6cf6f66
        public_6cf6f41 : nop
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_6ce4350
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_6ce3ea0
        cmp dword ptr ss : [esp+0x2C], edi
        jne public_6cf6f41
        public_6cf6f66 : nop
        mov eax, dword ptr ss : [ebp+0x38]
        mov esi, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ds : [ebx]
        mov ecx, eax
        imul ecx, 0x418
        cmp edx, dword ptr ds : [ecx+esi-0x34]
        jne public_6cf6f83
        mov byte ptr ss : [ebp+0x28], 1
        public_6cf6f83 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x24], ecx
        mov cl, byte ptr ss : [esp+0x13]
        test cl, cl
        jne public_6cf6fa2
        mov cl, byte ptr ss : [ebp+0x28]
        test cl, cl
        je public_6cf6fb6
        public_6cf6fa2 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        lea esi, ss:[esp+0x20]
        push esi
        push eax
        call dword ptr ds : [edx+0xE4]
        public_6cf6fb6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6cf6e60)
    }
}

#undef public_6cf6e80
#undef public_6cf6e97
#undef public_6cf6eb8
#undef public_6cf6ed7
#undef public_6cf6f3d
#undef public_6cf6f41
#undef public_6cf6f66
#undef public_6cf6f83
#undef public_6cf6fa2
#undef public_6cf6fb6
