#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);

#define public_6d36d54 _public_6d36d54
#define public_6d36d6c _public_6d36d6c
#define public_6d36d7c _public_6d36d7c
#define public_6d36d98 _public_6d36d98
#define public_6d36db2 _public_6d36db2
#define public_6d36db7 _public_6d36db7
#define public_6d36de1 _public_6d36de1
#define public_6d36e44 _public_6d36e44
#define public_6d36e46 _public_6d36e46

PROC_DECLARE(0x6d36cf0, internal_6d36cf0, public_6d36cf0);
extern "C" NAKED register_t __cdecl internal_6d36cf0()
{
    __asm
    {
        sub esp, 8
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi+0x14]
        mov ebp, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx+0x10]
        sub ebp, 4
        cmp edx, eax
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x18], ebp
        je public_6d36de1
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [edi+0x18], ecx
        mov ecx, dword ptr ds : [edi+0x10]
        cmp edx, ecx
        je public_6d36de1
        mov esi, dword ptr ds : [eax+8]
        push ebx
        mov bx, word ptr ds : [ecx]
        cmp bx, 0xFF
        ja public_6d36d7c
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d36d54
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d36d54 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d36db2
        public_6d36d6c : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d36db2
        xor eax, eax
        jmp public_6d36db7
        public_6d36d7c : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d36d98
        push ebx
        mov ecx, esi
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x1C]
        jne public_6d36db2
        public_6d36d98 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d36d6c
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d36d6c
        public_6d36db2 : nop
        mov eax, 1
        public_6d36db7 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        pop ebx
        je public_6d36de1
        mov ecx, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        add ecx, 2
        mov dword ptr ds : [edi+0x10], ecx
        inc dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 8
        ret 4
        public_6d36de1 : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add esi, 0xFFFFFFF8
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], esi
        jne public_6d36e44
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
        jmp public_6d36e46
        public_6d36e44 : nop
        mov eax, ecx
        public_6d36e46 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x10], ecx
        pop edi
        pop esi
        mov dword ptr ss : [esp+8], edx
        xor al, al
        pop ebp
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d36cf0)
    }
}

#undef public_6d36d54
#undef public_6d36d6c
#undef public_6d36d7c
#undef public_6d36d98
#undef public_6d36db2
#undef public_6d36db7
#undef public_6d36de1
#undef public_6d36e44
#undef public_6d36e46
