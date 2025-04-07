#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d317a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d2d9f4 _public_6d2d9f4
#define public_6d2da04 _public_6d2da04
#define public_6d2da1c _public_6d2da1c
#define public_6d2da36 _public_6d2da36
#define public_6d2da3b _public_6d2da3b
#define public_6d2da48 _public_6d2da48
#define public_6d2da4d _public_6d2da4d
#define public_6d2da80 _public_6d2da80
#define public_6d2da98 _public_6d2da98
#define public_6d2daa8 _public_6d2daa8
#define public_6d2daed _public_6d2daed
#define public_6d2db07 _public_6d2db07
#define public_6d2db0c _public_6d2db0c
#define public_6d2db34 _public_6d2db34
#define public_6d2db36 _public_6d2db36
#define public_6d2db44 _public_6d2db44
#define public_6d2db54 _public_6d2db54

PROC_DECLARE(0x6d2d9c0, internal_6d2d9c0, public_6d2d9c0);
extern "C" NAKED register_t __cdecl internal_6d2d9c0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        xor esi, esi
        mov si, word ptr ds : [eax]
        test si, si
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        je public_6d2da48
        cmp si, 0xFF
        mov edi, dword ptr ss : [ebp+0xC]
        ja public_6d2da04
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d2da36
        public_6d2d9f4 : nop
        push esi
        mov ecx, edi
        call public_6d3ea70
        test al, al
        jne public_6d2da36
        xor eax, eax
        jmp public_6d2da3b
        public_6d2da04 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d2da1c
        push esi
        mov ecx, edi
        call public_6d3eb90
        test al, al
        jne public_6d2da36
        public_6d2da1c : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d2d9f4
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2d9f4
        public_6d2da36 : nop
        mov eax, 1
        public_6d2da3b : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        mov byte ptr ss : [esp+0xF], 1
        jne public_6d2da4d
        public_6d2da48 : nop
        mov byte ptr ss : [esp+0xF], 0
        public_6d2da4d : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [edi+4], eax
        je public_6d2db54
        mov esi, dword ptr ss : [ebp+0xC]
        push ebx
        mov bx, word ptr ds : [eax-2]
        cmp bx, 0xFF
        ja public_6d2daa8
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d2da80
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d2da80 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d2db07
        public_6d2da98 : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d2db07
        xor eax, eax
        jmp public_6d2db0c
        public_6d2daa8 : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d2daed
        mov edi, dword ptr ds : [esi+0x34]
        mov ebp, dword ptr ds : [esi+0x30]
/*FIXUP push offset _public_6d299e0 @0x6d2daba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x20], ebx
        call public_6d317a0
        push eax
        push edi
        push ebp
        call public_6d40890
        mov ebp, dword ptr ss : [esp+0x28]
        mov edi, dword ptr ss : [esp+0x34]
        add esp, 0x10
        test al, al
        jne public_6d2db07
        public_6d2daed : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d2da98
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d2da98
        public_6d2db07 : nop
        mov eax, 1
        public_6d2db0c : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        pop ebx
        je public_6d2db54
        mov al, byte ptr ss : [esp+0xF]
        test al, al
        jne public_6d2db54
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d2db44
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d2db34 : nop
        je public_6d2db54
        public_6d2db36 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0x10
        ret 8
        public_6d2db44 : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_6d2db36
        mov ecx, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [edi+8], ecx
        jmp public_6d2db34
        public_6d2db54 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6d2d9c0)
    }
}

#undef public_6d2d9f4
#undef public_6d2da04
#undef public_6d2da1c
#undef public_6d2da36
#undef public_6d2da3b
#undef public_6d2da48
#undef public_6d2da4d
#undef public_6d2da80
#undef public_6d2da98
#undef public_6d2daa8
#undef public_6d2daed
#undef public_6d2db07
#undef public_6d2db0c
#undef public_6d2db34
#undef public_6d2db36
#undef public_6d2db44
#undef public_6d2db54
