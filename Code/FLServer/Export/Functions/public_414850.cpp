#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414850);
CLANG_FORWARD_PROC_SYMBOL(public_414f10);
CLANG_FORWARD_PROC_SYMBOL(public_414f30);
CLANG_FORWARD_PROC_SYMBOL(public_415200);
CLANG_FORWARD_PROC_SYMBOL(public_415250);
CLANG_FORWARD_PROC_SYMBOL(public_4152b0);
CLANG_FORWARD_PROC_SYMBOL(public_415350);
CLANG_FORWARD_PROC_SYMBOL(public_415450);
CLANG_FORWARD_PROC_SYMBOL(public_4155c0);
CLANG_FORWARD_PROC_SYMBOL(public_415610);

#define public_414868 _public_414868
#define public_414879 _public_414879
#define public_414895 _public_414895
#define public_414898 _public_414898
#define public_41489d _public_41489d
#define public_414904 _public_414904
#define public_41491d _public_41491d
#define public_414927 _public_414927
#define public_41492b _public_41492b
#define public_414940 _public_414940
#define public_41497b _public_41497b
#define public_41498a _public_41498a
#define public_4149ab _public_4149ab
#define public_4149cc _public_4149cc
#define public_4149da _public_4149da
#define public_4149f9 _public_4149f9
#define public_414a05 _public_414a05
#define public_414a21 _public_414a21
#define public_414a3a _public_414a3a
#define public_414a43 _public_414a43
#define public_414a5c _public_414a5c
#define public_414a77 _public_414a77

PROC_DECLARE(0x414850, internal_414850, public_414850);
extern "C" NAKED register_t __cdecl internal_414850()
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
        mov ebp, dword ptr ds : [edi+4]
        mov esi, dword ptr ss : [ebp+4]
        cmp esi, dword ptr ds : [edi+8]
        mov al, 1
        je public_41489d
        public_414868 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ebp, esi
        jne public_414879
        mov eax, offset public_41c3f4
        public_414879 : nop
        push ecx
        push eax
        mov eax, dword ptr ds : [ebx+8]
        push eax
        push 0
        mov ecx, ebx
        call public_415610
        test eax, eax
        setl al
        test al, al
        je public_414895
        mov esi, dword ptr ds : [esi]
        jmp public_414898
        public_414895 : nop
        mov esi, dword ptr ds : [esi+8]
        public_414898 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_414868
        public_41489d : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_414a21
        push 0
        push ebp
        mov ecx, edi
        call public_4152b0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_415450
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp ebp, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_414904
        cmp esi, dword ptr ds : [edi+8]
        jne public_414904
        lea eax, ss:[ebp+0xC]
        push eax
        mov ecx, ebx
        call public_4155c0
        test eax, eax
        jl public_414904
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [eax+8]
        jne public_41492b
        mov dword ptr ds : [eax+8], ebx
        jmp public_41492b
        public_414904 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp ebp, eax
        jne public_41491d
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_414927
        public_41491d : nop
        cmp ebp, dword ptr ds : [eax]
        jne public_414927
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_414927 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_41492b : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_414a05
        lea esp, ss:[esp]
        public_414940 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_414a05
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_4149ab
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_41497b
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_4149f9
        public_41497b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_41498a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_415200
        public_41498a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_415250
        jmp public_4149f9
        public_4149ab : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_4149cc
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_4149f9
        public_4149cc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_4149da
        mov esi, eax
        push esi
        mov ecx, edi
        call public_415250
        public_4149da : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_415200
        public_4149f9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_414940
        public_414a05 : nop
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
        public_414a21 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], ebp
        je public_414a43
        mov ecx, dword ptr ds : [edi+4]
        cmp ebp, dword ptr ds : [ecx]
        jne public_414a3a
        push ebx
        push ebp
        push esi
        lea edx, ss:[esp+0x28]
        push edx
        jmp public_414a5c
        public_414a3a : nop
        lea ecx, ss:[esp+0x10]
        call public_415350
        public_414a43 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ds:[edx+0xC]
        push ebx
        call public_4155c0
        test eax, eax
        jge public_414a77
        push ebx
        push ebp
        push esi
        lea eax, ss:[esp+0x28]
        push eax
        public_414a5c : nop
        mov ecx, edi
        call public_414f30
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_414a77 : nop
        mov esi, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x24], 0
        call public_414f10
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x414850)
    }
}

#undef public_414868
#undef public_414879
#undef public_414895
#undef public_414898
#undef public_41489d
#undef public_414904
#undef public_41491d
#undef public_414927
#undef public_41492b
#undef public_414940
#undef public_41497b
#undef public_41498a
#undef public_4149ab
#undef public_4149cc
#undef public_4149da
#undef public_4149f9
#undef public_414a05
#undef public_414a21
#undef public_414a3a
#undef public_414a43
#undef public_414a5c
#undef public_414a77
