#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);

#define public_6d32a91 _public_6d32a91
#define public_6d32aa1 _public_6d32aa1
#define public_6d32abd _public_6d32abd
#define public_6d32ad7 _public_6d32ad7
#define public_6d32adc _public_6d32adc
#define public_6d32b03 _public_6d32b03
#define public_6d32b45 _public_6d32b45
#define public_6d32b86 _public_6d32b86
#define public_6d32b9e _public_6d32b9e
#define public_6d32bae _public_6d32bae
#define public_6d32bca _public_6d32bca
#define public_6d32be4 _public_6d32be4
#define public_6d32be9 _public_6d32be9
#define public_6d32bfe _public_6d32bfe
#define public_6d32c00 _public_6d32c00
#define public_6d32c0d _public_6d32c0d
#define public_6d32c1f _public_6d32c1f

PROC_DECLARE(0x6d32a30, internal_6d32a30, public_6d32a30);
extern "C" NAKED register_t __cdecl internal_6d32a30()
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
        je public_6d32b03
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [edi+0x18], ecx
        mov ecx, dword ptr ds : [edi+0x10]
        cmp edx, ecx
        je public_6d32b03
        mov ebx, dword ptr ds : [eax+0xC]
        xor esi, esi
        mov si, word ptr ds : [ecx]
        cmp si, 0xFF
        ja public_6d32aa1
        push esi
        lea ecx, ds:[ebx+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d32ad7
        public_6d32a91 : nop
        push esi
        mov ecx, ebx
        call public_6d3eb00
        test al, al
        jne public_6d32ad7
        xor eax, eax
        jmp public_6d32adc
        public_6d32aa1 : nop
        lea ecx, ds:[ebx+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d32abd
        push esi
        mov ecx, ebx
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d32ad7
        public_6d32abd : nop
        xor eax, eax
        mov ax, word ptr ds : [ebx+0x28]
        test ax, ax
        je public_6d32a91
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d32a91
        public_6d32ad7 : nop
        mov eax, 1
        public_6d32adc : nop
        movzx edx, byte ptr ds : [ebx+4]
        cmp edx, eax
        je public_6d32b03
        mov esi, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        add esi, 2
        mov eax, esi
        sub eax, edx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [edi+0x10], esi
        jne public_6d32b45
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d32b03 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, dword ptr ss : [ebp+0xC]
        jb public_6d32c1f
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov ebx, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, ebx
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d32bfe
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d32c00
        public_6d32b45 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jae public_6d32b03
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x18], edx
        mov ecx, dword ptr ds : [edi+0x10]
        cmp dword ptr ds : [edi+0xC], ecx
        je public_6d32b03
        mov bx, word ptr ds : [ecx]
        cmp bx, 0xFF
        mov esi, dword ptr ds : [eax+0xC]
        ja public_6d32bae
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d32b86
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d32b86 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d32be4
        public_6d32b9e : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d32be4
        xor eax, eax
        jmp public_6d32be9
        public_6d32bae : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d32bca
        push ebx
        mov ecx, esi
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d32be4
        public_6d32bca : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d32b9e
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d32b9e
        public_6d32be4 : nop
        mov eax, 1
        public_6d32be9 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d32b03
        add dword ptr ds : [edi+0x10], 2
        jmp public_6d32b45
        public_6d32bfe : nop
        mov eax, edx
        public_6d32c00 : nop
        test eax, eax
        je public_6d32c0d
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], esi
        public_6d32c0d : nop
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d32c1f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x10], ecx
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d32a30)
    }
}

#undef public_6d32a91
#undef public_6d32aa1
#undef public_6d32abd
#undef public_6d32ad7
#undef public_6d32adc
#undef public_6d32b03
#undef public_6d32b45
#undef public_6d32b86
#undef public_6d32b9e
#undef public_6d32bae
#undef public_6d32bca
#undef public_6d32be4
#undef public_6d32be9
#undef public_6d32bfe
#undef public_6d32c00
#undef public_6d32c0d
#undef public_6d32c1f
