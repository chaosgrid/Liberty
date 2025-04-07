#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d05690);
CLANG_FORWARD_PROC_SYMBOL(public_6d060f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06680);
CLANG_FORWARD_PROC_SYMBOL(public_6d066a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06740);
CLANG_FORWARD_PROC_SYMBOL(public_6d16080);

#define public_6d056b0 _public_6d056b0
#define public_6d056c3 _public_6d056c3
#define public_6d056c6 _public_6d056c6
#define public_6d056ca _public_6d056ca
#define public_6d05729 _public_6d05729
#define public_6d05741 _public_6d05741
#define public_6d0574b _public_6d0574b
#define public_6d0574f _public_6d0574f
#define public_6d05760 _public_6d05760
#define public_6d0579b _public_6d0579b
#define public_6d057aa _public_6d057aa
#define public_6d057cb _public_6d057cb
#define public_6d057ec _public_6d057ec
#define public_6d057fa _public_6d057fa
#define public_6d05819 _public_6d05819
#define public_6d05825 _public_6d05825
#define public_6d05841 _public_6d05841
#define public_6d0585c _public_6d0585c
#define public_6d05863 _public_6d05863
#define public_6d05886 _public_6d05886

PROC_DECLARE(0x6d05690, internal_6d05690, public_6d05690);
extern "C" NAKED register_t __cdecl internal_6d05690()
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
        je public_6d056ca
        lea esp, ss:[esp]
        public_6d056b0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6d056c3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6d056c6
        public_6d056c3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6d056c6 : nop
        cmp ebp, edx
        jne public_6d056b0
        public_6d056ca : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6d05841
        push 0
        push esi
        mov ecx, edi
        call public_6d06680
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6d06740
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6d05729
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6d05729
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6d05729
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d0574f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d0574f
        public_6d05729 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6d05741
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d0574b
        public_6d05741 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6d0574b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6d0574b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d0574f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6d05825
        lea ecx, ds:[ecx]
        public_6d05760 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x34]
        test cl, cl
        jne public_6d05825
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d057cb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6d0579b
        mov byte ptr ds : [eax+0x34], 1
        mov byte ptr ds : [ecx+0x34], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6d05819
        public_6d0579b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d057aa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6d16080
        public_6d057aa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x34], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6cfdef0
        jmp public_6d05819
        public_6d057cb : nop
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_6d057ec
        mov byte ptr ds : [eax+0x34], 1
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x34], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6d05819
        public_6d057ec : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6d057fa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6cfdef0
        public_6d057fa : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x34], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6d16080
        public_6d05819 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6d05760
        public_6d05825 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x34], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6d05841 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6d0585c
        cmp esi, dword ptr ds : [ecx]
        je public_6d05863
        lea ecx, ss:[esp+0x10]
        call public_6d066a0
        mov edx, dword ptr ss : [esp+0x10]
        public_6d0585c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6d05886
        public_6d05863 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6d060f0
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
        public_6d05886 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d05690)
    }
}

#undef public_6d056b0
#undef public_6d056c3
#undef public_6d056c6
#undef public_6d056ca
#undef public_6d05729
#undef public_6d05741
#undef public_6d0574b
#undef public_6d0574f
#undef public_6d05760
#undef public_6d0579b
#undef public_6d057aa
#undef public_6d057cb
#undef public_6d057ec
#undef public_6d057fa
#undef public_6d05819
#undef public_6d05825
#undef public_6d05841
#undef public_6d0585c
#undef public_6d05863
#undef public_6d05886
