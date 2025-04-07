#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d32734 _public_6d32734
#define public_6d3274c _public_6d3274c
#define public_6d3275c _public_6d3275c
#define public_6d3279d _public_6d3279d
#define public_6d327b7 _public_6d327b7
#define public_6d327bc _public_6d327bc
#define public_6d327e6 _public_6d327e6
#define public_6d32849 _public_6d32849
#define public_6d3284b _public_6d3284b

PROC_DECLARE(0x6d326d0, internal_6d326d0, public_6d326d0);
extern "C" NAKED register_t __cdecl internal_6d326d0()
{
    __asm
    {
        sub esp, 0x10
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi+0x14]
        mov ebp, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx+0x10]
        sub ebp, 4
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0xC], ebp
        je public_6d327e6
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [edi+0x18], ecx
        mov ecx, dword ptr ds : [edi+0x10]
        cmp edx, ecx
        je public_6d327e6
        mov esi, dword ptr ds : [eax+0xC]
        push ebx
        mov bx, word ptr ds : [ecx]
        cmp bx, 0xFF
        ja public_6d3275c
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d32734
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d32734 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d327b7
        public_6d3274c : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d327b7
        xor eax, eax
        jmp public_6d327bc
        public_6d3275c : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d3279d
        mov ebp, dword ptr ds : [esi+0x34]
/*FIXUP push offset _public_6d299e0 @0x6d3276b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x30], ebx
        call public_6d317a0
        push eax
        mov eax, dword ptr ds : [esi+0x30]
        push ebp
        push eax
        call public_6d40890
        mov ebp, dword ptr ss : [esp+0x20]
        add esp, 0x10
        test al, al
        jne public_6d327b7
        public_6d3279d : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d3274c
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d3274c
        public_6d327b7 : nop
        mov eax, 1
        public_6d327bc : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        pop ebx
        je public_6d327e6
        mov ecx, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        add ecx, 2
        mov dword ptr ds : [edi+0x10], ecx
        inc dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x10
        ret 4
        public_6d327e6 : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add esi, 0xFFFFFFF8
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], esi
        jne public_6d32849
        mov edx, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x1000], ecx
        add ecx, 0x10
        mov dword ptr ds : [eax+0x1004], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x1008], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0x100C], ecx
        mov eax, edx
        jmp public_6d3284b
        public_6d32849 : nop
        mov eax, ecx
        public_6d3284b : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x10], ecx
        pop edi
        pop esi
        mov dword ptr ss : [esp+0x10], edx
        xor al, al
        pop ebp
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d326d0)
    }
}

#undef public_6d32734
#undef public_6d3274c
#undef public_6d3275c
#undef public_6d3279d
#undef public_6d327b7
#undef public_6d327bc
#undef public_6d327e6
#undef public_6d32849
#undef public_6d3284b
