#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d05de0);
CLANG_FORWARD_PROC_SYMBOL(public_6d063a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06700);
CLANG_FORWARD_PROC_SYMBOL(public_6d068e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16080);
CLANG_FORWARD_PROC_SYMBOL(public_6d3f170);

#define public_6d05e00 _public_6d05e00
#define public_6d05e13 _public_6d05e13
#define public_6d05e16 _public_6d05e16
#define public_6d05e1a _public_6d05e1a
#define public_6d05e79 _public_6d05e79
#define public_6d05e91 _public_6d05e91
#define public_6d05e9b _public_6d05e9b
#define public_6d05e9f _public_6d05e9f
#define public_6d05eb0 _public_6d05eb0
#define public_6d05eeb _public_6d05eeb
#define public_6d05efa _public_6d05efa
#define public_6d05f1b _public_6d05f1b
#define public_6d05f3c _public_6d05f3c
#define public_6d05f4a _public_6d05f4a
#define public_6d05f69 _public_6d05f69
#define public_6d05f75 _public_6d05f75
#define public_6d05f91 _public_6d05f91
#define public_6d05fac _public_6d05fac
#define public_6d05fb3 _public_6d05fb3
#define public_6d05fd6 _public_6d05fd6

PROC_DECLARE(0x6d05de0, internal_6d05de0, public_6d05de0);
extern "C" NAKED register_t __cdecl internal_6d05de0()
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
        je public_6d05e1a
        lea esp, ss:[esp]
        public_6d05e00 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6d05e13
        mov ebp, dword ptr ss : [ebp]
        jmp public_6d05e16
        public_6d05e13 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6d05e16 : nop
        cmp ebp, edx
        jne public_6d05e00
        public_6d05e1a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6d05f91
        push 0
        push esi
        mov ecx, edi
        call public_6d06700
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6d068e0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6d05e79
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6d05e79
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6d05e79
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d05e9f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d05e9f
        public_6d05e79 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6d05e91
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d05e9b
        public_6d05e91 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6d05e9b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6d05e9b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d05e9f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6d05f75
        lea ecx, ds:[ecx]
        public_6d05eb0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x28]
        test cl, cl
        jne public_6d05f75
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d05f1b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6d05eeb
        mov byte ptr ds : [eax+0x28], 1
        mov byte ptr ds : [ecx+0x28], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6d05f69
        public_6d05eeb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d05efa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6d16080
        public_6d05efa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x28], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x28], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6cfdef0
        jmp public_6d05f69
        public_6d05f1b : nop
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6d05f3c
        mov byte ptr ds : [eax+0x28], 1
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x28], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6d05f69
        public_6d05f3c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6d05f4a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6cfdef0
        public_6d05f4a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x28], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6d16080
        public_6d05f69 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6d05eb0
        public_6d05f75 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x28], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6d05f91 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6d05fac
        cmp esi, dword ptr ds : [ecx]
        je public_6d05fb3
        lea ecx, ss:[esp+0x10]
        call public_6d3f170
        mov edx, dword ptr ss : [esp+0x10]
        public_6d05fac : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6d05fd6
        public_6d05fb3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6d063a0
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
        public_6d05fd6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d05de0)
    }
}

#undef public_6d05e00
#undef public_6d05e13
#undef public_6d05e16
#undef public_6d05e1a
#undef public_6d05e79
#undef public_6d05e91
#undef public_6d05e9b
#undef public_6d05e9f
#undef public_6d05eb0
#undef public_6d05eeb
#undef public_6d05efa
#undef public_6d05f1b
#undef public_6d05f3c
#undef public_6d05f4a
#undef public_6d05f69
#undef public_6d05f75
#undef public_6d05f91
#undef public_6d05fac
#undef public_6d05fb3
#undef public_6d05fd6
