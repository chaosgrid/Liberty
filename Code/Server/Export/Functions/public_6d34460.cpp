#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);

#define public_6d344c2 _public_6d344c2
#define public_6d344da _public_6d344da
#define public_6d344ea _public_6d344ea
#define public_6d34506 _public_6d34506
#define public_6d34520 _public_6d34520
#define public_6d34525 _public_6d34525
#define public_6d3454f _public_6d3454f
#define public_6d345b2 _public_6d345b2
#define public_6d345b4 _public_6d345b4

PROC_DECLARE(0x6d34460, internal_6d34460, public_6d34460);
extern "C" NAKED register_t __cdecl internal_6d34460()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+0x14]
        mov ebp, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx+0x10]
        sub ebp, 4
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6d3454f
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [edi+0x10]
        mov bx, word ptr ds : [edx]
        test bx, bx
        je public_6d3454f
        cmp bx, 0xFF
        mov esi, dword ptr ds : [eax+0xC]
        ja public_6d344ea
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d344c2
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d344c2 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d34520
        public_6d344da : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d34520
        xor eax, eax
        jmp public_6d34525
        public_6d344ea : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d34506
        push ebx
        mov ecx, esi
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x1C]
        jne public_6d34520
        public_6d34506 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d344da
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d344da
        public_6d34520 : nop
        mov eax, 1
        public_6d34525 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d3454f
        mov ecx, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        add ecx, 2
        mov dword ptr ds : [edi+0x10], ecx
        inc dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d3454f : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add esi, 0xFFFFFFF8
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], esi
        jne public_6d345b2
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
        jmp public_6d345b4
        public_6d345b2 : nop
        mov eax, ecx
        public_6d345b4 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x10], ecx
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+8], edx
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d34460)
    }
}

#undef public_6d344c2
#undef public_6d344da
#undef public_6d344ea
#undef public_6d34506
#undef public_6d34520
#undef public_6d34525
#undef public_6d3454f
#undef public_6d345b2
#undef public_6d345b4
