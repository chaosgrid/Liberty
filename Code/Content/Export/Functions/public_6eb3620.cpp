#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3620);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3870);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3d40);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6eb3640 _public_6eb3640
#define public_6eb3653 _public_6eb3653
#define public_6eb3656 _public_6eb3656
#define public_6eb365a _public_6eb365a
#define public_6eb36b9 _public_6eb36b9
#define public_6eb36d1 _public_6eb36d1
#define public_6eb36db _public_6eb36db
#define public_6eb36df _public_6eb36df
#define public_6eb36f0 _public_6eb36f0
#define public_6eb372b _public_6eb372b
#define public_6eb373a _public_6eb373a
#define public_6eb375b _public_6eb375b
#define public_6eb377c _public_6eb377c
#define public_6eb378a _public_6eb378a
#define public_6eb37a9 _public_6eb37a9
#define public_6eb37b5 _public_6eb37b5
#define public_6eb37d1 _public_6eb37d1
#define public_6eb37ec _public_6eb37ec
#define public_6eb37f3 _public_6eb37f3
#define public_6eb3816 _public_6eb3816

PROC_DECLARE(0x6eb3620, internal_6eb3620, public_6eb3620);
extern "C" NAKED register_t __cdecl internal_6eb3620()
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
        je public_6eb365a
        lea esp, ss:[esp]
        public_6eb3640 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6eb3653
        mov ebp, dword ptr ss : [ebp]
        jmp public_6eb3656
        public_6eb3653 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6eb3656 : nop
        cmp ebp, edx
        jne public_6eb3640
        public_6eb365a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6eb37d1
        push 0
        push esi
        mov ecx, edi
        call public_6eb3ac0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6eb3d40
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6eb36b9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6eb36b9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6eb36b9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eb36df
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eb36df
        public_6eb36b9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6eb36d1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb36db
        public_6eb36d1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eb36db
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6eb36db : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6eb36df : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6eb37b5
        lea ecx, ds:[ecx]
        public_6eb36f0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_6eb37b5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6eb375b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6eb372b
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6eb37a9
        public_6eb372b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6eb373a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6eb373a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6eb37a9
        public_6eb375b : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6eb377c
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6eb37a9
        public_6eb377c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6eb378a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6eb378a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6eb37a9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6eb36f0
        public_6eb37b5 : nop
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
        public_6eb37d1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6eb37ec
        cmp esi, dword ptr ds : [ecx]
        je public_6eb37f3
        lea ecx, ss:[esp+0x10]
        call public_6f4e3f0
        mov edx, dword ptr ss : [esp+0x10]
        public_6eb37ec : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6eb3816
        public_6eb37f3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6eb3870
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
        public_6eb3816 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6eb3620)
    }
}

#undef public_6eb3640
#undef public_6eb3653
#undef public_6eb3656
#undef public_6eb365a
#undef public_6eb36b9
#undef public_6eb36d1
#undef public_6eb36db
#undef public_6eb36df
#undef public_6eb36f0
#undef public_6eb372b
#undef public_6eb373a
#undef public_6eb375b
#undef public_6eb377c
#undef public_6eb378a
#undef public_6eb37a9
#undef public_6eb37b5
#undef public_6eb37d1
#undef public_6eb37ec
#undef public_6eb37f3
#undef public_6eb3816
