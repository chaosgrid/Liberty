#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);

#define public_6d36b06 _public_6d36b06
#define public_6d36b16 _public_6d36b16
#define public_6d36b32 _public_6d36b32
#define public_6d36b4c _public_6d36b4c
#define public_6d36b51 _public_6d36b51
#define public_6d36b7c _public_6d36b7c
#define public_6d36bb1 _public_6d36bb1
#define public_6d36bd0 _public_6d36bd0
#define public_6d36c05 _public_6d36c05
#define public_6d36c1d _public_6d36c1d
#define public_6d36c2d _public_6d36c2d
#define public_6d36c49 _public_6d36c49
#define public_6d36c63 _public_6d36c63
#define public_6d36c68 _public_6d36c68
#define public_6d36c92 _public_6d36c92
#define public_6d36ca5 _public_6d36ca5
#define public_6d36cad _public_6d36cad
#define public_6d36cc4 _public_6d36cc4
#define public_6d36cc6 _public_6d36cc6
#define public_6d36cd7 _public_6d36cd7

PROC_DECLARE(0x6d36ab0, internal_6d36ab0, public_6d36ab0);
extern "C" NAKED register_t __cdecl internal_6d36ab0()
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
        je public_6d36cad
        mov ebx, dword ptr ds : [eax+8]
        xor edi, edi
        mov di, word ptr ds : [ecx]
        cmp di, 0xFF
        ja public_6d36b16
        push edi
        lea ecx, ds:[ebx+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d36b4c
        public_6d36b06 : nop
        push edi
        mov ecx, ebx
        call public_6d3eb00
        test al, al
        jne public_6d36b4c
        xor eax, eax
        jmp public_6d36b51
        public_6d36b16 : nop
        lea ecx, ds:[ebx+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d36b32
        push edi
        mov ecx, ebx
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d36b4c
        public_6d36b32 : nop
        xor eax, eax
        mov ax, word ptr ds : [ebx+0x28]
        test ax, ax
        je public_6d36b06
        push eax
        push edi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d36b06
        public_6d36b4c : nop
        mov eax, 1
        public_6d36b51 : nop
        movzx edx, byte ptr ds : [ebx+4]
        cmp edx, eax
        je public_6d36cad
        mov ebx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        add ebx, 2
        mov eax, ebx
        sub eax, ecx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], ebx
        jne public_6d36bb1
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d36b7c : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov edi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, edi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d36cc4
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d36cc6
        public_6d36bb1 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d36ca5
        cmp eax, 1
        mov dword ptr ss : [esp+0x1C], 1
        jbe public_6d36b7c
        lea esp, ss:[esp]
        public_6d36bd0 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], edx
        mov ecx, dword ptr ds : [esi+0x10]
        cmp dword ptr ds : [esi+0xC], ecx
        je public_6d36c92
        mov bx, word ptr ds : [ecx]
        cmp bx, 0xFF
        mov edi, dword ptr ds : [eax+8]
        ja public_6d36c2d
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d36c05
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d36c05 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [edi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d36c63
        public_6d36c1d : nop
        push ebx
        mov ecx, edi
        call public_6d3eb00
        test al, al
        jne public_6d36c63
        xor eax, eax
        jmp public_6d36c68
        public_6d36c2d : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d36c49
        push ebx
        mov ecx, edi
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d36c63
        public_6d36c49 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d36c1d
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d36c1d
        public_6d36c63 : nop
        mov eax, 1
        public_6d36c68 : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        je public_6d36c92
        mov edi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        add edi, 2
        mov dword ptr ds : [esi+0x10], edi
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jb public_6d36bd0
        jmp public_6d36b7c
        public_6d36c92 : nop
        mov edx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], edx
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d36ca5 : nop
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_6d36b7c
        public_6d36cad : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d36b7c
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d36cc4 : nop
        mov eax, edx
        public_6d36cc6 : nop
        test eax, eax
        je public_6d36cd7
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_6d36cd7 : nop
        mov eax, dword ptr ss : [ebp+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d36ab0)
    }
}

#undef public_6d36b06
#undef public_6d36b16
#undef public_6d36b32
#undef public_6d36b4c
#undef public_6d36b51
#undef public_6d36b7c
#undef public_6d36bb1
#undef public_6d36bd0
#undef public_6d36c05
#undef public_6d36c1d
#undef public_6d36c2d
#undef public_6d36c49
#undef public_6d36c63
#undef public_6d36c68
#undef public_6d36c92
#undef public_6d36ca5
#undef public_6d36cad
#undef public_6d36cc4
#undef public_6d36cc6
#undef public_6d36cd7
