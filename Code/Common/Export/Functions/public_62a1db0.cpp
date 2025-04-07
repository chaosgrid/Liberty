#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_626ba00);
CLANG_FORWARD_PROC_SYMBOL(public_62a1db0);
CLANG_FORWARD_PROC_SYMBOL(public_62a2000);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_62a1dd0 _public_62a1dd0
#define public_62a1de5 _public_62a1de5
#define public_62a1de8 _public_62a1de8
#define public_62a1dec _public_62a1dec
#define public_62a1e4d _public_62a1e4d
#define public_62a1e65 _public_62a1e65
#define public_62a1e6f _public_62a1e6f
#define public_62a1e73 _public_62a1e73
#define public_62a1e81 _public_62a1e81
#define public_62a1ebf _public_62a1ebf
#define public_62a1ece _public_62a1ece
#define public_62a1eef _public_62a1eef
#define public_62a1f10 _public_62a1f10
#define public_62a1f1e _public_62a1f1e
#define public_62a1f3d _public_62a1f3d
#define public_62a1f49 _public_62a1f49
#define public_62a1f65 _public_62a1f65
#define public_62a1f80 _public_62a1f80
#define public_62a1f89 _public_62a1f89
#define public_62a1fac _public_62a1fac

PROC_DECLARE(0x62a1db0, internal_62a1db0, public_62a1db0);
extern "C" NAKED register_t __cdecl internal_62a1db0()
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
        je public_62a1dec
        lea esp, ss:[esp]
        public_62a1dd0 : nop
        mov ax, word ptr ds : [ebx]
        cmp ax, word ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_62a1de5
        mov ebp, dword ptr ss : [ebp]
        jmp public_62a1de8
        public_62a1de5 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_62a1de8 : nop
        cmp ebp, edx
        jne public_62a1dd0
        public_62a1dec : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_62a1f65
        push 0
        push esi
        mov ecx, edi
        call public_626b3a0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_62bee40
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_62a1e4d
        cmp ebp, dword ptr ds : [edi+8]
        jne public_62a1e4d
        mov ax, word ptr ds : [ebx]
        cmp ax, word ptr ds : [esi+0xC]
        jb public_62a1e4d
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62a1e73
        mov dword ptr ds : [eax+8], ebx
        jmp public_62a1e73
        public_62a1e4d : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_62a1e65
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a1e6f
        public_62a1e65 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_62a1e6f
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_62a1e6f : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_62a1e73 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_62a1f49
        public_62a1e81 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_62a1f49
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_62a1eef
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_62a1ebf
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_62a1f3d
        public_62a1ebf : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_62a1ece
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_62a1ece : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_62a1f3d
        public_62a1eef : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_62a1f10
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_62a1f3d
        public_62a1f10 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_62a1f1e
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_62a1f1e : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_62a1f3d : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_62a1e81
        public_62a1f49 : nop
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
        public_62a1f65 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_62a1f80
        cmp esi, dword ptr ds : [ecx]
        je public_62a1f89
        lea ecx, ss:[esp+0x10]
        call public_626ba00
        mov edx, dword ptr ss : [esp+0x10]
        public_62a1f80 : nop
        mov ax, word ptr ds : [edx+0xC]
        cmp ax, word ptr ds : [ebx]
        jae public_62a1fac
        public_62a1f89 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_62a2000
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
        public_62a1fac : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62a1db0)
    }
}

#undef public_62a1dd0
#undef public_62a1de5
#undef public_62a1de8
#undef public_62a1dec
#undef public_62a1e4d
#undef public_62a1e65
#undef public_62a1e6f
#undef public_62a1e73
#undef public_62a1e81
#undef public_62a1ebf
#undef public_62a1ece
#undef public_62a1eef
#undef public_62a1f10
#undef public_62a1f1e
#undef public_62a1f3d
#undef public_62a1f49
#undef public_62a1f65
#undef public_62a1f80
#undef public_62a1f89
#undef public_62a1fac
