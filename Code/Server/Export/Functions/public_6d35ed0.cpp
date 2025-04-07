#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);

#define public_6d35f26 _public_6d35f26
#define public_6d35f36 _public_6d35f36
#define public_6d35f52 _public_6d35f52
#define public_6d35f6c _public_6d35f6c
#define public_6d35f71 _public_6d35f71
#define public_6d35f9c _public_6d35f9c
#define public_6d35fd1 _public_6d35fd1
#define public_6d35ff0 _public_6d35ff0
#define public_6d36025 _public_6d36025
#define public_6d3603d _public_6d3603d
#define public_6d3604d _public_6d3604d
#define public_6d36069 _public_6d36069
#define public_6d36083 _public_6d36083
#define public_6d36088 _public_6d36088
#define public_6d360b2 _public_6d360b2
#define public_6d360c5 _public_6d360c5
#define public_6d360cd _public_6d360cd
#define public_6d360e4 _public_6d360e4
#define public_6d360e6 _public_6d360e6
#define public_6d360f7 _public_6d360f7

PROC_DECLARE(0x6d35ed0, internal_6d35ed0, public_6d35ed0);
extern "C" NAKED register_t __cdecl internal_6d35ed0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0xC]
        mov ebp, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, dword ptr ds : [esi+0x10]
        cmp edx, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x1C], 0
        je public_6d360cd
        mov ebx, dword ptr ds : [eax+8]
        xor edi, edi
        mov di, word ptr ds : [ecx]
        cmp di, 0xFF
        ja public_6d35f36
        push edi
        lea ecx, ds:[ebx+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d35f6c
        public_6d35f26 : nop
        push edi
        mov ecx, ebx
        call public_6d3ea70
        test al, al
        jne public_6d35f6c
        xor eax, eax
        jmp public_6d35f71
        public_6d35f36 : nop
        lea ecx, ds:[ebx+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d35f52
        push edi
        mov ecx, ebx
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d35f6c
        public_6d35f52 : nop
        xor eax, eax
        mov ax, word ptr ds : [ebx+0x28]
        test ax, ax
        je public_6d35f26
        push eax
        push edi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d35f26
        public_6d35f6c : nop
        mov eax, 1
        public_6d35f71 : nop
        movzx edx, byte ptr ds : [ebx+4]
        cmp edx, eax
        je public_6d360cd
        mov ebx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        add ebx, 2
        mov eax, ebx
        sub eax, ecx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], ebx
        jne public_6d35fd1
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d35f9c : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov edi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, edi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d360e4
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d360e6
        public_6d35fd1 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d360c5
        cmp eax, 1
        mov dword ptr ss : [esp+0x1C], 1
        jbe public_6d35f9c
        lea esp, ss:[esp]
        public_6d35ff0 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], edx
        mov ecx, dword ptr ds : [esi+0x10]
        cmp dword ptr ds : [esi+0xC], ecx
        je public_6d360b2
        mov bx, word ptr ds : [ecx]
        cmp bx, 0xFF
        mov edi, dword ptr ds : [eax+8]
        ja public_6d3604d
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d36025
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d36025 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [edi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d36083
        public_6d3603d : nop
        push ebx
        mov ecx, edi
        call public_6d3ea70
        test al, al
        jne public_6d36083
        xor eax, eax
        jmp public_6d36088
        public_6d3604d : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d36069
        push ebx
        mov ecx, edi
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d36083
        public_6d36069 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d3603d
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d3603d
        public_6d36083 : nop
        mov eax, 1
        public_6d36088 : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        je public_6d360b2
        mov edi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        add edi, 2
        mov dword ptr ds : [esi+0x10], edi
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jb public_6d35ff0
        jmp public_6d35f9c
        public_6d360b2 : nop
        mov edx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], edx
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d360c5 : nop
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_6d35f9c
        public_6d360cd : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d35f9c
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d360e4 : nop
        mov eax, edx
        public_6d360e6 : nop
        test eax, eax
        je public_6d360f7
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_6d360f7 : nop
        mov eax, dword ptr ss : [ebp+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d35ed0)
    }
}

#undef public_6d35f26
#undef public_6d35f36
#undef public_6d35f52
#undef public_6d35f6c
#undef public_6d35f71
#undef public_6d35f9c
#undef public_6d35fd1
#undef public_6d35ff0
#undef public_6d36025
#undef public_6d3603d
#undef public_6d3604d
#undef public_6d36069
#undef public_6d36083
#undef public_6d36088
#undef public_6d360b2
#undef public_6d360c5
#undef public_6d360cd
#undef public_6d360e4
#undef public_6d360e6
#undef public_6d360f7
