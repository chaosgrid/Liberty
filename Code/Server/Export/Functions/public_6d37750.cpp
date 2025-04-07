#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);

#define public_6d377ca _public_6d377ca
#define public_6d377e2 _public_6d377e2
#define public_6d377f1 _public_6d377f1
#define public_6d37834 _public_6d37834
#define public_6d37844 _public_6d37844
#define public_6d37860 _public_6d37860
#define public_6d3787c _public_6d3787c
#define public_6d37880 _public_6d37880
#define public_6d37885 _public_6d37885
#define public_6d37895 _public_6d37895
#define public_6d378a2 _public_6d378a2
#define public_6d378b5 _public_6d378b5
#define public_6d378d2 _public_6d378d2
#define public_6d378de _public_6d378de
#define public_6d378ea _public_6d378ea

PROC_DECLARE(0x6d37750, internal_6d37750, public_6d37750);
extern "C" NAKED register_t __cdecl internal_6d37750()
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
        je public_6d37895
        xor eax, eax
        mov ax, word ptr ds : [ebx]
        cmp ax, cx
        je public_6d37895
        mov ecx, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [ecx+8]
        push eax
        call public_6d3e6f0
        test al, al
        je public_6d37895
        add ebx, 2
        mov eax, ebx
        sub eax, esi
        sar eax, 1
        neg eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_6d377f1
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x1C]
        je public_6d377ca
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
        public_6d377ca : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d377e2
        cmp dword ptr ds : [eax+8], ebx
        jne public_6d377e2
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d377e2 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d377f1 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jae public_6d37895
        xor esi, esi
        mov si, word ptr ds : [ebx]
        test si, si
        je public_6d37895
        cmp si, 0xFF
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx+8]
        ja public_6d37844
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d3787c
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d37834 : nop
        push esi
        mov ecx, edi
        call public_6d3eb00
        test al, al
        jne public_6d37880
        xor eax, eax
        jmp public_6d37885
        public_6d37844 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d37860
        push esi
        mov ecx, edi
        call public_6d3ebf0
        test al, al
        jne public_6d3787c
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d37860 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d37834
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d37834
        jmp public_6d37880
        public_6d3787c : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d37880 : nop
        mov eax, 1
        public_6d37885 : nop
        movzx edx, byte ptr ds : [edi+4]
        cmp edx, eax
        je public_6d37895
        add ebx, 2
        jmp public_6d377f1
        public_6d37895 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp dword ptr ss : [ebp+0xC], eax
        ja public_6d378ea
        mov esi, dword ptr ss : [esp+0x1C]
        public_6d378a2 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d378d2
        mov edx, dword ptr ds : [ecx]
        push ebx
        push esi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d378b5 : nop
        jne public_6d378de
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp eax, ecx
        je public_6d378ea
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        lea ebx, ds:[ebx+ecx*2]
        jmp public_6d378a2
        public_6d378d2 : nop
        mov al, byte ptr ds : [esi+0x1C]
        test al, al
        je public_6d378de
        cmp dword ptr ds : [esi+8], ebx
        jmp public_6d378b5
        public_6d378de : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d378ea : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d37750)
    }
}

#undef public_6d377ca
#undef public_6d377e2
#undef public_6d377f1
#undef public_6d37834
#undef public_6d37844
#undef public_6d37860
#undef public_6d3787c
#undef public_6d37880
#undef public_6d37885
#undef public_6d37895
#undef public_6d378a2
#undef public_6d378b5
#undef public_6d378d2
#undef public_6d378de
#undef public_6d378ea
