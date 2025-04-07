#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);

#define public_6d328ec _public_6d328ec
#define public_6d32904 _public_6d32904
#define public_6d32913 _public_6d32913
#define public_6d32957 _public_6d32957
#define public_6d3296f _public_6d3296f
#define public_6d3297f _public_6d3297f
#define public_6d3299b _public_6d3299b
#define public_6d329b5 _public_6d329b5
#define public_6d329ba _public_6d329ba
#define public_6d329ca _public_6d329ca
#define public_6d329ce _public_6d329ce
#define public_6d329d7 _public_6d329d7
#define public_6d329ea _public_6d329ea
#define public_6d32a05 _public_6d32a05
#define public_6d32a11 _public_6d32a11
#define public_6d32a1d _public_6d32a1d

PROC_DECLARE(0x6d32870, internal_6d32870, public_6d32870);
extern "C" NAKED register_t __cdecl internal_6d32870()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x10]
        xor eax, eax
        cmp ecx, eax
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], ebp
        mov esi, edi
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6d329ce
        cmp dword ptr ds : [ebx+0xC], edi
        je public_6d329ce
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0xC]
        xor eax, eax
        mov ax, word ptr ds : [edi]
        push eax
        call public_6d3e6f0
        test al, al
        je public_6d329ca
        add edi, 2
        mov eax, edi
        sub eax, esi
        sar eax, 1
        neg eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_6d32913
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov eax, ebx
        je public_6d328ec
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 8
        ret 8
        public_6d328ec : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d32904
        cmp dword ptr ds : [eax+8], edi
        jne public_6d32904
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d32904 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d32913 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jae public_6d329ca
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp dword ptr ds : [ecx+0xC], edi
        je public_6d329ca
        mov bx, word ptr ds : [edi]
        cmp bx, 0xFF
        mov edx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edx+0xC]
        ja public_6d3297f
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d32957
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d32957 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d329b5
        public_6d3296f : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d329b5
        xor eax, eax
        jmp public_6d329ba
        public_6d3297f : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d3299b
        push ebx
        mov ecx, esi
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d329b5
        public_6d3299b : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d3296f
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d3296f
        public_6d329b5 : nop
        mov eax, 1
        public_6d329ba : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d329ca
        add edi, 2
        jmp public_6d32913
        public_6d329ca : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d329ce : nop
        mov edx, dword ptr ss : [esp+0x20]
        cmp dword ptr ss : [ebp+0xC], edx
        ja public_6d32a1d
        public_6d329d7 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d32a05
        mov eax, dword ptr ds : [ecx]
        push edi
        push ebx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d329ea : nop
        jne public_6d32a11
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [esp+0x20]
        cmp ecx, eax
        je public_6d32a1d
        mov edx, dword ptr ss : [esp+0x14]
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        lea edi, ds:[edi+edx*2]
        jmp public_6d329d7
        public_6d32a05 : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d32a11
        cmp dword ptr ds : [ebx+8], edi
        jmp public_6d329ea
        public_6d32a11 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d32a1d : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d32870)
    }
}

#undef public_6d328ec
#undef public_6d32904
#undef public_6d32913
#undef public_6d32957
#undef public_6d3296f
#undef public_6d3297f
#undef public_6d3299b
#undef public_6d329b5
#undef public_6d329ba
#undef public_6d329ca
#undef public_6d329ce
#undef public_6d329d7
#undef public_6d329ea
#undef public_6d32a05
#undef public_6d32a11
#undef public_6d32a1d
