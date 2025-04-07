#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);

#define public_6d324e6 _public_6d324e6
#define public_6d324f6 _public_6d324f6
#define public_6d32512 _public_6d32512
#define public_6d3252c _public_6d3252c
#define public_6d32531 _public_6d32531
#define public_6d3255c _public_6d3255c
#define public_6d32591 _public_6d32591
#define public_6d325b0 _public_6d325b0
#define public_6d325e5 _public_6d325e5
#define public_6d325fd _public_6d325fd
#define public_6d3260d _public_6d3260d
#define public_6d32629 _public_6d32629
#define public_6d32643 _public_6d32643
#define public_6d32648 _public_6d32648
#define public_6d32672 _public_6d32672
#define public_6d32685 _public_6d32685
#define public_6d3268d _public_6d3268d
#define public_6d326a4 _public_6d326a4
#define public_6d326a6 _public_6d326a6
#define public_6d326b7 _public_6d326b7

PROC_DECLARE(0x6d32490, internal_6d32490, public_6d32490);
extern "C" NAKED register_t __cdecl internal_6d32490()
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
        je public_6d3268d
        mov ebx, dword ptr ds : [eax+0xC]
        xor edi, edi
        mov di, word ptr ds : [ecx]
        cmp di, 0xFF
        ja public_6d324f6
        push edi
        lea ecx, ds:[ebx+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d3252c
        public_6d324e6 : nop
        push edi
        mov ecx, ebx
        call public_6d3ea70
        test al, al
        jne public_6d3252c
        xor eax, eax
        jmp public_6d32531
        public_6d324f6 : nop
        lea ecx, ds:[ebx+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d32512
        push edi
        mov ecx, ebx
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d3252c
        public_6d32512 : nop
        xor eax, eax
        mov ax, word ptr ds : [ebx+0x28]
        test ax, ax
        je public_6d324e6
        push eax
        push edi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d324e6
        public_6d3252c : nop
        mov eax, 1
        public_6d32531 : nop
        movzx edx, byte ptr ds : [ebx+4]
        cmp edx, eax
        je public_6d3268d
        mov ebx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        add ebx, 2
        mov eax, ebx
        sub eax, ecx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], ebx
        jne public_6d32591
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d3255c : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov edi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, edi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d326a4
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d326a6
        public_6d32591 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d32685
        cmp eax, 1
        mov dword ptr ss : [esp+0x1C], 1
        jbe public_6d3255c
        lea esp, ss:[esp]
        public_6d325b0 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], edx
        mov ecx, dword ptr ds : [esi+0x10]
        cmp dword ptr ds : [esi+0xC], ecx
        je public_6d32672
        mov bx, word ptr ds : [ecx]
        cmp bx, 0xFF
        mov edi, dword ptr ds : [eax+0xC]
        ja public_6d3260d
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d325e5
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d325e5 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [edi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d32643
        public_6d325fd : nop
        push ebx
        mov ecx, edi
        call public_6d3ea70
        test al, al
        jne public_6d32643
        xor eax, eax
        jmp public_6d32648
        public_6d3260d : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d32629
        push ebx
        mov ecx, edi
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d32643
        public_6d32629 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d325fd
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d325fd
        public_6d32643 : nop
        mov eax, 1
        public_6d32648 : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        je public_6d32672
        mov edi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        add edi, 2
        mov dword ptr ds : [esi+0x10], edi
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jb public_6d325b0
        jmp public_6d3255c
        public_6d32672 : nop
        mov edx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], edx
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d32685 : nop
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_6d3255c
        public_6d3268d : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d3255c
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d326a4 : nop
        mov eax, edx
        public_6d326a6 : nop
        test eax, eax
        je public_6d326b7
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_6d326b7 : nop
        mov eax, dword ptr ss : [ebp+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d32490)
    }
}

#undef public_6d324e6
#undef public_6d324f6
#undef public_6d32512
#undef public_6d3252c
#undef public_6d32531
#undef public_6d3255c
#undef public_6d32591
#undef public_6d325b0
#undef public_6d325e5
#undef public_6d325fd
#undef public_6d3260d
#undef public_6d32629
#undef public_6d32643
#undef public_6d32648
#undef public_6d32672
#undef public_6d32685
#undef public_6d3268d
#undef public_6d326a4
#undef public_6d326a6
#undef public_6d326b7
