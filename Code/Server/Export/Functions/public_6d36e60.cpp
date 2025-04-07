#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);

#define public_6d36eda _public_6d36eda
#define public_6d36ef2 _public_6d36ef2
#define public_6d36f01 _public_6d36f01
#define public_6d36f44 _public_6d36f44
#define public_6d36f54 _public_6d36f54
#define public_6d36f70 _public_6d36f70
#define public_6d36f8c _public_6d36f8c
#define public_6d36f90 _public_6d36f90
#define public_6d36f95 _public_6d36f95
#define public_6d36fa5 _public_6d36fa5
#define public_6d36fb2 _public_6d36fb2
#define public_6d36fc5 _public_6d36fc5
#define public_6d36fe2 _public_6d36fe2
#define public_6d36fee _public_6d36fee
#define public_6d36ffa _public_6d36ffa

PROC_DECLARE(0x6d36e60, internal_6d36e60, public_6d36e60);
extern "C" NAKED register_t __cdecl internal_6d36e60()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x10]
        xor ecx, ecx
        cmp eax, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov esi, ebx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x20], ecx
        je public_6d36fa5
        xor eax, eax
        mov ax, word ptr ds : [ebx]
        cmp ax, cx
        je public_6d36fa5
        mov ecx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ecx+8]
        push eax
        call public_6d3e580
        test al, al
        je public_6d36fa5
        add ebx, 2
        mov eax, ebx
        sub eax, esi
        sar eax, 1
        neg eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_6d36f01
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x1C]
        je public_6d36eda
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 8
        ret 8
        public_6d36eda : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d36ef2
        cmp dword ptr ds : [eax+8], ebx
        jne public_6d36ef2
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d36ef2 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d36f01 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jae public_6d36fa5
        xor esi, esi
        mov si, word ptr ds : [ebx]
        test si, si
        je public_6d36fa5
        cmp si, 0xFF
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx+8]
        ja public_6d36f54
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d36f8c
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d36f44 : nop
        push esi
        mov ecx, edi
        call public_6d3ea70
        test al, al
        jne public_6d36f90
        xor eax, eax
        jmp public_6d36f95
        public_6d36f54 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d36f70
        push esi
        mov ecx, edi
        call public_6d3eb90
        test al, al
        jne public_6d36f8c
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d36f70 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d36f44
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d36f44
        jmp public_6d36f90
        public_6d36f8c : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d36f90 : nop
        mov eax, 1
        public_6d36f95 : nop
        movzx edx, byte ptr ds : [edi+4]
        cmp edx, eax
        je public_6d36fa5
        add ebx, 2
        jmp public_6d36f01
        public_6d36fa5 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp dword ptr ss : [ebp+0xC], eax
        ja public_6d36ffa
        mov esi, dword ptr ss : [esp+0x1C]
        public_6d36fb2 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d36fe2
        mov edx, dword ptr ds : [ecx]
        push ebx
        push esi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d36fc5 : nop
        jne public_6d36fee
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        je public_6d36ffa
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        lea ebx, ds:[ebx+ecx*2]
        jmp public_6d36fb2
        public_6d36fe2 : nop
        mov al, byte ptr ds : [esi+0x1C]
        test al, al
        je public_6d36fee
        cmp dword ptr ds : [esi+8], ebx
        jmp public_6d36fc5
        public_6d36fee : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d36ffa : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d36e60)
    }
}

#undef public_6d36eda
#undef public_6d36ef2
#undef public_6d36f01
#undef public_6d36f44
#undef public_6d36f54
#undef public_6d36f70
#undef public_6d36f8c
#undef public_6d36f90
#undef public_6d36f95
#undef public_6d36fa5
#undef public_6d36fb2
#undef public_6d36fc5
#undef public_6d36fe2
#undef public_6d36fee
#undef public_6d36ffa
