#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);

#define public_6d31e4c _public_6d31e4c
#define public_6d31e64 _public_6d31e64
#define public_6d31e73 _public_6d31e73
#define public_6d31eb7 _public_6d31eb7
#define public_6d31ecf _public_6d31ecf
#define public_6d31edf _public_6d31edf
#define public_6d31efb _public_6d31efb
#define public_6d31f15 _public_6d31f15
#define public_6d31f1a _public_6d31f1a
#define public_6d31f2a _public_6d31f2a
#define public_6d31f2e _public_6d31f2e
#define public_6d31f37 _public_6d31f37
#define public_6d31f4a _public_6d31f4a
#define public_6d31f65 _public_6d31f65
#define public_6d31f71 _public_6d31f71
#define public_6d31f7d _public_6d31f7d

PROC_DECLARE(0x6d31dd0, internal_6d31dd0, public_6d31dd0);
extern "C" NAKED register_t __cdecl internal_6d31dd0()
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
        je public_6d31f2e
        cmp dword ptr ds : [ebx+0xC], edi
        je public_6d31f2e
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0xC]
        xor eax, eax
        mov ax, word ptr ds : [edi]
        push eax
        call public_6d3e580
        test al, al
        je public_6d31f2a
        add edi, 2
        mov eax, edi
        sub eax, esi
        sar eax, 1
        neg eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_6d31e73
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov eax, ebx
        je public_6d31e4c
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
        public_6d31e4c : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d31e64
        cmp dword ptr ds : [eax+8], edi
        jne public_6d31e64
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ret 8
        public_6d31e64 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d31e73 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jae public_6d31f2a
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp dword ptr ds : [ecx+0xC], edi
        je public_6d31f2a
        mov bx, word ptr ds : [edi]
        cmp bx, 0xFF
        mov edx, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edx+0xC]
        ja public_6d31edf
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d31eb7
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d31eb7 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d31f15
        public_6d31ecf : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d31f15
        xor eax, eax
        jmp public_6d31f1a
        public_6d31edf : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d31efb
        push ebx
        mov ecx, esi
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d31f15
        public_6d31efb : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d31ecf
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d31ecf
        public_6d31f15 : nop
        mov eax, 1
        public_6d31f1a : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d31f2a
        add edi, 2
        jmp public_6d31e73
        public_6d31f2a : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6d31f2e : nop
        mov edx, dword ptr ss : [esp+0x20]
        cmp dword ptr ss : [ebp+0xC], edx
        ja public_6d31f7d
        public_6d31f37 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6d31f65
        mov eax, dword ptr ds : [ecx]
        push edi
        push ebx
        call dword ptr ds : [eax+4]
        movzx eax, al
        test al, al
        public_6d31f4a : nop
        jne public_6d31f71
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [esp+0x20]
        cmp ecx, eax
        je public_6d31f7d
        mov edx, dword ptr ss : [esp+0x14]
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        lea edi, ds:[edi+edx*2]
        jmp public_6d31f37
        public_6d31f65 : nop
        mov al, byte ptr ds : [ebx+0x1C]
        test al, al
        je public_6d31f71
        cmp dword ptr ds : [ebx+8], edi
        jmp public_6d31f4a
        public_6d31f71 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 8
        public_6d31f7d : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d31dd0)
    }
}

#undef public_6d31e4c
#undef public_6d31e64
#undef public_6d31e73
#undef public_6d31eb7
#undef public_6d31ecf
#undef public_6d31edf
#undef public_6d31efb
#undef public_6d31f15
#undef public_6d31f1a
#undef public_6d31f2a
#undef public_6d31f2e
#undef public_6d31f37
#undef public_6d31f4a
#undef public_6d31f65
#undef public_6d31f71
#undef public_6d31f7d
