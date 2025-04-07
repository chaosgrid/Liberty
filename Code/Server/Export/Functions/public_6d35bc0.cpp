#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d299e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);
CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d35c09 _public_6d35c09
#define public_6d35c19 _public_6d35c19
#define public_6d35c35 _public_6d35c35
#define public_6d35c51 _public_6d35c51
#define public_6d35c55 _public_6d35c55
#define public_6d35c5a _public_6d35c5a
#define public_6d35c8c _public_6d35c8c
#define public_6d35ca3 _public_6d35ca3
#define public_6d35cb1 _public_6d35cb1
#define public_6d35cc6 _public_6d35cc6
#define public_6d35cca _public_6d35cca
#define public_6d35d03 _public_6d35d03
#define public_6d35d1b _public_6d35d1b
#define public_6d35d2b _public_6d35d2b
#define public_6d35d43 _public_6d35d43
#define public_6d35d5d _public_6d35d5d
#define public_6d35d62 _public_6d35d62
#define public_6d35d8a _public_6d35d8a
#define public_6d35da0 _public_6d35da0
#define public_6d35db7 _public_6d35db7
#define public_6d35e06 _public_6d35e06
#define public_6d35e1c _public_6d35e1c
#define public_6d35e2c _public_6d35e2c
#define public_6d35e64 _public_6d35e64
#define public_6d35e7e _public_6d35e7e
#define public_6d35e83 _public_6d35e83
#define public_6d35e97 _public_6d35e97
#define public_6d35e9b _public_6d35e9b
#define public_6d35eab _public_6d35eab
#define public_6d35eb6 _public_6d35eb6

PROC_DECLARE(0x6d35bc0, internal_6d35bc0, public_6d35bc0);
extern "C" NAKED register_t __cdecl internal_6d35bc0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0xC]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        cmp eax, ebp
        push esi
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_6d35d8a
        mov eax, dword ptr ds : [ecx+8]
        xor esi, esi
        mov si, word ptr ss : [ebp]
        cmp si, 0xFF
        push edi
        mov edi, dword ptr ds : [eax+8]
        ja public_6d35c19
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d35c51
        public_6d35c09 : nop
        push esi
        mov ecx, edi
        call public_6d3ea70
        test al, al
        jne public_6d35c55
        xor eax, eax
        jmp public_6d35c5a
        public_6d35c19 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d35c35
        push esi
        mov ecx, edi
        call public_6d3eb90
        test al, al
        jne public_6d35c51
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d35c35 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d35c09
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d35c09
        jmp public_6d35c55
        public_6d35c51 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d35c55 : nop
        mov eax, 1
        public_6d35c5a : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        pop edi
        je public_6d35d8a
        lea eax, ss:[ebp+2]
        cmp eax, ebp
        jne public_6d35cb1
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+4]
        test ecx, ecx
        je public_6d35c8c
        mov eax, dword ptr ds : [ecx]
        push ebp
        push ebx
        call dword ptr ds : [eax+4]
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 8
        ret 8
        public_6d35c8c : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d35ca3
        cmp dword ptr ds : [ebx+8], ebp
        jne public_6d35ca3
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d35ca3 : nop
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d35cb1 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, ecx
        je public_6d35cc6
        mov ebp, eax
        mov dword ptr ss : [esp+0x10], 1
        public_6d35cc6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_6d35cca : nop
        cmp eax, ecx
        jae public_6d35da0
        cmp dword ptr ds : [ebx+0xC], ebp
        je public_6d35eb6
        mov edx, dword ptr ss : [esp+0xC]
        mov bx, word ptr ss : [ebp]
        cmp bx, 0xFF
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax+8]
        ja public_6d35d2b
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d35d03
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d35d03 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d35d5d
        public_6d35d1b : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d35d5d
        xor eax, eax
        jmp public_6d35d62
        public_6d35d2b : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d35d43
        push ebx
        mov ecx, esi
        call public_6d3eb90
        test al, al
        jne public_6d35d5d
        public_6d35d43 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d35d1b
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d35d1b
        public_6d35d5d : nop
        mov eax, 1
        public_6d35d62 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d35eb6
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0xC]
        mov ebx, dword ptr ss : [esp+0x18]
        add ebp, 2
        inc eax
        mov dword ptr ss : [esp+0x10], eax
        jmp public_6d35cca
        public_6d35d8a : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jne public_6d35eb6
        lea esp, ss:[esp]
        public_6d35da0 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6d35e1c
        mov edx, dword ptr ds : [ecx]
        push ebp
        push ebx
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d35db7 : nop
        jne public_6d35eab
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [eax+0x10]
        jae public_6d35eb6
        mov eax, dword ptr ds : [ebx+0xC]
        inc ecx
        cmp eax, ebp
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d35eb6
        mov edx, dword ptr ss : [esp+0xC]
        mov bx, word ptr ss : [ebp]
        cmp bx, 0xFF
        mov eax, dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [eax+8]
        ja public_6d35e2c
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d35e06
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d35e06 : nop
        mov edx, 1
        shr eax, 5
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        jmp public_6d35e97
        public_6d35e1c : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d35eab
        cmp dword ptr ds : [ebx+8], ebp
        jmp public_6d35db7
        public_6d35e2c : nop
        mov ecx, dword ptr ds : [esi+0x30]
        test ecx, ecx
        je public_6d35e64
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_6d35e64
        mov eax, dword ptr ds : [esi+0x34]
/*FIXUP push offset _public_6d299e0 @0x6d35e42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d299e0
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        push ecx
        mov word ptr ss : [esp+0x2C], bx
        mov word ptr ss : [esp+0x2E], bx
        call public_6d40890
        add esp, 0x10
        test al, al
        jne public_6d35e7e
        public_6d35e64 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d35e9b
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d35e9b
        public_6d35e7e : nop
        mov eax, 1
        public_6d35e83 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d35eb6
        mov ebx, dword ptr ss : [esp+0x18]
        add ebp, 2
        jmp public_6d35da0
        public_6d35e97 : nop
        test eax, eax
        jne public_6d35e7e
        public_6d35e9b : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d35e7e
        xor eax, eax
        jmp public_6d35e83
        public_6d35eab : nop
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d35eb6 : nop
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d35bc0)
    }
}

#undef public_6d35c09
#undef public_6d35c19
#undef public_6d35c35
#undef public_6d35c51
#undef public_6d35c55
#undef public_6d35c5a
#undef public_6d35c8c
#undef public_6d35ca3
#undef public_6d35cb1
#undef public_6d35cc6
#undef public_6d35cca
#undef public_6d35d03
#undef public_6d35d1b
#undef public_6d35d2b
#undef public_6d35d43
#undef public_6d35d5d
#undef public_6d35d62
#undef public_6d35d8a
#undef public_6d35da0
#undef public_6d35db7
#undef public_6d35e06
#undef public_6d35e1c
#undef public_6d35e2c
#undef public_6d35e64
#undef public_6d35e7e
#undef public_6d35e83
#undef public_6d35e97
#undef public_6d35e9b
#undef public_6d35eab
#undef public_6d35eb6
