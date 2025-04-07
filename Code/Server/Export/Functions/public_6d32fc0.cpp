#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);

#define public_6d33016 _public_6d33016
#define public_6d33026 _public_6d33026
#define public_6d33042 _public_6d33042
#define public_6d3305c _public_6d3305c
#define public_6d33061 _public_6d33061
#define public_6d3308c _public_6d3308c
#define public_6d330c1 _public_6d330c1
#define public_6d330e0 _public_6d330e0
#define public_6d33115 _public_6d33115
#define public_6d3312d _public_6d3312d
#define public_6d3313d _public_6d3313d
#define public_6d33159 _public_6d33159
#define public_6d33173 _public_6d33173
#define public_6d33178 _public_6d33178
#define public_6d331a2 _public_6d331a2
#define public_6d331b5 _public_6d331b5
#define public_6d331bd _public_6d331bd
#define public_6d331d4 _public_6d331d4
#define public_6d331d6 _public_6d331d6
#define public_6d331e7 _public_6d331e7

PROC_DECLARE(0x6d32fc0, internal_6d32fc0, public_6d32fc0);
extern "C" NAKED register_t __cdecl internal_6d32fc0()
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
        je public_6d331bd
        mov ebx, dword ptr ds : [eax+0xC]
        xor edi, edi
        mov di, word ptr ds : [ecx]
        cmp di, 0xFF
        ja public_6d33026
        push edi
        lea ecx, ds:[ebx+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d3305c
        public_6d33016 : nop
        push edi
        mov ecx, ebx
        call public_6d3eb00
        test al, al
        jne public_6d3305c
        xor eax, eax
        jmp public_6d33061
        public_6d33026 : nop
        lea ecx, ds:[ebx+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d33042
        push edi
        mov ecx, ebx
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d3305c
        public_6d33042 : nop
        xor eax, eax
        mov ax, word ptr ds : [ebx+0x28]
        test ax, ax
        je public_6d33016
        push eax
        push edi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d33016
        public_6d3305c : nop
        mov eax, 1
        public_6d33061 : nop
        movzx edx, byte ptr ds : [ebx+4]
        cmp edx, eax
        je public_6d331bd
        mov ebx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        add ebx, 2
        mov eax, ebx
        sub eax, ecx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], ebx
        jne public_6d330c1
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d3308c : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov edi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, edi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d331d4
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d331d6
        public_6d330c1 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d331b5
        cmp eax, 1
        mov dword ptr ss : [esp+0x1C], 1
        jbe public_6d3308c
        lea esp, ss:[esp]
        public_6d330e0 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], edx
        mov ecx, dword ptr ds : [esi+0x10]
        cmp dword ptr ds : [esi+0xC], ecx
        je public_6d331a2
        mov bx, word ptr ds : [ecx]
        cmp bx, 0xFF
        mov edi, dword ptr ds : [eax+0xC]
        ja public_6d3313d
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d33115
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d33115 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [edi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d33173
        public_6d3312d : nop
        push ebx
        mov ecx, edi
        call public_6d3eb00
        test al, al
        jne public_6d33173
        xor eax, eax
        jmp public_6d33178
        public_6d3313d : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d33159
        push ebx
        mov ecx, edi
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d33173
        public_6d33159 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d3312d
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d3312d
        public_6d33173 : nop
        mov eax, 1
        public_6d33178 : nop
        movzx ecx, byte ptr ds : [edi+4]
        cmp ecx, eax
        je public_6d331a2
        mov edi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        add edi, 2
        mov dword ptr ds : [esi+0x10], edi
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jb public_6d330e0
        jmp public_6d3308c
        public_6d331a2 : nop
        mov edx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], edx
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d331b5 : nop
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_6d3308c
        public_6d331bd : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d3308c
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d331d4 : nop
        mov eax, edx
        public_6d331d6 : nop
        test eax, eax
        je public_6d331e7
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_6d331e7 : nop
        mov eax, dword ptr ss : [ebp+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d32fc0)
    }
}

#undef public_6d33016
#undef public_6d33026
#undef public_6d33042
#undef public_6d3305c
#undef public_6d33061
#undef public_6d3308c
#undef public_6d330c1
#undef public_6d330e0
#undef public_6d33115
#undef public_6d3312d
#undef public_6d3313d
#undef public_6d33159
#undef public_6d33173
#undef public_6d33178
#undef public_6d331a2
#undef public_6d331b5
#undef public_6d331bd
#undef public_6d331d4
#undef public_6d331d6
#undef public_6d331e7
