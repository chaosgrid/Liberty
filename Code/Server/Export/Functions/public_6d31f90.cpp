#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);

#define public_6d31ff1 _public_6d31ff1
#define public_6d32001 _public_6d32001
#define public_6d3201d _public_6d3201d
#define public_6d32037 _public_6d32037
#define public_6d3203c _public_6d3203c
#define public_6d32063 _public_6d32063
#define public_6d320a5 _public_6d320a5
#define public_6d320e6 _public_6d320e6
#define public_6d320fe _public_6d320fe
#define public_6d3210e _public_6d3210e
#define public_6d3212a _public_6d3212a
#define public_6d32144 _public_6d32144
#define public_6d32149 _public_6d32149
#define public_6d3215e _public_6d3215e
#define public_6d32160 _public_6d32160
#define public_6d3216d _public_6d3216d
#define public_6d3217f _public_6d3217f

PROC_DECLARE(0x6d31f90, internal_6d31f90, public_6d31f90);
extern "C" NAKED register_t __cdecl internal_6d31f90()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+0x10]
        mov ebp, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x1C], 0
        je public_6d32063
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [edi+0x18], ecx
        mov ecx, dword ptr ds : [edi+0x10]
        cmp edx, ecx
        je public_6d32063
        mov ebx, dword ptr ds : [eax+0xC]
        xor esi, esi
        mov si, word ptr ds : [ecx]
        cmp si, 0xFF
        ja public_6d32001
        push esi
        lea ecx, ds:[ebx+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d32037
        public_6d31ff1 : nop
        push esi
        mov ecx, ebx
        call public_6d3ea70
        test al, al
        jne public_6d32037
        xor eax, eax
        jmp public_6d3203c
        public_6d32001 : nop
        lea ecx, ds:[ebx+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d3201d
        push esi
        mov ecx, ebx
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d32037
        public_6d3201d : nop
        xor eax, eax
        mov ax, word ptr ds : [ebx+0x28]
        test ax, ax
        je public_6d31ff1
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d31ff1
        public_6d32037 : nop
        mov eax, 1
        public_6d3203c : nop
        movzx edx, byte ptr ds : [ebx+4]
        cmp edx, eax
        je public_6d32063
        mov esi, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        add esi, 2
        mov eax, esi
        sub eax, edx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [edi+0x10], esi
        jne public_6d320a5
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d32063 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, dword ptr ss : [ebp+0xC]
        jb public_6d3217f
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov ebx, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, ebx
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3215e
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d32160
        public_6d320a5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jae public_6d32063
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x18], edx
        mov ecx, dword ptr ds : [edi+0x10]
        cmp dword ptr ds : [edi+0xC], ecx
        je public_6d32063
        mov bx, word ptr ds : [ecx]
        cmp bx, 0xFF
        mov esi, dword ptr ds : [eax+0xC]
        ja public_6d3210e
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d320e6
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d320e6 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d32144
        public_6d320fe : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d32144
        xor eax, eax
        jmp public_6d32149
        public_6d3210e : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d3212a
        push ebx
        mov ecx, esi
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d32144
        public_6d3212a : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d320fe
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d320fe
        public_6d32144 : nop
        mov eax, 1
        public_6d32149 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d32063
        add dword ptr ds : [edi+0x10], 2
        jmp public_6d320a5
        public_6d3215e : nop
        mov eax, edx
        public_6d32160 : nop
        test eax, eax
        je public_6d3216d
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], esi
        public_6d3216d : nop
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d3217f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x10], ecx
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d31f90)
    }
}

#undef public_6d31ff1
#undef public_6d32001
#undef public_6d3201d
#undef public_6d32037
#undef public_6d3203c
#undef public_6d32063
#undef public_6d320a5
#undef public_6d320e6
#undef public_6d320fe
#undef public_6d3210e
#undef public_6d3212a
#undef public_6d32144
#undef public_6d32149
#undef public_6d3215e
#undef public_6d32160
#undef public_6d3216d
#undef public_6d3217f
